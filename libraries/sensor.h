#ifndef sensor_h
#define sensor_h

#include "Arduino.h"

class Sensor
{
public:
  Sensor(int ec, int tr);
  void getDistance(void);
  void getLastDis(void);
private:
  int echo, trig, lastdis;
};
#endif

Sensor::Sensor(int ec, int tr)
{
  echo = ec;
  trig = tr;
}
int Sensor::getDistance(void)
{
 long time = 0;

 digitalWrite(trig, LOW);
 delay(2);
 digitalWrite(trig, HIGH);
 delay(2);
 digitalWrite(trig, LOW);
 time = pulseIn(echo, HIGH);

 lastdis = int(0.017*time);
 return lastdis;
}
int Sensor::getLastDis(void)
{
  return lastdis;
}
