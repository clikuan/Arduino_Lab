#include "Beep.h"
#include <Arduino.h>

Beep::Beep(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Beep::dot(){
    digitalWrite(_pin, HIGH);
    delay(100);
    digitalWrite(_pin, LOW);
    delay(100);
}

void Beep::dash(){
    digitalWrite(_pin, HIGH);
    delay(1000);
    digitalWrite(_pin, LOW);
    delay(100);
}
