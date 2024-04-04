#include <TimerOne.h>
const int led = 13;  // el pin donde esta el led
int ledState = LOW;    // El LED empieza apagado
volatile unsigned long blinkCount = 0; // La definimos como volatile
void setup(void){
  pinMode(led, OUTPUT);
  Timer1.initialize(250000);// Dispara cada 250 ms
  Timer1.attachInterrupt(ISR_Blink); // Activa la interrupcion y la asocia a ISR_Blink
  Serial.begin(9600);
}
void ISR_Blink(){ 
  ledState = !ledState ;
  blinkCount++; // Contador veces se enciende el LED
}
void loop(void){
  unsigned long N;// Haremos copia del blinkCount
  digitalWrite(led, ledState);// Asignamos el valor del
  noInterrupts();// Suspende las interrupciones
  N = blinkCount;
  interrupts(); // Autoriza las interrupciones
  Serial.print("Ciclos = ");
  Serial.println(N);
  delay(100);
}
