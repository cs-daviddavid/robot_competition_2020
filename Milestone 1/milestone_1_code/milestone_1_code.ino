// This program contains starter code originally by Prof. Joshua de Leeuw
// that has been modified to meet the milestone requirements using my particular Zumo.

#include <ZumoShield.h>
ZumoMotors motors;

void setup() {
}

void loop() {
  motors.setSpeeds(300,284); // "Go straight" is different for each robot
  delay(4000); // To move 4ft, run for 4000ms or 4s (depending on motor speeds) 
  motors.setSpeeds(0,0); // Stop the motors
  while(true){} // Stop forever or until the robot is reset
}
