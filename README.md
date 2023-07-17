# Servo and DC Motor

This repository contains the code and design files for two tasks: building a servo motor and a DC motor in Tinkercad, and programming them using Arduino.

## Servo Motor
![image](https://github.com/AtheerAldawsari1/Servo-and-DC-Motor/assets/139083849/13da6afc-c7fa-4348-8b43-87e4b81563f1)

### Design

The servo motor was designed in Tinkercad using the following components:
- Micro Servo
- Jumper Wires
- Arduino Uno
The design uses a Micro Servo and an Arduino Uno to create a rotational motion.

### Programming

The code uses the Servo library in Arduino to control the rotation of a servo motor attached to pin 13. The motor rotates back and forth between 0 and 180 degrees, with a delay of 1 second (1000 milliseconds )between each rotation. The delay(15) function sets the speed of the servo motor by adjusting the time it takes to move to its next position.

## DC Motor
![image](https://github.com/AtheerAldawsari1/Servo-and-DC-Motor/assets/139083849/9fc7a5b4-1054-45df-ba2d-57efad84268e)

### Design

The DC motor was designed in Tinkercad using the following components:
- DC Motor
- Jumper Wires
- L293D
- 9V battery 
- Arduino Uno 

The design uses a DC motor, L293D motor driver, and Arduino Uno, along with a 9V battery and jumper wires, to control the motor's speed and direction. The L293D motor driver uses the Arduino's output signals to drive the motor, while the 9V battery powers the circuit.

### Programming

The code uses digitalWrite() to control the voltage on pins 12 and 13 of the Arduino board, which controls the direction and rotation of a DC motor. The motor rotates in one direction for 5 seconds, then in the opposite direction for 5 seconds, and the cycle repeats.

## Contact

If you have any questions or feedback, please contact me at [Atheeraldossri1@gmail.com].
