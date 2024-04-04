int timer = 100;
void setup() {
  for (int thisPin = 2; thisPin < 6; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
  Serial.begin(9600);
}
void loop() {
  for (int thisPin = 2; thisPin < 6; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
  }
  int sensorValue = analogRead(A0);
  float voltaje = sensorValue * (5 / 1023);
  Serial.println(voltaje);
  for (int thisPin = 5; thisPin>=2 ; thisPin--) {
    digitalWrite(thisPin, LOW);
    delay(timer);
  }
}
