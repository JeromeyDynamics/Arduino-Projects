#include "setUpMotors.h"
#include <Arduino.h>

void setUpMotors::setUpMotors(int DCMotor1Pin1, int DCMotor1Pin2, int DCMotor2Pin1, int DCMotor2Pin2, int ENA, int ENB) {
	//setting up L298N for motor output
	  //DC motor IN 1-4
	  pinMode(DCMotor1Pin1, OUTPUT);
	  pinMode(DCMotor1Pin2, OUTPUT);
	  pinMode(DCMotor2Pin1, OUTPUT);
	  pinMode(DCMotor2Pin2, OUTPUT);

	  //DC motor ENA and ENB
	  pinMode(ENA, OUTPUT);
	  pinMode(ENB, OUTPUT);

	  digitalWrite(DCMotor1Pin1, HIGH);
	  digitalWrite(DCMotor1Pin2, LOW);
}
