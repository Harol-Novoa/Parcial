#include <Arduino.h>

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  char palabra[] = "hola";
  int longitud = 0;

  longitud = strlen(palabra);
  Serial.print("Número de elementos de la cadena es: ");
  Serial.println(longitud);
}

void loop() {
  //utilizamos la comunicación serie para imprimir el número de elementos de la cadena. 
  //La función strlen se usa para determinar la longitud de la cadena.
}