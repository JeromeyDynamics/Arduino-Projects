//gets arduino functions
#include <Arduino.h>

//sets up the beggining of the h file so that the h file isn't duplicated multiple times
#ifndef LED_FUNCTIONS_H
//gets the ifndef value to start the h file code
#define LED_FUNCTIONS_H
//imports all code in here and it ends at the #endif

//prototypes functions in ino file (used to declare functions before their actual definitions)
void powerOnLED(byte pin);
void powerOffLED(byte pin);
void setUpLED(byte pin);

#endif