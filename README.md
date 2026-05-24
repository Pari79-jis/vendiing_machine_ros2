# Vending Machine ROS2

A smart vending machine simulation built using ROS2 Python services on Ubuntu 22.04 with ROS2 Humble.

## Features
- Custom `.srv` file for client-server communication
- Payment handling — exact, overpaid, underpaid, out of stock
- Sunday special with free candy and Bible verse cards
- Marvel rewards based on purchase amount

## Run
```bash
colcon build --symlink-install
source install/setup.bash
ros2 run vending_machine vending_server  # Terminal 1
ros2 run vending_machine vending_client  # Terminal 2
```
