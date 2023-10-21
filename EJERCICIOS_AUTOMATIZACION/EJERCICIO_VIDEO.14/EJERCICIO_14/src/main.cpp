#include <Arduino.h>

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie para imprimir mensajes
}

void loop() {
  int numero;

  Serial.print("Digite un número: ");
  while (!Serial.available()) {
    // Espera a que se ingrese un número
  }
  numero = Serial.parseInt();

  if (numero == 0) {
    Serial.println("El número es cero");
  } else if (numero % 2 == 0) {
    Serial.println("El número es par");
  } else {
    Serial.println("El número es impar");
  }
}
