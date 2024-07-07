#include "movement/lineFollowingMovement.h"
#include "set_up/setUpMotors.h"

//L298N IN 1-4
#define DCMotor1Pin1 7
#define DCMotor1Pin2 6

#define DCMotor2Pin1 5
#define DCMotor2Pin2 4

//L298N ENA and ENB
#define ENA 8
#define ENB 9

setUpMotors(DCMotor1Pin1, DCMotor1Pin2, DCMotor2Pin1, DCMotor2Pin2, ENA, ENB);

void setup() {
  
}

void loop() {
  lineFollowingMovement();
}
