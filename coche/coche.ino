
int leds =  3;
int motora =  2;
int motorf =  4;
int clason =  5;
int sensor = 6;
void setup()
{
  pinMode(leds, OUTPUT);
  pinMode(motora, OUTPUT);
  pinMode(motorf, OUTPUT);
  pinMode(clason, OUTPUT);
  pinMode(sensor, INPUT);
}
void avance()
{
 digitalWrite(motorf, LOW);  
 digitalWrite(motora, HIGH);
}
void retroceso()
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorf, HIGH);
}
void freno()
{
 digitalWrite(motora, LOW);  
 digitalWrite(motorf, LOW);
}



//Principal
void loop()
{
 //Todabia sin nada 
}
