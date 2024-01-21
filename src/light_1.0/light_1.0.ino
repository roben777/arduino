// Light sensor 1.0
// read and output signal from light sensor
// Demo separate classes for signal processing responsibilities

// general configuration parameters
#include "configs.h"
#include "light.h"
#include "out.h"

// object to processing input and maintain state of sensor
MyLight light;
// object processing the output
// pass a ptr to the light sensor object that maintains state in constructor
MyOutput output(&light);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(S_MON_SPEED);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read input signals
  light.loop();
  output.loop();
  
  // possibly controll the "sampling rate"
  delay(500);
}