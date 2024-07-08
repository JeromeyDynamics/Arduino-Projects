#include <movement/lineFollowingMovement.h>
#include <set_up/setUpMotors.h>

//L298N IN 1-4
const int DCMotor1Pin1 = 7;
const int DCMotor1Pin2 = 6;

const int DCMotor2Pin1 = 5;
const int DCMotor2Pin2 = 4;

//L298N ENA and ENB
const int ENA = 8;
const int ENB = 9;

setUpMotors setMotors = setUpMotors();
lineFollowingMovement lineFollow = lineFollowingMovement();

void setup() {
  setMotors.setUpMotors(DCMotor1Pin1, DCMotor1Pin2, DCMotor2Pin1, DCMotor2Pin2, ENA, ENB);
}

void loop() {
  lineFollow.lineFollowingMovement();
}
