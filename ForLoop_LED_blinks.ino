int red_pin = 7;
int yellow_pin = 6;
int j;
int k;
int delaytime_yellow = 500;
int blinkcount_yellow = 3;
int delaytime_red = 500;
int blinkcount_red = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(red_pin,OUTPUT);
  pinMode(yellow_pin,OUTPUT);

}

void loop() {
  // blink yellow pin 3x
  for (j=1;j<=blinkcount_yellow;j=j+1){
    digitalWrite(yellow_pin,HIGH);
    delay(delaytime_yellow);
    digitalWrite(yellow_pin,LOW);
    delay(delaytime_yellow);
  }
  for (k=1;k<=blinkcount_red;k=k+1){
    digitalWrite(red_pin,HIGH);
    delay(delaytime_red);
    digitalWrite(red_pin,LOW);
    delay(delaytime_red);
  }

}
