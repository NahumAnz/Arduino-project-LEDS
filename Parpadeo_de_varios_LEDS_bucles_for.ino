/*Práctica 1.1.- Repitiendo con bucles for el coche fantástico*/
/*Creamos una variable "tiempo" que asigne el valor correspondiente a ms(delay)*/
int tiempo = 250;
void setup(){
  /*Declaramos nuestros pines como salidas*/
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  }

void loop(){
  /*Secuencia 1*/
  for(int led = 1; led < 2; led = led + 1){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    delay(tiempo);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW); 
    delay(tiempo);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW); 
    delay(tiempo);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(tiempo);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW); 
    delay(tiempo);
    }
    /*Secuencia 2*/
  for(int led = 2; led > 1; led = led - 1){
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    delay(tiempo);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW); 
    delay(tiempo);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW); 
    delay(tiempo);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    delay(tiempo);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW); 
    delay(tiempo);
    }
    /*Secuencia 3*/
  for (int led = 1; led < 2; led = led + 1){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(tiempo);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(tiempo);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    /*Segunda vuelta*/
    delay(tiempo);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(tiempo);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(tiempo);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(tiempo);
    }
    /*Secuencia 4*/
  for(int led = 1; led < 2; led = led + 1){
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(tiempo);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(tiempo);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    delay(tiempo);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    delay(tiempo);
    digitalWrite(4, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    delay(tiempo);
    }
    /*Secuencia 5*/
  for(int led = 2; led > 1; led = led - 1){
    digitalWrite(4, HIGH);
    delay(tiempo);
    digitalWrite(4, LOW);
    delay(tiempo);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    delay(tiempo);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    delay(tiempo);
    digitalWrite(6, HIGH);
    digitalWrite(2, HIGH);
    delay(tiempo);
    digitalWrite(6, LOW);
    digitalWrite(2, LOW);
    delay(tiempo);
    }
    /*Secuencia 6*/
  for(int led = 2; led > 1; led = led - 1){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(tiempo);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(tiempo);
    }
    /*Secuencia 7*/
  for (int led = 1; led < 2; led = led + 1){
    digitalWrite(2,HIGH);
    delay(tiempo);
    digitalWrite(3,HIGH);
    delay(tiempo);
    digitalWrite(4,HIGH);
    delay(tiempo);
    digitalWrite(5,HIGH);
    delay(tiempo);
    digitalWrite(6,HIGH);
    delay(tiempo);
    digitalWrite(6,LOW);
    delay(tiempo);
    digitalWrite(5,LOW);
    delay(tiempo);
    digitalWrite(4,LOW);
    delay(tiempo);
    digitalWrite(3,LOW);
    delay(tiempo);
    digitalWrite(2,LOW);
    delay(tiempo);
    }
  }
  
