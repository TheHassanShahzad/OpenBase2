import rclpy
from rclpy.node import Node
from openbase2_msgs.msg import MotorVels, EncoderData
import serial
import time

# Serial port configuration
SERIAL_PORT = '/dev/ttyUSB0'  # Update this with your actual serial port
BAUD_RATE = 115200

START_BYTE = b'\x02'
STOP_BYTE = b'\x03'

class EncoderNode(Node):

    def __init__(self):
        super().__init__('encoder_node')
        self.subscription = self.create_subscription(
            MotorVels,
            '/motor_vels',
            self.motor_vels_callback,
            10)
        self.publisher = self.create_publisher(
            EncoderData,
            '/encoder_data',
            10)
        self.get_logger().info('EncoderNode has been started')

        self.right_encoder_counts = 0
        self.left_encoder_counts = 0
        self.right_wheel_pwm = 0
        self.left_wheel_pwm = 0

    def motor_vels_callback(self, msg):
        self.right_wheel_pwm = msg.right_pwm
        self.left_wheel_pwm = msg.left_pwm

    def publish_encoder_data(self):
        encoder_data = EncoderData()
        encoder_data.right_encoder = int(self.right_encoder_counts)
        encoder_data.left_encoder = int(self.left_encoder_counts)
        self.publisher.publish(encoder_data)
        print(f'Published encoder data: right={encoder_data.right_encoder}, left={encoder_data.left_encoder}')

def send_command(command):
    try:
        with serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1) as ser:
            ser.flushInput()
            ser.flushOutput()
            full_command = START_BYTE + command.encode() + STOP_BYTE
            ser.write(full_command)
            response = ser.read_until(STOP_BYTE)
            if response.startswith(START_BYTE) and response.endswith(STOP_BYTE):
                return response[1:-1].decode().strip()
    except serial.SerialException as e:
        print(f"Serial communication error: {e}")
    return None

def main(args=None):
    rclpy.init(args=args)
    node = EncoderNode()

    if send_command("RR") == "OK":
        if send_command("RL") == "OK":
            try:
                while rclpy.ok():
                    # Process incoming messages
                    rclpy.spin_once(node, timeout_sec=0.01)
                    
                    # Read encoder values
                    right_encoder_counts = send_command("ER")
                    left_encoder_counts = send_command("EL")
                    if right_encoder_counts is not None and left_encoder_counts is not None:
                        node.right_encoder_counts = int(right_encoder_counts)
                        node.left_encoder_counts = int(left_encoder_counts)
                        node.publish_encoder_data()

                        # Send PWM values to motors
                        send_command(f"VR,{node.right_wheel_pwm}")
                        send_command(f"VL,{node.left_wheel_pwm}")
                        print(f"Sent wheel PWM values: right={node.right_wheel_pwm}, left={node.left_wheel_pwm}")

            except KeyboardInterrupt:
                print("Shutting down...")
            finally:
                node.destroy_node()
                rclpy.shutdown()
        else:
            print("Failed to initialize left motor.")
    else:
        print("Failed to initialize right motor.")

if __name__ == "__main__":
    main()
