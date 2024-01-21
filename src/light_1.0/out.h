#ifndef __OUT_H
#define __OUT_H

#include "light.h"

class MyOutput {
 private:
  MyLight * light_sensor_ptr;
 public:
  // pass a pointer to the light sensor object whose data will be used
  MyOutput(const MyLight*);

  // call to process output signal
  void loop();
};

#endif
