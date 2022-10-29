/*
$ = Cuando hay un valor numerico despues de la orden EJ:$AXX_
# = Cuando no hay un valor numerico EJ: #L_
*/

<<<<<<< HEAD
=======
//Librerias 
#include <Arduino.h>
#define _PWM_LOGLEVEL_        3
#include "RP2040_PWM.h"

>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
//Pines para los motores
#define pmotiA 14
#define pmotiB 16
#define pmotdA 15
#define pmotdB 17

//Pines para sensores y otras cosas
#define leds 6
#define boc 7
#define tempH 8
#define uTrigger 9
#define uEcho 10

<<<<<<< HEAD
#include <Arduino.h>
#define _PWM_LOGLEVEL_        3
#include "RP2040_PWM.h"
=======
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)

//creates pwm instance
RP2040_PWM* motiA;
RP2040_PWM* motiB;
RP2040_PWM* motdA;
RP2040_PWM* motdB;

const float freq = 20000;
float dCyclei = 0;
float dCycled = 0;
int numChar[2];
bool completeString = false; 
String inputString = ""; //Almacenar el mensaje que llega desde el bluetooth
<<<<<<< HEAD
=======
uint32_t t = 0;
uint16_t distance = 0;


void uDistance (){
  digitalWrite(uTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(uTrigger, LOW);
                    
  t = pulseIn(uEcho, HIGH);
  distance = t / 59;
}


>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)


void setup()
{
<<<<<<< HEAD
  //assigns pin 25 (built in LED), with frequency of 20 KHz and a duty cycle of 0%
=======
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
  motiA = new RP2040_PWM(pmotiA, freq, dCyclei);
  motiB = new RP2040_PWM(pmotiB, freq, dCyclei);
  motdA = new RP2040_PWM(pmotdA, freq, dCycled);
  motdB = new RP2040_PWM(pmotdB, freq, dCycled);

  pinMode(boc, OUTPUT);
  pinMode(leds, OUTPUT);
<<<<<<< HEAD
  pinMode(tempH, INPUT);
  pinMode(uTrigger, INPUT);
  pinMode(uEcho, INPUT);
=======
  pinMode(uTrigger, OUTPUT);
  pinMode(uEcho, INPUT);

  digitalWrite(uTrigger, LOW);
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
  
  Serial.begin(115200);
  Serial1.begin(9600);
}

void loop()
{
  completeString = false;
 // read from port 1, send to port 0:
  while(Serial1.available()) { //Bluetooth
    char inChar = Serial1.read();
    inputString += inChar;

    if(inChar == '_'){
      completeString = true;
    }
  }

  if(completeString == true){
<<<<<<< HEAD
    if(inputString.charAt(0) == '$'){ // Comparamos el primer caracter que mando el modulot
      numChar[0] = inputString.charAt(2); //Convertir los caracteres de valor que se reciben en un int
=======
    Serial.print(inputString);
    // Comparamos el primer caracter que mando el modulo
    if(inputString.charAt(0) == '$'){ 
      //Convertir los caracteres de valor que se reciben en un int
      numChar[0] = inputString.charAt(2); 
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
      numChar[1] = inputString.charAt(3);
      dCyclei = (numChar[0] - 48) * 10 + (numChar[1] - 48); 
      dCycled = (numChar[0] - 48) * 10 + (numChar[1] - 48) ;

      switch(inputString.charAt(1)){
        case 'A': motiA -> setPWM(pmotdA,freq,dCyclei,true);
                  motdA -> setPWM(pmotdB,freq,dCycled,true);
                  break;
<<<<<<< HEAD
        case 'D' : motiA -> setPWM(pmotdA,freq,0,true);
                   motiB -> setPWM(pmotdB,freq,0,true);
                   break;
        case 'H' :
                   int bocina = (numChar[0] - 48) * 10 + (numChar[1] - 48); 
=======
        case 'H' :
                   int bocina = numChar[0] - 48; 
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
                   digitalWrite(boc, bocina);
                   break;
      }
      inputString = "";
    }

    if(inputString.charAt(0) == '#'){
      switch(inputString.charAt(1)){
        case 'L' :
                    digitalWrite(leds, !digitalRead(leds));
                    break;
<<<<<<< HEAD
=======
        case 'D' :  
                    uDistance();
                    Serial.print(F("Distancia de: "));
                    Serial.print(distance);
                    Serial.println(F(" cm"));
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
      }
      inputString = "";
    }
    
  }

  // read from port 0, send to port 1:
  if (Serial.available()) { //Pi Pico
    int inByte = Serial.read();
    Serial1.write(inByte);
  }
  
<<<<<<< HEAD
}
  
=======
}
>>>>>>> 3065ff5 (Funcion de Ultrasonido Añadida)
