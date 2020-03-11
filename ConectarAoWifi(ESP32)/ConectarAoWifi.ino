#include <WiFi.h>
 
const char* ssid = "nome da rede";
const char* password = "senha da rede";

 
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); //recebendo o pino como Saída

 Serial.print("Conectando ao WIFI");
 WiFi.begin(ssid, password); // metodo para conexão com a rede recebendo login e senha como parametros.

 while (WiFi.status() != WL_CONNECTED) { // metodo parasaber o status da conexão com vários tipos de retorno
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
  Serial.println(".");
 }
 digitalWrite(2,HIGH);
 Serial.println("Conectado!!!");
}
 
void loop() {

  
}
