#include <Arduino.h>
//DESTRUCTOR DE OBJETOS
class Perro {
private:
  String nombre, raza;

public:
  Perro(String, String); // Constructor
  void mostrarDatos();
  void jugar();
};
// Constructor
Perro::Perro(String _nombre, String _raza) {
  nombre = _nombre;
  raza = _raza;
}

void Perro::mostrarDatos() {
  Serial.println("Nombre: " + nombre);
  Serial.println("Raza: " + raza);
}

void Perro::jugar() {
  Serial.println("El perro " + nombre + " está jugando");
}

Perro perro1("Fido", "Doberman");

void setup() {
  Serial.begin(9600);
  perro1.mostrarDatos();
  perro1.jugar();
}

void loop() {
}
