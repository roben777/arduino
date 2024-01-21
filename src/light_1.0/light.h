#ifndef __LIGHT_H
#define __LIGHT_H

class MyLight {
 private:
  // state maintained by MyLight
  // (separate class to maintain state preferable)
  int ambient_light=0;

 public:
  // call to process signal
  void loop();

  // RET
  // reading from light sensor: 0..1023
  int getLight();
};

#endif
