#include <Arduino.h>

struct Corredor {
  char nombre[20];
  int  edad;
  char sexo[10];
  char club[20];
} corredor1;

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serie

  char categoria[20];

  Serial.println("Nombre: ");
  while (!Serial.available()) {
    // Espera a que se ingrese el nombre
  }
  Serial.readBytesUntil('\n', corredor1.nombre, 20);

  Serial.println("Edad: ");
  while (!Serial.available()) {
    // Espera a que se ingrese la edad
  }
  corredor1.edad = Serial.parseInt();

  Serial.println("Sexo: ");
  while (!Serial.available()) {
    // Espera a que se ingrese el sexo
  }
  Serial.readBytesUntil('\n', corredor1.sexo, 10);

  Serial.println("Club: ");
  while (!Serial.available()) {
    // Espera a que se ingrese el club
  }
  Serial.readBytesUntil('\n', corredor1.club, 20);

  if (corredor1.edad <= 18) {
    strcpy(categoria, "Juvenil");
  } else if (corredor1.edad <= 40) {
    strcpy(categoria, "Senior");
  } else {
    strcpy(categoria, "Veterano");
  }

  Serial.println("\nDatos del corredor:");
  Serial.print("Nombre: ");
  Serial.println(corredor1.nombre);
  Serial.print("Edad: ");
  Serial.println(corredor1.edad);
  Serial.print("Sexo: ");
  Serial.println(corredor1.sexo);
  Serial.print("Club: ");
  Serial.println(corredor1.club);
  Serial.print("Categoría: ");
  Serial.println(categoria);
}

void loop() {

}