<!DOCTYPE html>
<html>
<head>
    <title>RC Car with Arduino Control</title>
</head>
<body>
    <h1>RC Car with Arduino Control</h1>
    <p>This repository contains the Arduino code and wiring instructions to build and control an RC car using an Arduino board. The code allows you to remotely control the movement of the car using keyboard inputs via the Serial Monitor in the Arduino IDE.</p>

    <h2>Features</h2>
    <ul>
        <li>Forward, backward, right, and left movement control.</li>
        <li>Customizable motor pin configurations.</li>
        <li>Responsive control through Serial communication.</li>
    </ul>

    <h2>Hardware Requirements</h2>
    <ul>
        <li>Arduino board (e.g., Arduino Uno)</li>
        <li>2 DC motors for the wheels</li>
        <li>Motor driver module (e.g., L298N)</li>
        <li>RC car chassis</li>
        <li>Power source (e.g., battery pack)</li>
        <li>Jumper wires</li>
    </ul>

    <h2>Wiring Instructions</h2>
    <ol>
        <li>Connect the DC motors to the motor driver module (L298N):
            <ul>
                <li>Motor 1:
                    <ul>
                        <li>Connect the positive wire of Motor 1 to <code>m1pin1</code> of the motor driver.</li>
                        <li>Connect the negative wire of Motor 1 to <code>m1pin2</code> of the motor driver.</li>
                    </ul>
                </li>
                <li>Motor 2:
                    <ul>
                        <li>Connect the positive wire of Motor 2 to <code>m2pin1</code> of the motor driver.</li>
                        <li>Connect the negative wire of Motor 2 to <code>m2pin2</code> of the motor driver.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Connect the motor driver module to the Arduino board:
            <ul>
                <li>Connect the <code>ENA</code> and <code>ENB</code> pins of the motor driver to any PWM pins on the Arduino (e.g., pins 3 and 9).</li>
                <li>Connect the input pins (<code>IN1</code>, <code>IN2</code>, <code>IN3</code>, and <code>IN4</code>) of the motor driver to the corresponding pins defined in the code.</li>
            </ul>
        </li>
        <li>Power the motor driver and the Arduino using an external power source (e.g., battery pack).</li>
        <li>Connect the Arduino board to your computer using a USB cable.</li>
    </ol>

    <h2>Software Setup</h2>
    <ol>
        <li>Install the Arduino IDE from the official website: <a href="https://www.arduino.cc/en/software">Arduino IDE</a>.</li>
        <li>Open the Arduino IDE and create a new sketch.</li>
        <li>Copy and paste the provided code from the <code>RC_car_control.ino</code> file in this repository into the Arduino IDE.</li>
        <li>Upload the code to the Arduino board.</li>
        <li>Open the Serial Monitor in the Arduino IDE to interact with the RC car:
            <ul>
                <li>Make sure the baud rate is set to 9600.</li>
            </ul>
        </li>
    </ol>

    <h2>Usage</h2>
    <p>In the Serial Monitor, type the following commands to control the RC car:</p>
    <ul>
        <li><code>F</code>: Move forward</li>
        <li><code>B</code>: Move backward</li>
        <li><code>R</code>: Turn right</li>
        <li><code>L</code>: Turn left</li>
    </ul>

    <h2>Customization</h2>
    <p>You can customize the motor pin configurations by modifying the <code>#define</code> statements at the beginning of the code. Ensure that the pin numbers match the physical connections on your setup.</p>
    <pre><code>#define m1pin1 4
#define m1pin2 5
#define m2pin1 6
#define m2pin2 7
    </code></pre>

    <h2>Troubleshooting</h2>
    <ul>
        <li>Double-check your wiring to ensure all connections are accurate and secure.</li>
        <li>Ensure that you're using an external power source to provide sufficient power to the motors and the Arduino.</li>
        <li>If the car doesn't respond to commands, check the Serial Monitor for any error messages.</li>
    </ul>

    <h2>License</h2>
    <p>This project is licensed under the <a href="LICENSE">MIT License</a>.</p>

    <p>Feel free to contribute and improve upon this project! If you encounter any issues or have suggestions, please open an issue on GitHub.</p>

    <p><strong>Happy driving!</strong></p>
</body>
</html>
