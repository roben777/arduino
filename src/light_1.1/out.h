#ifndef __OUT_H
#define __OUT_H

#include "system.h"
#include "timer.h"

class MyOutput {
 private:
  // MyLight * light_sensor_ptr;
  MySystem * sys_ptr;  // instead of a pointer to the sensor, we should point to the system state object
  MyTimer my_time;  // timer used to determine time of operations

 public:
  // pass a pointer to the system object whose data will be output
  MyOutput(const MySystem*);

  // call to process output signal
  void loop();
};

#endif
