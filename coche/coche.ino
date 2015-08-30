#include "/home/pedro/Proyectos/coche/libraries/control.h"
#include "/home/pedro/Proyectos/coche/libraries/led.h"
#include <stdio.h>

int leds = 13, 
 motora =  2,  //Avance
 motorb =  4,   // hacia atras
 direcciona = 7, // Derecha
 direccionb = 8,  // izquierda
 sensor = 6; 
 Coche coche = Coche(motora,motorb,direcciona,direccionb);
 Led led = Led(leds);
 
void setup()
{
  pinMode(leds, OUTPUT);
  pinMode(motora, OUTPUT);
  pinMode(motorb, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(direcciona, OUTPUT);
  pinMode(direccionb, OUTPUT);
}

//Principal
void loop()
{

}
