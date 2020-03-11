void setup() 
{
    pinMode(2,OUTPUT);//Recebendo o PINO número 2 como saída
}

void loop() 
{
    digitalWrite(2,HIGH); //Ligando o LED interno.
    delay(500); //Atrasando 0.5 segundos.
    digitalWrite(2,LOW); //Desligando o LED interno.
    delay(500); //Atrasando 0.5 segundos.
}
