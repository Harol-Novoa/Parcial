#include <Arduino.h>

struct Persona {
  char nombre[30];
  int edad;
};

Persona persona1;

void pedirDatos();
void mostrarDatos(Persona);

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  pedirDatos();
  mostrarDatos(persona1);
}

void pedirDatos() {
  Serial.println("Digite su nombre: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  Serial.readBytesUntil('\n', persona1.nombre, sizeof(persona1.nombre));
  
  Serial.println("Digite su edad: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  persona1.edad = Serial.parseInt();
}

void mostrarDatos(Persona p) {
  Serial.println("Nombre: " + String(p.nombre));
  Serial.println("Edad: " + String(p.edad));
}
