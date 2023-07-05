/*Encendido y Apagado de un LED con un pulsador*/
#define LED 12
#define PULSADOR 7
void setup(){
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop(){
  if(digitalRead(PULSADOR) == LOW){
    digitalWrite(LED, HIGH);
    delay(250);
    digitalWrite(LED, LOW);
    delay(250);
  }
}
