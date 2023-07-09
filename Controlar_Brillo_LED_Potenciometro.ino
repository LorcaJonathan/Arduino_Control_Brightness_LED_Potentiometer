int led = 11;              // Variable que almacena el número de pin del LED
int brillo;                // Variable que almacena el nivel de brillo
int potenciometro = 0;     // Variable que almacena el número de pin del potenciómetro

void setup() {
  pinMode(led, OUTPUT);    // Configura el pin del LED como salida
}

void loop() {
  brillo = analogRead(potenciometro) / 4;    // Lee el valor analógico del potenciómetro y lo divide por 4 para ajustarlo al rango de 0 a 255 (niveles de brillo)
  analogWrite(led, brillo);                   // Establece el nivel de brillo del LED utilizando PWM
}
