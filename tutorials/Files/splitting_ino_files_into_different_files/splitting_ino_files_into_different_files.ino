//practice file
//constant variable, #define makes the const variable, led_pin is the variable name, and 13 is the value
#define led 13

//gets the information from the h file which intern gives information from the c++ file
#include "led_functions.h"

void setup() {
  setUpLED(led);
}

void loop() {
  powerOnLED(led);
  delay(500);
  powerOffLED(led);
  delay(500);
}
