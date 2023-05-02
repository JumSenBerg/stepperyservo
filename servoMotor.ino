#include <Servo.h>

int servoPin = 6;
int servoPos = 90;
Servo myServo;


void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);


}

void loop() {
  Serial.println("Que angulo quieres?");
  while (Serial.available() == 0){

  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);

}
