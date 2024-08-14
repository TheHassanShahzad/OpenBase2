from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='depthimage_to_laserscan',
            executable='depthimage_to_laserscan_node',
            name='depthimage_to_laserscan',
            output='screen',
            remappings=[
                ('depth', '/camera/camera/depth/image_rect_raw'),
                ('depth_camera_info', '/camera/camera/depth/camera_info'),
                ('scan', '/scan')
            ],
            parameters=[
                {'output_frame': 'camera_link'},
                {'range_min': 0.45},
                {'range_max': 10.0},
                {'scan_height': 10},
            ],
        ),
    ])

if __name__ == '__main__':
    generate_launch_description()
