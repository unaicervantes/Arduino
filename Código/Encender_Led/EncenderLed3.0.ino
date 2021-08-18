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
digitalWrite(LED,HIGH);                //Enciende el led
delay(5000);                           //Espero 5 segundos
digitalWrite(LED,LOW);                 //Apago el led
while(digitalRead(PULSADOR) == HIGH) { //Antirebote
  
 }
}
