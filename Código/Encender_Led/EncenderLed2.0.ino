int PULSADOR = 2;
int LED = 3;
int ESTADO = LOW;

void setup() {
  pinMode(PULSADOR,INPUT);         //pin 2 como entrada
  pinMode(LED,OUTPUT);        //pin 3 como salida
}

void loop() {
 while(digitalRead(PULSADOR) == LOW) {   //Mientras el pulsador no se presiona espero

 }
 ESTADO = digitalRead(LED);         //Compruebo estado del led 
 digitalWrite(LED, !ESTADO);        //Escribo valor contrario
 while (digitalRead(PULSADOR) == HIGH){ //antirebote
  
 }
}
