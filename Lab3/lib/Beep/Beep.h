#ifndef BEEP_H
#define BEEP_H
#include <Arduino.h>


class Beep{
  public:
    Beep(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif
