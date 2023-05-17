# Line Follower using Arduino and IR sensor

# Project Description:

Line Follower Robot with Arduino and IR Sensors

This project implements a line follower robot using Arduino and IR sensors. It explores different configurations of IR sensors, including 2 IR, 3 IR, 4 IR, 5 IR, and 6 IR combinations, to enhance line detection accuracy. The robot uses an L298N motor driver to control N20 motors and wheels for precise movement along the line.

## **Components Used:**

-   Arduino board
-   IR sensors
-   L298N motor driver
-   N20 wheels
-   N20 motors
-   Chassis.
- Lippo Battery 

## **Features:**

-   Flexible line detection using various IR sensor configurations
-   Arduino-based control system for motor control
-   Easy-to-assemble chassis for the line follower robot

## **Project Structure:**

-   `/ir_sensor_with_analogpin`: Contains the Arduino code for the line follower project using analog input.
--   `/ir_sensor_with_serialprintdigital`: Contains the Arduino code for the line follower project using digital input.

## **Installation and Usage:**

1.  Connect the IR sensors and motors according to the circuit diagram.
2.  Upload the Arduino code from  to your Arduino board using the Arduino IDE.
3.  Place the line follower robot on a line, ensuring the sensors are aligned with the track and calibrated.
4.  Power up the robot and observe its movement along the line.
5.  Adjust the sensor configuration and sensitivity parameters in the code for optimal performance if needed.
## **Results and Future Improvements:**

During the development of this project, various combinations of IR sensors were tested, leading to improved line detection capabilities. The line follower robot demonstrates reliable performance on various tracks and line types.

Possible future improvements for this project include implementing advanced line tracking algorithms, integrating PID control for smoother motion, and adding additional features such as obstacle detection and avoidance.

## License

  

[MIT](https://choosealicense.com/licenses/mit/)
