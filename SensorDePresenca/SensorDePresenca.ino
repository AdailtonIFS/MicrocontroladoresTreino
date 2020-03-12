int pinPIR = 8;
int pinLed = 7;
int valorSensorPIR = 0;

void setup() {
  Serial.begin(9600); //Inicializando o serial monitor

  //Pinos de entrada ou de saída
  pinMode(pinPIR,INPUT);
  pinMode(pinLed,OUTPUT);
}

void loop() {
   valorSensorPIR = digitalRead(pinPIR);

    Serial.print("Valor do Sensor PIR: ");  
    Serial.println(valorSensorPIR);

    if(valorSensorPIR == 1){
          digitalWrite(pinLed, HIGH);
      }
      else{
          digitalWrite(pinLed, LOW);
        }
}
 
