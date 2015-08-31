#ifndef control_h
#define control_h

#include "Arduino.h"

class Coche
{
public:
  Coche(int a, int b , int c, int d);
  void avance(void);
  void retroceso(void);
  void freno(void);
  void derecha(void);
  void izquierda(void);
  void recto(void);
  void parar(void);
private:
  int leds, motora, motorb, direcciona, direccionb, sensor;
};
#endif


Coche::Coche(int ma, int mb, int da, int db)
{
 motora = ma;
 motorb = mb;
 direcciona = da;
 direccionb = db;
}

void Coche::avance(void)
{
 digitalWrite(motorb, LOW);  
 digitalWrite(motora, HIGH);
}

void Coche::retroceso(void)
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, HIGH);
}

void Coche::freno(void)
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorb, LOW);
}

void Coche::izquierda(void)
{
  digitalWrite(direcciona, LOW);
  digitalWrite(direccionb, HIGH);
}
void Coche::derecha(void)
{
 digitalWrite(direccionb, LOW);
 digitalWrite(direcciona, HIGH); 
}
void Coche::recto(void)
{
 digitalWrite(direcciona, LOW);
 digitalWrite(direccionb, LOW); 
}
void Coche::parar(void)
{
 digitalWrite(direcciona, LOW);
 digitalWrite(direccionb, LOW);
 digitalWrite(motora, LOW);
 digitalWrite(motorb, LOW);
}
