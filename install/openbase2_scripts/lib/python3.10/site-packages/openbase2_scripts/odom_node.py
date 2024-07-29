import rclpy
from rclpy.node import Node
from openbase2_msgs.msg import EncoderData
from nav_msgs.msg import Odometry
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
import tf_transformations
import math

class OdomPublisher(Node):

    def __init__(self):
        super().__init__('odom_publisher')
        self.subscription = self.create_subscription(
            EncoderData,
            '/encoder_data',
            self.encoder_callback,
            10)
        self.odom_publisher = self.create_publisher(Odometry, '/odom', 10)
        self.tf_broadcaster = TransformBroadcaster(self)
        self.get_logger().info('OdomPublisher has been started')

        self.wheel_base = 0.46  # Distance between wheels in meters
        self.wheel_radius = 0.0793765  # Radius of the wheel in meters
        self.ticks_per_meter = 180.455  # Example value: number of encoder ticks per meter

        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        self.previous_right_ticks = None
        self.previous_left_ticks = None

    def encoder_callback(self, msg):
        if self.previous_right_ticks is None or self.previous_left_ticks is None:
            self.previous_right_ticks = msg.right_encoder
            self.previous_left_ticks = msg.left_encoder
            return

        delta_right = msg.right_encoder - self.previous_right_ticks
        delta_left = msg.left_encoder - self.previous_left_ticks

        self.previous_right_ticks = msg.right_encoder
        self.previous_left_ticks = msg.left_encoder

        distance_right = delta_right / self.ticks_per_meter
        distance_left = delta_left / self.ticks_per_meter

        distance_center = (distance_right + distance_left) / 2.0
        delta_theta = (distance_right - distance_left) / self.wheel_base

        self.x += distance_center * math.cos(self.theta)
        self.y += distance_center * math.sin(self.theta)
        self.theta += delta_theta

        self.publish_odom()
        self.publish_tf()

    def publish_odom(self):
        odom = Odometry()
        odom.header.stamp = self.get_clock().now().to_msg()
        odom.header.frame_id = 'odom'
        odom.child_frame_id = 'base_footprint'

        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.position.z = 0.0
        quaternion = tf_transformations.quaternion_from_euler(0, 0, self.theta)
        odom.pose.pose.orientation.x = quaternion[0]
        odom.pose.pose.orientation.y = quaternion[1]
        odom.pose.pose.orientation.z = quaternion[2]
        odom.pose.pose.orientation.w = quaternion[3]

        odom.twist.twist.linear.x = 0.0  # These can be calculated if needed
        odom.twist.twist.linear.y = 0.0
        odom.twist.twist.angular.z = 0.0

        self.odom_publisher.publish(odom)

    def publish_tf(self):
        t = TransformStamped()

        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'odom'
        t.child_frame_id = 'base_footprint'

        t.transform.translation.x = self.x
        t.transform.translation.y = self.y
        t.transform.translation.z = 0.0
        quaternion = tf_transformations.quaternion_from_euler(0, 0, self.theta)
        t.transform.rotation.x = quaternion[0]
        t.transform.rotation.y = quaternion[1]
        t.transform.rotation.z = quaternion[2]
        t.transform.rotation.w = quaternion[3]

        self.tf_broadcaster.sendTransform(t)

def main(args=None):
    rclpy.init(args=args)
    node = OdomPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
