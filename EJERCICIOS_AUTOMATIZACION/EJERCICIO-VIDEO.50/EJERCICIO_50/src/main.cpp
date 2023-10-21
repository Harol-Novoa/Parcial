#include <Arduino.h>

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  int numeros[] = {4, 3, 7, 6, 5, 1, 2, 9, 8};
  int r, k, x;

  for (r = 0; r < 9; r++) {
    for (k = 0; k < 8; k++) {
      if (numeros[k] > numeros[k + 1]) {
        x = numeros[k];
        numeros[k] = numeros[k + 1];
        numeros[k + 1] = x;
      }
    }
  }

  Serial.println("Orden ascendente: ");
  for (r = 0; r < 9; r++) {
    Serial.print(numeros[r]);
    Serial.print("    ");
  }

  Serial.println("\nOrden descendente: ");
  for (r = 8; r >= 0; r--) {
    Serial.print(numeros[r]);
    Serial.print("   ");
  }
}

void loop() {
 }