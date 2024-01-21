#include "light.h"
#include "configs.h"
#include <Arduino.h>

void MyLight::loop() {
  ambient_light = analogRead(LS_PIN);
}

int MyLight::getLight() {
  return ambient_light;
}
