#include <Arduino.h>

#ifndef LINEFOLLOWINGMOVEMENT_H
#define LINEFOLLOWINGMOVEMENT_H

class lineFollowingMovement {

public:
	void lineFollowingMovement(int irLeft, int irRight, int DCMotor1Pin1, int DCMotor1Pin2, int DCMotor2Pin1, int DCMotor2Pin2, int ENA, int ENB);

};

#endif