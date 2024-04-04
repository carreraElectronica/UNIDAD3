byte x[10] = {192, 249, 164, 176, 153, 146, 131, 248, 128, 152};
int unidad = 0, decena = 0, dato = 53, personas = 0;
void setup() {
  DDRA = 255; PORTA = 255;
  DDRC = 255; PORTC = 255;
  pinMode(20, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(20), contador_u, FALLING);
  pinMode(19, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(19), contador_d, FALLING);
}
void loop() {
  separa();
  presenta();
}
void contador_u() {
  if (personas < 99) {personas++;}
}
void contador_d() {
  if (personas > 0) {personas--;}
}
void separa() {
  decena = personas / 10;
  unidad = personas - decena * 10;
}
void presenta() {
  PORTC = 0B11111110;PORTA = x[decena];delay(100);
  PORTC = 0B11111101;PORTA = x[unidad];delay(100);
}
