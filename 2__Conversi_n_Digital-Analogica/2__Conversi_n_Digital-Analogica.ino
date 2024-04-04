const int pinDAC=9;
void setup() {
  pinMode(pinDAC,OUTPUT);
}
void loop() {
  int valorDAC=128;
  analogWrite(pinDAC,valorDAC);
  delay(500);
}
