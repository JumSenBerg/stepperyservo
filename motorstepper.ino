#include <Stepper.h>  //llamar libreria
int stepsPerRevolution = 2048;  //definir cuantos pasos necesita dar una vulta de 360 grados
int motSpeed = 11; //definir una velocidad rpm
Stepper myStepper(stepsPerRevolution,8,10,9,11); //nombrar los pines para controlar el motor
int dt = 500;

void setup() {

  myStepper.setSpeed(motSpeed);

}

void loop() {
  
  myStepper.step(stepsPerRevolution);
  delay(dt);
  myStepper.step(-stepsPerRevolution);
  delay(dt);
  }
