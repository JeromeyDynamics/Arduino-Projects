#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(23, 22, 21, 19, 18, 17);

void setup() {
  // Sets up the LCD's number of columns and rows
  lcd.begin(16, 2);
}

void loop() {
  //Prints messages to the LCD
  lcd.setCursor(0,0);
  lcd.print("Press Start");
  delay(800);
  lcd.setCursor(0,1);
  lcd.print("Why hello!!!");
  delay(800);
  lcd.setCursor(0,0);
  lcd.print("Okay I will start");
  delay(800);
  lcd.setCursor(0,1);
  lcd.print("heeeeeeeeeeeello");
  delay(800);
}