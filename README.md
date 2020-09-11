# Robot Competition (Vassar College)

This is a semester-long school project for a Robotics Competition in Vassar College (Cognitive Science 220 course).

COGS 220 is a course that gives students with an interest in robotics an opportunity to explore basic principles of robot design and programming in a hands-on laboratory environment. The specific nature of the task to be accomplished varies each year, but in all cases the problems to be solved require thinking about the key issues that confront any robot designer: How is the robot situated in its environment? How does the design of the robot’s body affect its intelligence? What are the optimal strategies for programming flexible intelligence in the robot (e.g., behavior-based or reactive systems, world modeling and planning systems, hybrid systems)? Students are organized into teams with balanced skill sets and compete to complete the assigned task most effectively in an end-of-semester competition. The design and construction components of the course are supported by classroom instruction in basic electronics, hardware design and building techniques, and relevant programming skills.

## Requirements
Hardware:
* (1) Arduino UNO
* (1) Pololu ZUMO Robot Kit
* (1) Pololu Micro Gear Motor set of 2
* (4) AA Batteries
* (1) Roll of black electrical tape

Software:
* Download the [Arduino IDE](https://www.arduino.cc/en/main/software)
  * With the Arduino IDE, download the ZumoShield library by going to Sketch > Include Library > Manage Libraries > Search for "ZumoShield" > Click ZumoShield > Click "Install." Otherwise, go to the ![official Zumo documentation](https://www.pololu.com/docs/0J57/6) for updated instructions.
* Basic C++ knowledge

## Hints

<details>
  <summary>Hint: Source codes</summary>
  
  ```
  To get the working source code of a maze-solving Pololu robot, go to File > Examples > ZumoShield > MazeSolver. Otherwise, go to the ![official Zumo documentation](https://www.pololu.com/docs/0J57/7.e) for updated instructions.
  ```
</details>

<details>
  <summary>Hint: Strategy</summary>
  
  ```
  To solve any maze that includes any loops, employ the "left hand on the wall" strategy in your code.
  ```
</details>

## Milestones

This project is divided into easy-to-follow milestones. The source code for each can be accessed in their respective directories.

### Milestone 1: Create your own code that moves the Zumo at least 4 feet.

* Out-of-the-box, my particular Zumo robot veers to the left by default if the left and right motor speeds are kept the same. I found that a ratio of 300:284 made my robot move straight.

* The line in the video measures 48in or 4ft.

* <details>
  <summary>Hint: Motor speeds</summary>
  
  ```
  Start out by testing with equal Left and Right Motor speeds.
  If the robot veers to the left, then the Left Motor should be given a higher speed.
  Else if the robot veers to the right, then the Right Motor should be given a higher speed.
  ```
</details>

![Milestone 1 Video](../Media/Milestone-1.gif)

The source codes provided are optimized for dark wood flooring with dark lines; however, if your floor is even darker than the one I optimized to, either some variables may have to be adjusted or putting plain white paper underneath the tape could let the robot run as intended.

### Milestone 2: Get the Zumo to follow a line on the floor for at least 4 feet.

* I chose the PD (proportional–derivative) control method because it seemed to offer less oscillations for my dark wood floor.

* The provided source code does not stop after 4 feet, but it does move the Zumo at least 4 feet.

* The line in the video measures 48in or 4ft.

* <details>
  <summary>Hint: Turning radius</summary>
  
  ```
  There are two kinds of turning: (Regular) Turning and Zero-Radius Turning. Regular Turning is more like a car such that it takes some distance in order to turn around a corner while Zero-Radius Turning is more like a forklift, Roomba® or Zero-Turn mowers such that they do not cover any distance when turning.
  Regular Turning can be achieved by making one motor faster than the other. Whichever motor (left or right) is slower is the direction that the ZumoBot would turn.
  Zero-Radius Turning can be achieved by giving one motor some positive speed and giving the other motor the same speed but negative. Whichever motor (left or right) has the negative value is the direction that the ZumoBot would turn.
  ```
</details>

![Milestone 2 Video](../Media/Milestone-2.gif)
