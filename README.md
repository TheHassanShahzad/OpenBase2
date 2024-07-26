# OpenBase2 Project

Welcome to the OpenBase2 Project! This repository contains the ROS2 packages necessary for controlling and simulating a differential drive robot. The packages included are:

- `openbase2_msgs`: Custom message definitions
- `openbase2_scripts`: Python scripts for hardware drivers and nodes
- `openbase2_description`: URDF files and robot description
- `openbase2_bringup`: Launch files for bringing up the entire system


## Installation

1. **Clone the repository:**

    ```sh
    cd <your_workspace>/src
    git clone <github-repo-url> openbase2
    ```

2. **Build the packages:**

    ```sh
    cd <your_workspace>
    colcon build
    ```

3. **Source the setup script:**

    ```sh
    . install/setup.bash
    ```

## Packages

### openbase2_msgs

This package contains custom message definitions used by other packages.

- **Messages:**
  - `MotorVels.msg`: Contains two `int16` fields for left and right PWM values.
  - `EncoderData.msg`: Contains two `int64` fields for left and right wheel encoder data.

### openbase2_scripts

This package contains Python scripts for hardware drivers and ROS2 nodes.

- **Nodes:**
  - `hardware_driver`: Handles communication with the hardware.
  - `odom_node`: Publishes odometry information based on encoder data.
  - `diff_drive_node`: Handles differential drive calculations and commands.

### openbase2_description

This package contains URDF files and robot description files for visualization and simulation.

- **Files:**
  - `display.launch.py`: Launch file to display the robot in RViz.
  - `robot.urdf`: URDF file describing the robot.

### openbase2_bringup

This package contains launch files to bring up the entire system.

- **Launch Files:**
  - `bringup.launch.py`: Launches the entire system in order.

## Usage

1. **Bring up the entire system:**

    ```sh
    ros2 launch openbase2_bringup bringup.launch.py
    ```

2. **Run individual nodes:**

    ```sh
    # Run the hardware driver
    ros2 run openbase2_scripts hardware_driver

    # Run the odometry node
    ros2 run openbase2_scripts odom_node

    # Run the differential drive node
    ros2 run openbase2_scripts diff_drive_node
    ```

3. **Visualize the robot:**

    ```sh
    ros2 launch openbase2_description display.launch.py
    ```

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

## License

This project is licensed under the [TODO: Add your license here].

## Acknowledgements

- [Your Name](mailto:your_email@example.com)

For more information, please contact the project maintainer.

