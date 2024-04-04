const int potPin=A0;
int valorPotenciometro;
void setup() {
  Serial.begin(9600);
}
void loop() {
  valorPotenciometro=analogRead(potPin);
  Serial.print("Valor del potenciometro:");
  Serial.println(valorPotenciometro); delay(500);
}
