int sPin=7;
int xPin=A1;
int yPin=A0;
int sw_stat;
int xVal;
int yVal;
int dt=200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(sPin,INPUT);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
digitalWrite(sPin,HIGH);// to simulate a pull-up resistor function
}

void loop() {
  // put your main code here, to run repeatedly:
xVal=analogRead(xPin);
yVal=analogRead(yPin);
sw_stat=digitalRead(sPin);

Serial.print("Rx = ");
Serial.print(xVal);
Serial.print(" Ry = ");
Serial.print(yVal);
Serial.print(" Switch status = ");
Serial.println(sw_stat);
delay(dt);
}
