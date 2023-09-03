# RC Car with Arduino Control

![Arduino Logo](https://www.arduino.cc/en/uploads/Trademark/ArduinoCommunityLogo.png)

This repository contains the Arduino code and wiring instructions to build and control an RC car using an Arduino board. The code allows you to remotely control the movement of the car using keyboard inputs via the Serial Monitor in the Arduino IDE.

## Features
- Forward, backward, right, and left movement control.
- Customizable motor pin configurations.
- Responsive control through Serial communication.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 2 DC motors for the wheels
- Motor driver module (e.g., L298N)
- RC car chassis
- Power source (e.g., battery pack)
- Jumper wires

## Wiring Instructions
1. Connect the DC motors to the motor driver module (L298N):
   - Motor 1:
     - Connect the positive wire of Motor 1 to `m1pin1` of the motor driver.
     - Connect the negative wire of Motor 1 to `m1pin2` of the motor driver.
   - Motor 2:
     - Connect the positive wire of Motor 2 to `m2pin1` of the motor driver.
     - Connect the negative wire of Motor 2 to `m2pin2` of the motor driver.

2. Connect the motor driver module to the Arduino board:
   - Connect the `ENA` and `ENB` pins of the motor driver to any PWM pins on the Arduino (e.g., pins 3 and 9).
   - Connect the input pins (`IN1`, `IN2`, `IN3`, and `IN4`) of the motor driver to the corresponding pins defined in the code.

3. Power the motor driver and the Arduino using an external power source (e.g., battery pack).

4. Connect the Arduino board to your computer using a USB cable.

## Software Setup
1. Install the Arduino IDE from the official website: [Arduino IDE](https://www.arduino.cc/en/software).

2. Open the Arduino IDE and create a new sketch.

3. Copy and paste the provided code from the `RC_car_control.ino` file in this repository into the Arduino IDE.

4. Upload the code to the Arduino board.

5. Open the Serial Monitor in the Arduino IDE to interact with the RC car:
   - Make sure the baud rate is set to 9600.

## Usage
In the Serial Monitor, type the following commands to control the RC car:
- `F`: Move forward
- `B`: Move backward
- `R`: Turn right
- `L`: Turn left

## Customization
You can customize the motor pin configurations by modifying the `#define` statements at the beginning of the code. Ensure that the pin numbers match the physical connections on your setup.
```cpp
#define m1pin1 4
#define m1pin2 5
#define m2pin1 6
#define m2pin2 7
```

## Troubleshooting
- Double-check your wiring to ensure all connections are accurate and secure.
- Ensure that you're using an external power source to provide sufficient power to the motors and the Arduino.
- If the car doesn't respond to commands, check the Serial Monitor for any error messages.

## License
This project is licensed under the [MIT License](LICENSE).

Feel free to contribute and improve upon this project! If you encounter any issues or have suggestions, please open an issue on GitHub.

**Happy driving!**
