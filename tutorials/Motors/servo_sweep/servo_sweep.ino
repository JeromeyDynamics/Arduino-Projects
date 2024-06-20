//needs servo downloaded

#include <Servo.h>

Servo servo;

int servoDelay = 1000;
int servoMax = 180;
int servoMin = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(servoMax);
  delay(servoDelay);

  servo.write(servoMin);
  delay(servoDelay);
}
