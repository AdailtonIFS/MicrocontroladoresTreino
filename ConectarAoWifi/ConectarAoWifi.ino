#include <WiFi.h>
const char* ssid = "nome do wifi";
const char* password =  "senha";

void setup() {
 Serial.begin(9600);
 WiFi.begin(ssid, password);// begin -> serve para conectar a placa ao wifi || parâmetros(login,senha);

 pinMode(2,OUTPUT); // Recebendo o pin interno como saída

  Serial.print("Conectando ao wifi ");

 while (WiFi.status() != WL_CONNECTED) { //Wifi.Status serve para saber o estado da conexão || existem vários retornos para essa função
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
  
  Serial.print(".");
  
 }
   digitalWrite(2,HIGH);

 Serial.println("Connected to the WiFi network");
}

void loop() {}
