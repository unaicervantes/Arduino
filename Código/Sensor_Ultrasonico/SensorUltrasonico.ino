int TRIG = 10;
int ECO = 9;
int PIT = 3;
int DURACION;
int DISTANCIA;

void setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(PIT, OUTPUT);
  Serial.begin(9600); //Inicia comunicación monitor serial
}

void loop(){
  digitalWrite(TRIG, HIGH);     //Se enciende el pin TRIG del sensor
  delay(1);                     //Se espera un milisegundo
  digitalWrite(TRIG, LOW);      //Se apaga el el pin TRIG del sensor
  DURACION = pulseIn(ECO, HIGH);  //Lee la pulsación del pin ECO
  DISTANCIA = DURACION / 58.2;    //Divide la duración entre 58.2, valor dado por el fabricante, para obtener la distancia. 
  Serial.println(DISTANCIA);   //Muestra la distancia en el monitor serial
  delay(200);
  if (DISTANCIA <= 100 && DISTANCIA >= 0){  //Si la distancia es menor que 100 y mayor que cero
    digitalWrite(PIT, HIGH);  //Se enciende el zumbador
    delay(DISTANCIA * 10);    //Espera el tiempo, que és la distancia x10, Así pitara mas rápido si está mas cerca.
    digitalWrite(PIT, LOW);   //Se para el pitido
  }
}
