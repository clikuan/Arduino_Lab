#include <Arduino.h>

static const int LED = 13;

void setup(){
  pinMode(LED, OUTPUT);
}
void dot(){
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
}

void dash(){
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(100);
}

void loop(){
  dash();dash();dot();dot();
}
