#include <Arduino.h>
#include "system.h"

MySystem::MySystem() {
  _nr = 0;
  _sum = 0;
}


void MySystem::addSample(int sample) {
  #ifdef __DEBUG
  Serial.print("A:");
  Serial.print(sample);
  Serial.print(" ");
  #endif
  _sum += sample;
  _nr++;
}


int MySystem::getAverage() {
  if (_nr == 0) {  // no samples
    return 0;
  }

  int computedAvg = _sum/_nr;
  _nr = 0;
  _sum = 0;
  return computedAvg;
}
