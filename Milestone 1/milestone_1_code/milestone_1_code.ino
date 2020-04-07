#include <ZumoShield.h>
ZumoMotors motors;

void setup() {
}

void loop() {
  motors.setSpeeds(300,284);  
  delay(4000);
  motors.setSpeeds(0,0);
  while(true){}
}
