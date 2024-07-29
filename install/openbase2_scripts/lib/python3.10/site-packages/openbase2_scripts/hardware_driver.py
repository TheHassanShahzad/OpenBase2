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

right_encoder_counts = 0
left_encoder_counts = 0
right_wheel_pwm = 0
left_wheel_pwm = 0

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

    def motor_vels_callback(self, msg):
        global left_wheel_pwm, right_wheel_pwm

        right_wheel_pwm = msg.right_pwm
        left_wheel_pwm = msg.left_pwm
        self.get_logger().info(f'Updated PWM values: right={right_wheel_pwm}, left={left_wheel_pwm}')

    def publish_encoder_data(self):
        global right_encoder_counts, left_encoder_counts
        
        encoder_data = EncoderData()
        encoder_data.right_encoder = int(right_encoder_counts)
        encoder_data.left_encoder = int(left_encoder_counts)
        
        self.publisher.publish(encoder_data)
        self.get_logger().info(f'Published encoder data: right={encoder_data.right_encoder}, left={encoder_data.left_encoder}')


def send_command(command):
    try:
        with serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1) as ser:
            ser.flushInput()
            ser.flushOutput()
            
            full_command = START_BYTE + command.encode() + STOP_BYTE
            ser.write(full_command)
            
            response = b''
            while True:
                byte = ser.read()
                if not byte:
                    break
                response += byte
                if byte == STOP_BYTE:
                    break

            if response.startswith(START_BYTE) and response.endswith(STOP_BYTE):
                response = response[1:-1]
            
            return response.decode().strip()
    except serial.SerialException as e:
        print(f"Serial communication error: {e}")
        return None


def main(args=None):
    global right_encoder_counts, left_encoder_counts, right_wheel_pwm, left_wheel_pwm
    
    rclpy.init(args=args)
    node = EncoderNode()

    response = send_command("RR")
    if response == "OK":
        response = send_command("RL")
        if response == "OK":
            try:
                while rclpy.ok():
                    rclpy.spin_once(node, timeout_sec=0.1)
                    
                    right_encoder_counts = send_command("ER")
                    left_encoder_counts = send_command("EL")
                    if right_encoder_counts is not None and left_encoder_counts is not None:
                        right_encoder_counts = int(right_encoder_counts)
                        left_encoder_counts = int(left_encoder_counts)
                        node.publish_encoder_data()

                        # print(f"Sending VR, {right_wheel_pwm}")
                        response = send_command("VR, " + str(right_wheel_pwm))
                        if response == "OK":
                            response = send_command("VL, " + str(left_wheel_pwm))
                            if response == "OK":
                                print("Sent wheel PWM values")

                    time.sleep(0.01)
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
