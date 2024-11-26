#include <Servo.h>

int leftLeg = 3;
int leftFoot = 5;
int rightLeg = 2;
int rightFoot = 4;

Servo leftLegServo;
Servo leftFootServo;
Servo rightLegServo;
Servo rightFootServo;

void walkForward() {

}

void walkBackwards() {

}

void walkRight() {

}

void walkLeft() {
  
}

void dance() {
  
}

void setup() {
  leftLegServo.attach(leftLeg);
  leftFootServo.attach(leftFoot);
  rightLegServo.attach(rightLeg);
  rightFootServo.attach(rightFoot);

  leftLeg.write(0);
  leftFoot.write(0);
  rightLeg.write(0);
  rightFoot.write(0);
}

void loop() {
  

}