int buzz_pin = 6;
int readpin =A3;
int buzz_input_dt;// parse the pot measurement into the delay time for switching

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzz_pin,OUTPUT);
pinMode(readpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(analogRead(readpin));
Serial.print(" ===> ");
buzz_input_dt = ((9940./1023.)*analogRead(readpin)) + 60.;
Serial.println(buzz_input_dt);
digitalWrite(buzz_pin,HIGH);
delayMicroseconds(buzz_input_dt);
digitalWrite(buzz_pin,LOW);
delayMicroseconds(buzz_input_dt);
}
