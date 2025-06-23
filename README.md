# RoboticArm-using-Arduino-uno
Arduino 3-Servo Controller

This Arduino sketch allows you to control 3 servo motors using serial commands.

Connections:
- Servo 1 → Pin 2
- Servo 2 → Pin 3
- Servo 3 → Pin 4

Command Format:
Send commands via Serial Monitor (baud rate: 9600):

R<angle>  → Controls Servo 1  
G<angle>  → Controls Servo 2  
U<angle>  → Controls Servo 3

Examples:
- R90 sets Servo 1 to 90 degrees
- G45 sets Servo 2 to 45 degrees
- U120 sets Servo 3 to 120 degrees

Notes:
- Angle should be between 0 and 180
- Set Serial Monitor to "No Line Ending"
