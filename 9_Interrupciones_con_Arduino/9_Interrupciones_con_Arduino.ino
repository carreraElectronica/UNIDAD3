void setup() {
 pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
 pinMode(21, INPUT_PULLUP);
 attachInterrupt(digitalPinToInterrupt(21), inicio, FALLING);
}
void loop() {
  digitalWrite(22,HIGH);
  digitalWrite(22,LOW);
  delay(500);
  digitalWrite(22,LOW);
  digitalWrite(22,HIGH);
  delay(500);
}
void inicio() {
  digitalWrite(22,HIGH);
  digitalWrite(22,HIGH);
  delay(500);
  digitalWrite(22,LOW);
  digitalWrite(22,LOW);
  delay(500);
}
