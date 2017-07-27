#include <Arduino.h>
#include "Beep.h"
static const int LED = 13;
Beep beep(LED);

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  beep.dash();beep.dash();beep.dot();beep.dot();
}
