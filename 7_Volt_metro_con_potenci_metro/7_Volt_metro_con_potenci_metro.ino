#include <LiquidCrystal.h>
                 //RS  E   D4  D5  D6  D7
LiquidCrystal lcd(53, 52, 51, 50, 49, 48);
void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}
void loop() {
  float pot = analogRead(A0);
  float voltaje = (pot * 5)/1023;
  lcd.setCursor(0, 0);
  lcd.print("voltaje es:");
  lcd.print(voltaje);
}
