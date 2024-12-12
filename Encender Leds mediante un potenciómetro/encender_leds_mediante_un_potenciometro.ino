// Pines del sensor TMP36 y el potenciómetro
const int pinTMP = A0;       // Pin del sensor TMP36
const int pinPot = A1;       // Pin del potenciómetro
const int pinLED = 3;        // Pin del LED

float temperatura = 0.0;     // Variable para la temperatura medida
float umbral = 0.0;          // Umbral ajustable con el potenciómetro

void setup() {
  pinMode(pinLED, OUTPUT);   // Configuramos el pin del LED como salida
  Serial.begin(9600);        // Inicializamos la comunicación serie
}

void loop() {
  // Leer el valor del sensor TMP36
  int valorTMP = analogRead(pinTMP);
  temperatura = ((valorTMP * 5.0) / 1023.0 - 0.5) * 100.0; // Convertir a grados Celsius
  
  // Leer el valor del potenciómetro y calcular el umbral
  int valorPot = analogRead(pinPot);
  umbral = (valorPot * 50.0) / 1023.0; // Umbral ajustable entre 0 y 50 grados Celsius
  
  // Verificar si la temperatura supera el umbral
  if (temperatura > umbral) {
    digitalWrite(pinLED, HIGH); // Encender el LED
  } else {
    digitalWrite(pinLED, LOW);  // Apagar el LED
  }
  
  // Mostrar valores en el monitor serie
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print(" °C | Umbral: ");
  Serial.print(umbral);
  Serial.println(" °C");

  delay(500); // Pausa de 500 ms
}