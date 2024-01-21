#include <Arduino.h>
#include "out.h"

MyOutput::MyOutput(const MyLight* _lght) {
  light_sensor_ptr = _lght;
}

void MyOutput::loop() {
  // generate output signals
  if (light_sensor_ptr != nullptr) {
    Serial.println(light_sensor_ptr->getLight());
  }
}
