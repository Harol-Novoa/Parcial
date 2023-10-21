// Asignacion dinamica de arreglos
// new: reserva el numero de bytes solicitado por la declaracion
// delete: libera un bloque de bytes reservado con anterioridad

#include <Arduino.h>

// Prototipos de funciones
void pedirNotas();
void mostrarNotas();
int numCalf;
int* calif;

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie
  pedirNotas();
  mostrarNotas();

  delete[] calif; // Liberando el espacio en bytes utilizado
}

void loop() {
  // No es necesario un loop continuo para este programa
}

void pedirNotas() {
  Serial.println("Digite el número de calificaciones: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  numCalf = Serial.parseInt();

  calif = new int[numCalf]; // Crear el arreglo dinámico

  for (int i = 0; i < numCalf; i++) {
    Serial.print("Ingrese una nota: ");
    while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
    calif[i] = Serial.parseInt();
  }
}

void mostrarNotas() {
  Serial.println("Mostrando notas del usuario: ");
  for (int i = 0; i < numCalf; i++) {
    Serial.println(calif[i]);
  }
}
