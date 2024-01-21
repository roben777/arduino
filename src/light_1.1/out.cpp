#include <Arduino.h>
#include "out.h"

MyOutput::MyOutput(const MySystem* _sys) {
  sys_ptr = _sys;
  my_time.set(2115);  // set the timer deadline
  my_time.start();
}

void MyOutput::loop() {
  // generate output signals
  if (sys_ptr != nullptr) {
    if (my_time.checkState() == MyTimer::STOPPED) {
      Serial.println(sys_ptr->getAverage());
      my_time.start();  // don't forget to start the timer
    }
  }
}
