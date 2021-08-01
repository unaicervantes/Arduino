void setup(){
  pinMode (13, OUTPUT);           //Pin 13 como salida 
}

void loop(){
  digitalWrite(13, HIGH);         //Pin 13 a nivel alto (Encendido)
  delay(1000);                    //Delay de 1 segundo
  digitalWrite(13, LOW);          //Pin 13 a nivel bajo (Apagado)
  delay(2000);                    //Delay de 1 segundo
}
