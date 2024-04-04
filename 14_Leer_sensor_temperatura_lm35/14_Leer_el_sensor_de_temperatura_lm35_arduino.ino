float temp; //Esta variable nos ayuda a guardar el valor obtenido del sensor(0 a 1023)
int LM35=0; // Variable de la entrada del sensor(A0)
void setup () {
Serial.begin(9600); // Ubicamos el puerto serial
}
void loop() {
temp=analogRead(LM35); //Utilizamos analogRead para leer el sensor(0 a 1023)
temp = (5.0*temp*100)/1024;// Con la anterior formula calculamos la temperatura 
Serial.print(temp);//Enviamos los datos al puerto serial
Serial.print("/n");// Realizamos un salto de línea 
delay(1000);// Ubicamos el tiempo en el cual se repita el loop
}
