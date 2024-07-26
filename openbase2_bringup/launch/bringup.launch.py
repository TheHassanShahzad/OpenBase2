import os
from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # Launch display.launch.py from openbase2_description
        ExecuteProcess(
            cmd=['ros2', 'launch', 'openbase2_description', 'display.launch.py'],
            output='screen'
        ),
        
        # Run hardware_driver from openbase2_scripts
        ExecuteProcess(
            cmd=['ros2', 'run', 'openbase2_scripts', 'hardware_driver'],
            output='screen'
        ),
        
        # Run odom_node from openbase2_scripts
        ExecuteProcess(
            cmd=['ros2', 'run', 'openbase2_scripts', 'odom_node'],
            output='screen'
        ),
        
        # Run diff_drive_node from openbase2_scripts
        ExecuteProcess(
            cmd=['ros2', 'run', 'openbase2_scripts', 'diff_drive_node'],
            output='screen'
        ),
    ])
