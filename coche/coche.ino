#include "coche/control.c"

int leds =  3;
int motora =  2;  //Avance
int motorb =  4;   // hacia atras
int direcciona = 7; // Derecha
int direccionb = 8;  // izquierda
int clason =  5;
int sensor = 6;

void setup()
{
  pinMode(leds, OUTPUT);
  pinMode(motora, OUTPUT);
  pinMode(motorb, OUTPUT);
  pinMode(clason, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(clason, OUTPUT);
  pinMode(direcciona, OUTPUT);
  pinMode(direccionb, OUTPUT);
}

//Principal
void loop()
{
 //Todabia sin nada 
}
