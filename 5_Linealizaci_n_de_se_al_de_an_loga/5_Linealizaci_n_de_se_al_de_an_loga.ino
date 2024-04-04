void setup() {
  Serial.begin(9600);
}
void loop() {
  int valorSensor = analogRead(A0);
  int voltajeSensor = valorSensor * 5 / 1023;
  Serial.print("Valor Linealizado");
  Serial.println(voltajeSensor);
  delay(500);
}
