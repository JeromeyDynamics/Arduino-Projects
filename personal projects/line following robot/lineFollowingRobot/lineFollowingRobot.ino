//#include "movement/lineFollowingMovement.h"
//#include "set_up/setUpMotors.h"

//L298N IN 1-4
const int DCMotor1Pin1 = 7;
const int DCMotor1Pin2 = 6;

const int DCMotor2Pin1 = 5;
const int DCMotor2Pin2 = 4;

//L298N ENA and ENB
const int ENA = 8;
const int ENB = 9;

//IR input pins
const int irLeft = 2;
const int irRight = 3;

/*imported code functions not working :'( do later!
at the beginning
setUpMotors setMotors = new setUpMotors();
lineFollowingMovement lineFollow = new lineFollowingMovement();
set up
loop
int lineFollow.lineFollowingMovement(irLeft, irRight, DCMotor1Pin1, DCMotor1Pin2, DCMotor2Pin1, DCMotor2Pin2, ENA, ENB);
*/

void setup() {
  pinMode(DCMotor1Pin1, OUTPUT);
	pinMode(DCMotor1Pin2, OUTPUT);
	pinMode(DCMotor2Pin1, OUTPUT);
	pinMode(DCMotor2Pin2, OUTPUT);

	//DC motor ENA and ENB
	pinMode(ENA, OUTPUT);
	pinMode(ENB, OUTPUT);

	digitalWrite(DCMotor1Pin1, HIGH);
	digitalWrite(DCMotor1Pin2, LOW);

  //sets speed speed (255 = max speed):
	//ENA pin
	analogWrite(8, 50);
	//ENB pin
	analogWrite(9, 50);

  //IR sensor set up
  pinMode(irLeft, INPUT);
	pinMode(irRight, INPUT);
}

void loop() {
  
  //gets the values from the ir sensors
	int irLeftValue = digitalRead(irLeft);
	int irRightValue = digitalRead(irRight);
  
  //can't see any black lines
  if (irLeftValue == LOW && irRightValue == LOW) {
    //Controlling spin direction of motors to move forward
    digitalWrite(DCMotor1Pin1, HIGH);
    digitalWrite(DCMotor1Pin2, LOW);

    digitalWrite(DCMotor2Pin1, HIGH);
    digitalWrite(DCMotor2Pin2, LOW);
  }
  //sees the back line on the left side of the robot
  else if (irLeftValue == HIGH && irRightValue == LOW) {
    //Controlling spin direction of motors to turn
    digitalWrite(DCMotor1Pin1, HIGH);
    digitalWrite(DCMotor1Pin2, LOW);

    digitalWrite(DCMotor2Pin1, LOW);
    digitalWrite(DCMotor2Pin2, HIGH);
  }
  //sees the black line on the right side of the robot
  else if (irLeftValue == LOW && irRightValue == HIGH) {
    //Controlling spin direction of motors to turn
    digitalWrite(DCMotor1Pin1, LOW);
    digitalWrite(DCMotor1Pin2, HIGH);

    digitalWrite(DCMotor2Pin1, HIGH);
    digitalWrite(DCMotor2Pin2, LOW);
  }
  //both the black lines are seen so the robot would turn around 
  else if (irLeftValue == HIGH && irRightValue == HIGH) {
    //Controlling spin direction of motors to move backwards
    digitalWrite(DCMotor1Pin1, LOW);
    digitalWrite(DCMotor1Pin2, HIGH);

    digitalWrite(DCMotor2Pin1, LOW);
    digitalWrite(DCMotor2Pin2, HIGH);
  }
  //there is an errror
  else {
    //Controlling spin direction of motors to not move
    digitalWrite(DCMotor1Pin1, LOW);
    digitalWrite(DCMotor1Pin2, LOW);

    digitalWrite(DCMotor2Pin1, LOW);
    digitalWrite(DCMotor2Pin2, LOW);
  }
}
