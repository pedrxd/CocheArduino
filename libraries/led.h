#ifndef led_h
#define led_h

#include <Arduino.h>

class Led
{
public:
  Led(int pin);
  void update(void);
  void start(int);
  void stop(void);
  void updatetime(int);
  void encender(void);
  void apagar(void);
  void parpadear(void);
private:
  int pinled, modet, delaytick;
  boolean status = false;
  unsigned long latesttick;
};
#endif

Led::Led(int pin)
{
 pinled = pin;
 pinMode(pin, OUTPUT);
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
void Led::updatetime(int i){
 delaytick = i;
}
void Led::parpadear(void){
 if(latesttick == 0 || (latesttick+(unsigned long)delaytick) < millis()){
  latesttick = millis();
  status ? apagar() : encender(); 
 }
}
void Led::encender(void)
{
 digitalWrite(pinled, HIGH);
 status = true;
}
void Led::apagar(void)
{
 digitalWrite(pinled, LOW);
 status = false;
}

