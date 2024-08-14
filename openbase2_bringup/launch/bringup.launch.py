import launch
from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Start the diff_drive_node
        ExecuteProcess(
            cmd=['ros2', 'run', 'openbase2_scripts', 'diff_drive_node'],
            output='screen'
        ),

        # Start the odom_node
        ExecuteProcess(
            cmd=['ros2', 'run', 'openbase2_scripts', 'odom_node'],
            output='screen'
        ),

        # Start the micro_ros_agent with serial communication
        ExecuteProcess(
            cmd=['ros2', 'run', 'micro_ros_agent', 'micro_ros_agent', 'serial', '--dev', '/dev/ttyUSB0'],
            output='screen'
        ),
    ])

if __name__ == '__main__':
    generate_launch_description()
