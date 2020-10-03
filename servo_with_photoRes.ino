#include<Servo.h>
Servo myServo;
int servoAngle=0;


int readPin=A0;
int servoPin=13;
int dt=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readPin,INPUT);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(analogRead(readPin));
int y = analogRead(readPin);

servoAngle = (165./400.)*(y - 600.);

if (y>=1000){
  servoAngle=165;
}

if (y<=600){
  servoAngle=0;
}

myServo.write(servoAngle);

Serial.print(" and servo angle is : ");
Serial.println(servoAngle);
delay(dt);

}
