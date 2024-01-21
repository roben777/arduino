#include "light.h"
#include "configs.h"
#include <Arduino.h>

MyLight::MyLight(const MySystem * _ptr) {
  sys_ptr = _ptr;
  my_time.set(100);
  my_time.start();  // start the timer
}

void MyLight::loop() {
  if (sys_ptr != nullptr) {
    if (my_time.checkState() == MyTimer::STOPPED) {
      sys_ptr->addSample(analogRead(LS_PIN));
      my_time.start();  // don't forget to restart timer!
    }
  }
}

