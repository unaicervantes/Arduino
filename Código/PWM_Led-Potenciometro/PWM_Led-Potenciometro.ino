int LED = 3;
int BRILLO;
int POT = 0;

void setup() {
  pinMode(LED, OUTPUT); 
  //Las entradas analógicas no necesitan inicialización
}

void loop(){ 
   BRILLO = analogRead(POT) / 4; //Se divide entre cuatro ya que analogWrite solo puede dar 255/ se lee la potencia que se quiere dar a partir del potenciometro.
   analogWrite(LED, BRILLO); //Se da potencia al led según la potencia dada en el potenciometro
}
