#include <TimerOne.h>
#include <LiquidCrystal.h>
//RS  E   D4  D5  D6  D7
LiquidCrystal lcd(34, 33, 32, 31, 30, 29);
int ss = 0; 
void setup() {
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(reloj);
}

void loop() {
  lcd.setCursor(6, 0); lcd.print(ss); lcd.print("  ");
}
void reloj() {
  if (ss < 99) {
    ss++;
  } else {
    ss = 0;
  }
}
