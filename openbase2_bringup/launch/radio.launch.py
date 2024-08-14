import launch
from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # Start the pwm_publisher node with the specified parameter
        ExecuteProcess(
            cmd=[
                'ros2', 'run', 'radioROS', 'pwm_publisher',
                '--ros-args', '-p', 'serial_port:=/dev/ttyUSB1'
            ],
            output='screen'
        ),

        # Start the pwm_to_twist node with the specified parameters
        ExecuteProcess(
            cmd=[
                'ros2', 'run', 'radioROS', 'pwm_to_twist',
                '--ros-args', '-p', 'max_linear_speed:=0.035',
                '-p', 'max_angular_speed:=0.4'
            ],
            output='screen'
        ),
    ])

if __name__ == '__main__':
    generate_launch_description()
