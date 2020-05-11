#Milestone 3: Get the Zumo to follow a line along 2' x 2' square. (Create a square using the tape, 2ft on each side. Place the Zumo anywhere on the square and get it to follow the square for at least a full lap.)

Milestone 3 Video https://drive.google.com/file/d/1Yjsf9pXcjTq-nNxswNvtrY-dLRlBtNM0/view?usp=sharing

Notes:
- I chose the ballistic method since the dark flooring does not seem to respond well with reactive. Both the reactive and the hybrid methods cause a loop where the robot just turns forever when in a corner.
- This solution sometimes glitches such that the robot just oscillates crazily because of the dark floor. What I found to be helpful was to up the THRESHOLD from 600 to 700, and decrease turning speeds from 400 to 200.

Problem Video https://drive.google.com/file/d/117zY61KsfIq0iBApKEMy8KI1ui9bYVcN/view?usp=sharing