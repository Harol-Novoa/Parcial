//INSERTAR ELEMENTOS EN LA PILA, VIDEO 95 Y 96 
#include <Arduino.h>

struct Nodo {
  int dato;
  Nodo* siguiente;
};

void agregarPila(Nodo*&, int); // Prototipo

Nodo* pila = NULL; // Declarar la pila globalmente

void setup() {
  Serial.begin(115200); // Inicializar la comunicación serie
  int n1, n2;

  Serial.println("Digite un número: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  n1 = Serial.parseInt();
  agregarPila(pila, n1);
  Serial.println("Digite otro número: ");
  while (!Serial.available()) {} // Espera a que haya más datos disponibles
  n2 = Serial.parseInt();
  agregarPila(pila, n2);
}

void agregarPila(Nodo*& pila, int n) {
  Nodo* nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = pila;
  pila = nuevo_nodo;

  Serial.print("Elemento ");
  Serial.print(n);
  Serial.println(" agregado a la PILA correctamente");
}
