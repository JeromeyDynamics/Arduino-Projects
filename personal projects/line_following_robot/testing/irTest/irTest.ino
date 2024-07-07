#define irLeft 3
#define irRight 4

void setup() {

	pinMode(irLeft, INPUT);
	pinMode(irRight, INPUT);
	pinMode(LED_BUILTIN, OUTPUT);
	//setup to write in the serial moniter
	Serial.begin(9600);
	//test message
	Serial.write("IR test begin");
}

void loop() {
	//gets the values from the ir sensors
	int irLeftValue = digitalRead(irLeft);
	int irRightValue = digitalRead(irRight);

	if (irLeftValue == LOW && irRightValue == LOW) {
		//both of the ir sensors values are at there lowest which means that no black line in the sight of any ir sensors
		Serial.println("nothing sensed");
		digitalWrite(LED_BUILTIN, LOW);
	} else if (irLeftValue == HIGH && irRightValue == LOW) {
		//black line would be on the left side of the robot
		Serial.println("the left senses something");
		digitalWrite(LED_BUILTIN, HIGH);
	} else if (irLeftValue == LOW && irRightValue == HIGH) {
		//black line would be on the right side of the robot
		Serial.println("the right senses something");
		digitalWrite(LED_BUILTIN, HIGH);
	} else if (irLeftValue == HIGH && irRightValue == HIGH) {
		//the black line would have split into 2 or is too long making the robot see an error
		Serial.println("Both the left and right see something");
		digitalWrite(LED_BUILTIN, HIGH);
	} else {
		//there would be an error because normally it would be impossible to get this message
		Serial.println("there is an error in the code!");
		digitalWrite(LED_BUILTIN, LOW);
	}

	//delay in-between messages
	delay(1000);
}
