#include <Arduino.h>

struct Nodo {
  int dato;
  Nodo* siguiente;
};

void insertarLista(Nodo *&, int); // Prototipo de la función

Nodo* lista = NULL; // Declarar la lista enlazada globalmente

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serie
  int dato;

  Serial.println("Digite un número: ");
  while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
  dato = Serial.parseInt();
  insertarLista(lista, dato);

  Serial.println("Digite un número: ");
  while (!Serial.available()) {} // Espera a que haya más datos disponibles
  dato = Serial.parseInt();
  insertarLista(lista, dato);

  Serial.println("Digite un número: ");
  while (!Serial.available()) {} // Espera a que haya más datos disponibles
  dato = Serial.parseInt();
  insertarLista(lista, dato);
}

void loop() {
  // No es necesario un loop continuo para este programa
}

void insertarLista(Nodo*& lista, int n) {
  Nodo* nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;

  Nodo* aux1 = lista;
  Nodo* aux2 = NULL;

  while ((aux1 != NULL) && (aux1->dato < n)) {
    aux2 = aux1;
    aux1 = aux1->siguiente;
  }

  if (lista == aux1) {
    lista = nuevo_nodo;
  } else {
    aux2->siguiente = nuevo_nodo;
  }

  nuevo_nodo->siguiente = aux1;
  Serial.print("ELEMENTO ");
  Serial.print(n);
  Serial.println(" INSERTADO A LA LISTA CORRECTAMENTE");
}
