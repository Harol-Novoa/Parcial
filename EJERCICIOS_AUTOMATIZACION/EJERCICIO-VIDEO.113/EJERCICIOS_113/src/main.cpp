#include <Arduino.h>
//INSERTAR NODOS EN UN ARBOL BINARIO DE BUSQUEDA ABB

struct Nodo {
  int dato;
  Nodo* der;
  Nodo* izq;
};
// prototipos de las funciones
void menu();
Nodo* crearNodo(int);
void insertarNodo(Nodo*&, int);

Nodo* arbol = NULL;

void setup() {
  Serial.begin(9600);
  menu();
}
//funcion de menu
void loop() {
}

void menu() {
  int dato, opcion;

  do {
    Serial.println("\t.:MENU: .");
    Serial.println("1. Insertar un nuevo nodo");
    Serial.println("2. Salir");
    Serial.print("Opcion: ");
    while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
    opcion = Serial.parseInt();

    switch (opcion) {
      case 1:
        Serial.print("\nDigite un numero: ");
        while (!Serial.available()) {} // Espera a que haya datos disponibles en el puerto serie
        dato = Serial.parseInt();
        insertarNodo(arbol, dato);//Insertamos un nuevo nodo
        Serial.println();
        break;
    }
  } while (opcion != 2);
}
//funcion para crear un nuevo nodo

Nodo* crearNodo(int n) {
  Nodo* nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->der = NULL;
  nuevo_nodo->izq = NULL;
  return nuevo_nodo;
}
//funcion para insertar elementos en el arbol

void insertarNodo(Nodo*& arbol, int n) {
  if (arbol == NULL) { // si el árbol está vacío
    Nodo* nuevo_nodo = crearNodo(n);
    arbol = nuevo_nodo;
  } else { // si el árbol tiene un nodo o más
    int valorRaiz = arbol->dato; // obtenemos el valor de la raíz
    if (n < valorRaiz) { // si el elemento es menor a la raíz, insertamos en izquierda
      insertarNodo(arbol->izq, n);
    } else { // si el elemento es mayor a la raíz, insertamos en derecha
      insertarNodo(arbol->der, n);
    }
  }
}
