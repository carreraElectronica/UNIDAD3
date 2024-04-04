#include <TimerOne.h>
#include <LiquidCrystal.h>
//RS  E   D4  D5  D6  D7
LiquidCrystal lcd(34, 33, 32, 31, 30, 29);
int ss = 0, estado = 0, mm = 0, hh = 0;
void setup() {
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(reloj);
  lcd.begin(16, 2);
  lcd.clear();
}
void loop() {
  lcd.setCursor(6, 0);lcd.print(ss);lcd.print("  ");
  lcd.setCursor(3, 0);lcd.print(mm);lcd.print("  ");
  lcd.setCursor(0, 0);lcd.print(hh);lcd.print("  ");
}
void reloj() {
  if (ss < 59) {ss++;} 
  else {ss = 0;
    if (mm < 59) {mm++;} 
    else {mm = 0;
      if (hh < 23) {hh++;} 
      else {hh = 0;}
    }
  }
} 
