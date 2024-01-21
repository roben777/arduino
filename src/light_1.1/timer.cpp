#include <Arduino.h>
#include "timer.h"

// if _deadline == 0, then the timer is UNSET
MyTimer::MyTimer():MyTimer(0) {
}

MyTimer::MyTimer(unsigned long int deadline) {
  set(deadline);
}

void MyTimer::set(unsigned long int deadline) {
  _deadline = deadline;
  _t = 0;
}

void MyTimer::start() {
  _t = millis();
}

// the state of the timer:
// _deadline == 0, then UNSET
// _t == 0 OR crt_t-_t >= _deadline, then STOPPED
// crt_t - t < _deadline, then RUNNING
enum MyTimer::States MyTimer::checkState() {
  unsigned long int crt_t = millis();

  if (_deadline == 0) {
    return UNSET;
  } else if (_t == 0 || crt_t - _t >= _deadline) {
    return STOPPED;
  } else {
    return RUNNING;
  }
}
