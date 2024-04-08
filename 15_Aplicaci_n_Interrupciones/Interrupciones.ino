void setup() {
  pinMode(30,OUTPUT);
  pinMode(21,INPUT_PULLUP);
  pinMode(20,INPUT_PULLUP);
  DDRA=255; PORTA=0;
  attachInterrupt(digitalPinToInterrupt(21),contador_i,FALLING);
  attachInterrupt(digitalPinToInterrupt(20),contador_d,RISING);
}

void loop() {
  digitalWrite(30,HIGH); delay(500);
  digitalWrite(30,LOW); delay(500);}
void contador_i(){
  PORTA++;}
void contador_d(){
  PORTA--;}


