int valor = 0; // Variable donde almacenaremos el valor del potenciometro
float voltaje = 0.0; // Variable para almacenar el voltaje calculado

void setup() {
  Serial.begin(9600);  // Inicializamos la comunicación serial
}

void loop() {
  valor = analogRead(A0); // Leemos del pin A0 valor
  voltaje = (valor * 5.0) / 1023.0; // Convertimos el valor del ADC a voltaje (0-5V

  // Imprimimos el valor por el monitor serie (0 - 1023)
  Serial.print("Voltaje: ");
  Serial.println(voltaje);
  delay(1000);
}