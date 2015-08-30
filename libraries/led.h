#ifndef led_h
#define led_h

#include <Arduino.h>

class Led
{
public:
  Led(int pin);
  void update(void);
  void mode(void);
  void start(int);
  void stop(void);
};
#endif
int pinled, modet;
unsigned long latesttick;
boolean status = false;

void encender(void);
void apagar(void);
void parpadear(void);

Led::Led(int pin)
{
 pinled = pin;
}

void Led::update(void)
{
 if(modet == 0 && status){
  apagar();
 }if(modet == 1 && !status){
  encender();
 }if(modet == 2){
  parpadear(); 
 }
}

void Led::start(int newmode)
{
 modet = newmode;
}
void Led::stop(void)
{
 modet = 0;
 apagar();
}
void parpadear(void){
 if(latesttick == 0 || latesttick+300 < millis()){
  latesttick = millis();
  status ? apagar() : encender(); 
 }
}
void encender(void)
{
 digitalWrite(pinled, HIGH);
 status = true;
}
void apagar(void)
{
 digitalWrite(pinled, LOW);
 status = false;
}
