#include "Arduino.h"
#include "/home/pedro/Proyectos/coche/libraries/control/control.h"


int leds, motora, motorb, direcciona, direccionb, clason, sensor; 

coche::coche(int ma, int mb, int da, int db)
{
 motora = ma;
 motorb = mb;
 direcciona = da;
 direccionb = db;
}

void coche::avance(void)
{
 digitalWrite(motorb, LOW);  
 digitalWrite(motora, HIGH);
}

void coche::retroceso(void)
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, HIGH);
}

void coche::freno(void)
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, LOW);
}

void coche::izquierda(void)
{
  digitalWrite(direcciona, LOW);
  digitalWrite(direccionb, HIGH);
}
void coche::derecha(void)
{
 digitalWrite(direccionb, LOW);
 digitalWrite(direcciona, HIGH); 
}
void coche::recto(void)
{
 digitalWrite(direcciona, LOW);
 digitalWrite(direccionb, LOW); 
}

