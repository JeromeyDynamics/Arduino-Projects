#include <Servo.h>

int servoPin = 7;

bool firstClose = false;

Servo servo1;

void setup() {
  //servo
  //shows the arduino that the servo motor is connected to the servoPin
  servo1.attach(servoPin);
  //makes the motor move to the closed position
  servo1.write(0);
  //ultrasonic sensor
  //connects the ultrasonic sensor to the pins
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  //ultrasonic sensor
  //pulse output for the ultrasonic sensor
  digitalWrite(2, LOW);
  delayMicroseconds(4);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  
  //input pulse and save it veriable
  long t = pulseIn(4, HIGH);
  
  //time convert distance
  long inches = t / 74 / 2;
  //time convert distance
  long cm = t / 29 / 2;
  //inches and cm to print
  String inch = " inches ";
  String CM = " cm";

  //print serial monitor inches
  Serial.print(inches + inch);
  //print serial monitor cm
  Serial.println(cm + CM);
  //print space
  Serial.println();
  //delay
  delay(100);
  
  //servo motor
  //if the ultrasonic sensor sees that an object is less than 8 inches away
  if (inches < 8) {
    //opens the lid
    servo1.write(110);
    //uses firstClose so that the lid doesn't start closing and than opens when it notices that an object is still there
    firstClose = true;
  } else {
    //makes sure that firstClose is true after the lid is open
    if (firstClose == true) {
      //closes the lid after a delay
      delay(3000);
    }
    //makes firstClose false so that we know the lid can open after closing
    firstClose = false;
    //closes the lid
    servo1.write(0);
  }
}