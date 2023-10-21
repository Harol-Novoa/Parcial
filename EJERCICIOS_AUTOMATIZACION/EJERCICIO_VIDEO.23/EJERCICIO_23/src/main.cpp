#include <Arduino.h>

int suma = 0;

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
}

void loop() {
  for (int i = 1; i < 10; i++) {
    int cuadrado = i * i;
    suma += cuadrado;
  }

  Serial.print("El resultado de la suma es: ");
  Serial.println(suma);

  delay(1000); // Espera 1 segundo antes de reiniciar el bucle
  suma = 0;    // Reinicia la suma para el siguiente ciclo
}
//en en cuenta que el bucle "loop()" se reiniciará cada segundo y se restablecerá la suma a cero para calcularla nuevamente.

