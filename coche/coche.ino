#include "libraries/control.h"
#include "libraries/led.h"


int leda = 13,  //led de alante.
 ledd = 12, //led de atras
 motora =  2,  //Avance
 motorb =  4,   // hacia atras
 direcciona = 7, // Derecha
 direccionb = 8,  // izquierda
//sensor = 6,     //Ultra sonidos
 timelapse;
 
char comando = 'S', prevcomando = 'A'; 

 //Configuracion del coche
 Coche coche = Coche(motora,motorb,direcciona,direccionb);
 Led ledelante = Led(leda);
 Led ledatras = Led(ledd);
 
void setup()
{
  //Asignar el modo del pin
  Serial.begin(9600);
  pinMode(motora, OUTPUT);
  pinMode(motorb, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(direcciona, OUTPUT);
  pinMode(direccionb, OUTPUT);
}

//Principal
void loop()
{
 //Actualizar el estado de las led
 ledatras.update();
 ledelante.update();

 //Comprobar si ha llegado un comando
 if(Serial.available() > 0){
   prevcomando = comando;
   comando = Serial.read();
   if(comando != prevcomando)
     //Ejectuar accion segun el comando
     switch(comando){
      case 'S': 
       coche.parar();
       break;
      case 'F':
       coche.avance();
       coche.recto();
       break;
      case 'B':
       coche.retroceso();
       coche.recto();
       break;
      case 'L':
       coche.izquierda();
       coche.freno();
       break;
      case 'R':
       coche.derecha();
       coche.freno();
       break;
      case 'G':
       coche.izquierda();
       coche.avance();
       break;
      case 'I':
       coche.derecha();
       coche.avance();
       break;
      case 'H':
       coche.izquierda();
       coche.retroceso();
       break;
      case 'J':
       coche.derecha();
       coche.retroceso();
       break;
      case 'W':
       ledelante.start(1);
       break;
      case 'w':
       ledelante.stop();
       break;
      case 'U':
       ledatras.start(1);
       break;
      case 'u':
       ledatras.stop();
       break;
      case 'X':
       ledelante.start(2);
       ledatras.start(2);
       break;
      case 'x':
       ledelante.stop();
       ledatras.stop();
       break;
      case '1': case '2': case '3': case '4': case '5':
      case '6': case '7': case '8': case '9':
       ledatras.updatetime((comando-48)*100);
       ledelante.updatetime((comando-48)*100);
       break;
      case 'q':
       ledatras.updatetime(1000);
       ledelante.updatetime(1000);
       break;
      default:
       coche.parar();
       break;
     }
   timelapse = millis();
 }else{
  if(timelapse+500 > millis()){
   //Si no se recibe un comando desde hace 0,5 segundos, el coche se para.
   coche.parar(); 
  }
 }
 
}
