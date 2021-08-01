void setup() {
  pinMode(2,INPUT);         //pin 2 como entrada
  pinMode(3,OUTPUT);        //pin 3 como salida
}

void loop() {
  if (digitalRead(2) == HIGH){      //Compruebo que la entrada está a nivel alto (Si el pulsador está presionado)
    digitalWrite(3,HIGH);           // Enciendo el led
  }
  else{
    digitalWrite(3, LOW);           //Sino apago el led
  }
}
