
int leds =  3;
int motora =  2;  //Avance
int motorb =  4;   // hacia atras
int direcciona = 7; // Derecha
int direccionb = 8;  // izquierda
int clason =  5;
int sensor = 6;

void avance()
{
 digitalWrite(motorb, LOW);  
 digitalWrite(motora, HIGH);
}

void retroceso()
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, HIGH);
}

void freno()
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, LOW);
}

void izquierda()
{
  digitalWrite(direcciona, LOW);
  digitalWrite(direccionb, HIGH);
}
void derecha()
{
 digitalWrite(direccionb, LOW);
 digitalWrite(direcciona, HIGH); 
}
void recto()
{
 digitalWrite(direcciona, LOW);
 digitalWrite(direccionb, LOW); 
}

