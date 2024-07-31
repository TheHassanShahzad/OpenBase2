import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from openbase2_msgs.msg import MotorVels

class DiffDriveNode(Node):

    def __init__(self):
        super().__init__('diff_drive_node')
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10)
        self.publisher = self.create_publisher(
            MotorVels,
            '/motor_vels',
            10)
        self.get_logger().info('DiffDriveNode has been started')
        
        # Define robot parameters
        self.wheel_base = 0.1  # Distance between wheels in meters
        self.wheel_radius = 0.0793765  # Radius of the wheel in meters
        self.max_wheel_vel = 5.934  # Maximum wheel velocity in m/s (example value)

    def cmd_vel_callback(self, msg):
        self.get_logger().info(f'Received cmd_vel: linear={msg.linear.x}, angular={msg.angular.z}')
        
        # Differential drive kinematics
        v = msg.linear.x  # Linear velocity (m/s)
        omega = msg.angular.z  # Angular velocity (rad/s)
        
        # Compute the wheel velocities
        right_vel = (v + (self.wheel_base / 2.0) * omega) / self.wheel_radius
        left_vel = (v - (self.wheel_base / 2.0) * omega) / self.wheel_radius
        
        # Convert wheel velocities to PWM values
        right_pwm = int((right_vel / self.max_wheel_vel) * 255)
        left_pwm = int((left_vel / self.max_wheel_vel) * 255)
        
        # Ensure PWM values are within the range [-255, 255]
        right_pwm = max(min(right_pwm, 255), -255)
        left_pwm = max(min(left_pwm, 255), -255)
        
        motor_vels = MotorVels()
        motor_vels.right_pwm = right_pwm
        motor_vels.left_pwm = left_pwm
        self.publisher.publish(motor_vels)
        
        self.get_logger().info(f'Published motor PWM values: right={motor_vels.right_pwm}, left={motor_vels.left_pwm}')

def main(args=None):
    rclpy.init(args=args)
    node = DiffDriveNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
