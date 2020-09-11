# Milestone 2: Get the Zumo to follow a line on the floor for at least 4 feet.

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

![4-Foot Line](../Media/Line.png)
