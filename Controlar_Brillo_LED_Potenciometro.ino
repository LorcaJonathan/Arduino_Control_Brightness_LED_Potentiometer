
int led = 11;
int brillo;
int potenciometro = 0;

void setup() { //las entradas analogicas no requieren inicializacion
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  brillo = analogRead(potenciometro) / 4;
  analogWrite(led, brillo);

}
