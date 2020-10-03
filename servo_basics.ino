#include<Servo.h>
Servo myServo;
int servoPin=13;
int servoAngle;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);// declaring that servoPin is attached to your servo
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("What is the angle for your servo:");
  while(Serial.available()==0){
  }
  servoAngle=Serial.parseInt();
  Serial.println(servoAngle);
  myServo.write(servoAngle);

}
