#ifndef __LIGHT_H
#define __LIGHT_H

#include "system.h"
#include "timer.h"

class MyLight {
 private:
  // state maintained by MyLight
  // (separate class to maintain state preferable)
  // int ambient_light=0;
  MySystem * sys_ptr;  // instead of the ambient_light state, we communicate with the system object now
  MyTimer my_time;   // timer used to determine the time of operations

 public:
  // _ptr is the address fo the object maintaining the system. All input is sent to this object
  // _ptr is assumed to be address of a valid object
  MyLight(const MySystem * _ptr);

  // call to process signal
  void loop();

  // RET
  // reading from light sensor: 0..1023
  // int getLight();
  // We no longer need getLight now; MySystem object handles system state.
};

#endif
