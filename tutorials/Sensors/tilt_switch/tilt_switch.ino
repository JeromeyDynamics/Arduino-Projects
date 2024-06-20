int ledRed = 8;
int ledBlue = 7;
int buzzerPin = 9;
int tiltPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(tiltPin, INPUT_PULLUP);

  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(tiltPin) == HIGH) {
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, LOW);
    digitalWrite(buzzerPin, HIGH);
    delay(500);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, HIGH);
    digitalWrite(buzzerPin, LOW);
    delay(500);
  }
  else {
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(buzzerPin, LOW);
  }
}
