// Light sensor 1.1
// read and output signal from light sensor
// Demo separate classes for signal processing responsibilities
// Different real-time computation deadlines 


// general configuration parameters
#include "configs.h"
#include "system.h"
#include "light.h"
#include "out.h"

// object to maintain system state
MySystem the_system;
// object to processing input and maintain state of sensor; 
// pass the addr of the system object that maintains system state
MyLight light(&the_system);
// object processing the output
// pass a ptr to the system object
MyOutput output(&the_system);

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
  delay(50);
}