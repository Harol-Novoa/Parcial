 #include <Arduino.h>

int edad;
String sexo;
float altura;

void setup() {
  Serial.begin(9600);
  
  Serial.println("Digite su edad: ");
  while(!Serial.available()) { }
  edad = Serial.parseInt();

  Serial.println("Digite su sexo: ");
  while(!Serial.available()) { }
  sexo = Serial.readString();

  Serial.println("Digite su altura en metros: ");
  while(!Serial.available()) { }
  altura = Serial.parseFloat();

  Serial.print("Edad: ");
  Serial.println(edad);
  Serial.print("Sexo: ");
  Serial.println(sexo);
  Serial.print("Altura en metros: ");
  Serial.println(altura);
}

void loop() {
  // Este código captura la edad, el sexo y la altura del usuario a 
  //través de la comunicación serie y luego muestra estos valores en el monitor
}
