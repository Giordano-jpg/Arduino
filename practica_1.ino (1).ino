const int BOTON = 9;
const int LED1 = 5;
const int LED2 = 6;
const int LED3 = 7;
const int LED4 = 8;

int val = 0; // Estado actual del botón (0 o 1)
int state = 0; // Estado del LED: 0 = apagado, 1 = encendido
int old_val = 0; // Estado anterior del botón

void setup(){  // definir si la variable es de entrada // o salida.
 //pinMode(LED,OUTPUT); // Define el pin LED como salida
 pinMode(BOTON,INPUT); // Define el pin BOTON como entrada
 pinMode(LED1, OUTPUT);  // Establece "pin" como salida
 pinMode(LED2, OUTPUT);  // Establece "pin" como salida
 pinMode(LED3, OUTPUT);  // Establece "pin" como salida
 pinMode(LED4, OUTPUT);  // Establece "pin" como salida
}


void loop() {  // loop = realice un lazo continuamente
  val = digitalRead(BOTON); // Lee el estado del Boton


  // Verifica si el botón fue presionado (val == HIGH)
  // y el estado anterior era suelto (old_val == LOW)
  if ((val == HIGH) && (old_val == LOW)){
    state = 1 - state; // Alterna el estado del LED (0 -> 1 o 1 -> 0)
    delay(10); // Pequeña pausa para evitar rebotes (noise) del botón
  }


  old_val = val; // Actualiza el estado anterior del botón


  if (state == 1){
    // Primer recorrido

    digitalWrite(LED1, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED1, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar
    
    digitalWrite(LED2, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED2, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar

    digitalWrite(LED3, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED3, LOW);  // Activa "pin"
    delay(100);  // Pausar

    digitalWrite(LED4, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED4, LOW);  // Desactiva "pin" 
    delay(1000);  // Pausar un segundo

    // Segundo recorrido

    digitalWrite(LED4, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED4, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar
    
    digitalWrite(LED3, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED3, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar

    digitalWrite(LED2, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED2, LOW);  // Activa "pin"
    delay(100);  // Pausar

    digitalWrite(LED1, HIGH);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED1, LOW);  // Desactiva "pin" 
    delay(1000);  // Pausar un segundo

  }
  else{
    digitalWrite(LED4, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar
    digitalWrite(LED3, LOW);  // Desactiva "pin" 
    delay(100);  // Pausar
    digitalWrite(LED2, LOW);  // Activa "pin"
    delay(100);  // Pausar
    digitalWrite(LED1, LOW);  // Activa "pin"
    delay(100);  // Pausar
  }

}


