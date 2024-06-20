#include "led_functions.h"
//doesn't need to include "Arduino" because it is connected to the h file

//functions for led power
//byte is an unsigned number from 0 to 255
void powerOnLED(byte pin) {
  digitalWrite(pin, HIGH);
}

void powerOffLED(byte pin) {
  digitalWrite(pin, LOW);
}

void setUpLED(byte pin) {
  pinMode(pin, OUTPUT);
}