#include <ZumoShield.h>
ZumoMotors motors;
ZumoReflectanceSensorArray sensors(QTR_NO_EMITTER_PIN);
ZumoBuzzer buzzer;

unsigned int sensor_vals[6];

void setup() {
  Serial.begin(9600);
  for(int i = 0; i<250; i++){
    sensors.calibrate();
    delay(20);  
  }
}

void loop() {
  int p = sensors.readLine(sensor_vals, true);
  Serial.println(p);
  delay(50);

//  motors.setSpeeds(300,284);  
//  delay(4000);
//  motors.setSpeeds(0,0);
//  while(true){}
}
