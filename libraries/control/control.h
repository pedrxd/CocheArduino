#ifndef control_h
#define control_h

#include "Arduino.h"
class coche
{
  public:
    void ini(int a, int b , int c, int d);
    void avance(void);
    void retroceso(void);
    void freno(void);
    void derecha(void);
    void izquierda(void);
    void recto(void);
  private:
    int leds, motora, motorb, direcciona, direccionb, clason,
sensor;
};
#endif
