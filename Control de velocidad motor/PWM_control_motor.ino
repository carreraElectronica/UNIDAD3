long pwm=0;
long pot=0;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  pot=analogRead(A1);
  pwm=pot*255;
  pwm=pwm/1023;
  Serial.print(pot);
  Serial.print(":");
  Serial.println(pwm);
  analogWrite(13,pwm);
  delay(50);

}
