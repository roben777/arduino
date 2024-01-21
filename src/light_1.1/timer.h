#ifndef __TIMER_H
#define __TIMER_H

class MyTimer {
 private:
  // the reference time when the timer is set, in milli sec
  unsigned long int _t;
  // the amount the timer is set to in milli sec.
  unsigned long int _deadline;

 public:
  // the states of the timer
  enum States {UNSET, RUNNING, STOPPED};
  
  // default, time is unset
  MyTimer();

  // constructs and sets the timer to deadline
  MyTimer(unsigned long int deadline);

  // sets the timer to deadline
  // NOTE: if deadline is 0, the timer is in state UNSET
  void set(unsigned long int deadline);

  // starts the timer
  void start();

  // returns the state of the timer
  // Don't forget to start the timer explicitly. The timer does not restart automatically
  enum MyTimer::States checkState();
};

#endif
