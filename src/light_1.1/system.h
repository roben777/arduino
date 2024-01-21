#ifndef __SYSTEM_H
#define __SYSTEM_H

// comment this line to remove the debug messages
// #define __DEBUG

class MySystem {
 private:
  long int _sum;  // the sum of samples collected
  int _nr;  // number of samples collected

 public:
  MySystem();

  // adds sample to the sum of samples and counts the sample
  // Note: will overflow if too many samples!
  void addSample(int sample);

  // returns the average of the samples since the last getAverage()
  int getAverage();
};

#endif
