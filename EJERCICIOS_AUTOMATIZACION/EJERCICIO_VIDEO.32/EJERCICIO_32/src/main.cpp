#include <Arduino.h>

int numeros[100]; // Definimos un arreglo para almacenar los números
int n; // Variable para la cantidad de elementos

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  Serial.println("Digite la cantidad de elementos que va a tener el arreglo: ");
  while (!Serial.available()) {
    // Espera a que se ingrese la cantidad de elementos
  }
  n = Serial.parseInt();

  for (int i = 0; i < n; i++) {
    Serial.print("Digite un número: ");
    while (!Serial.available()) {
      // Espera a que se ingrese un número
    }
    numeros[i] = Serial.parseInt();
  }

  // Imprime los números ingresados
  for (int i = 0; i < n; i++) {
    Serial.print(i);
    Serial.print(" -> ");
    Serial.println(numeros[i]);
  }
}

void loop() {
}
//Este código utiliza la comunicación serie para recibir la cantidad de elementos y los números desde el monitor serie del IDE de Arduino. 
//Luego, almacena los números en un arreglo