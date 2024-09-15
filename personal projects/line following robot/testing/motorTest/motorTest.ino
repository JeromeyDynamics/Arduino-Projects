#include "Arduino.h"
//L298N IN 1-4
#define DCMotor1Pin1 7
#define DCMotor1Pin2 6

#define DCMotor2Pin1 5
#define DCMotor2Pin2 4

//L298N ENA and ENB
#define ENA 8
#define ENB 9

void setup() {
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

void loop() {
	//Controlling speed (255 = max speed):
	//ENA pin
	analogWrite(8, 200);
	//ENB pin
	analogWrite(9, 200);

	//Controlling spin direction of motors:
	digitalWrite(DCMotor1Pin1, HIGH);
	digitalWrite(DCMotor1Pin2, LOW);

	digitalWrite(DCMotor2Pin1, HIGH);
	digitalWrite(DCMotor2Pin2, LOW);

	delay(1000);

	//switch direction
	digitalWrite(DCMotor1Pin1, LOW);
	digitalWrite(DCMotor1Pin2, HIGH);

	digitalWrite(DCMotor2Pin1, LOW);
	digitalWrite(DCMotor2Pin2, HIGH);

	delay(1000);
}
