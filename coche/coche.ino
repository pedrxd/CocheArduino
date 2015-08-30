#include "/home/pedro/Proyectos/coche/libraries/control/control.h"
#include <stdio.h>

int leds =  3,
 motora =  2,  //Avance
 motorb =  4,   // hacia atras
 direcciona = 7, // Derecha
 direccionb = 8,  // izquierda
 clason =  5,
 sensor = 6; 
 coche ch;
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
  ch.avance();
}

//Principal
void loop()
{
 
}
