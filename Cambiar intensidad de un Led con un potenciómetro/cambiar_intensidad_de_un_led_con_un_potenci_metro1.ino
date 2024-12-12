int valor = 0;      // Variable donde almacenaremos el valor del potenciómetro
float voltaje = 0;  // Variable para almacenar el voltaje
int valorPot=0;

void setup() {
  pinMode(3,OUTPUT);
  Serial.begin(9600); // Inicializamos la comunicación serial
}

void loop() {
  valor = analogRead(A0);           // Leemos del pin A0 valor
  voltaje = (valor*5.00/1023.00);   // Calculamos el voltaje
  valorPot = map(valor,0,1023,0,255);
  analogWrite(3,valorPot);           // Encendemos el Led (0-255)
  Serial.print("valor analogico: ");
  Serial.print(valor);

  Serial.print(" Voltaje: ");
  Serial.print(voltaje);
  Serial.print("V");

  Serial.print(" valor: ");
  Serial.println(valorPot);
  delay(1000);
}