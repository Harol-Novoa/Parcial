#include <Arduino.h>

void valnuevo(int& xnum, int& ynum);

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  int numero1, numero2;

  Serial.println("Digite 2 números: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  numero1 = Serial.parseInt(); // Lee el primer número desde el puerto serie
  while (!Serial.available()) {} // Espera a que haya más datos disponibles
  numero2 = Serial.parseInt(); // Lee el segundo número desde el puerto serie

  valnuevo(numero1, numero2);

  Serial.print("El nuevo valor del primer número es: ");
  Serial.println(numero1);
  Serial.print("El nuevo valor del segundo número es: ");
  Serial.println(numero2);
}


void valnuevo(int& xnum, int& ynum) {
  Serial.print("El valor del primer número es: ");
  Serial.println(xnum);
  Serial.print("El valor del segundo número es: ");
  Serial.println(ynum);

  xnum = 98;
  ynum = 14;
}
