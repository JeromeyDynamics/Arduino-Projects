//dht is humidity and temp sensor
#include "DHT.h"

//arduino pin connected to the dht-11's data pin
#define DHTPIN 2

//type of dht sensor
#define DHTTYPE DHT11

//initialize dht sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("humidity and temp");
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("humidity: ");
  Serial.print(h);
  Serial.print("% Temperature: ");
  Serial.print(t);
  Serial.println("°C");
}
