void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(A0);
  float volts=(value*5)/1023;
  float celsius=volts*100;
  Serial.print("La temperatura es:");
  Serial.println(celsius);
}
