int yellow_pin=5;
int red_pin=4;
int white_pin=3;

String LED_color;
int delay_time = 3000;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(yellow_pin,OUTPUT);
pinMode(red_pin,OUTPUT);
pinMode(white_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What LED color you want to light up:");
Serial.print("Yellow [Y/y], Red [R/r], White [W/w]?");
while(Serial.available()==0){//Enables the program to 'hang' and wait for user input.
  
}
LED_color = Serial.readString();//Affix the user entered value into the declared variable.
Serial.println(LED_color);

if( LED_color == "Y" || LED_color == "y" ){
  digitalWrite(yellow_pin,HIGH);
  while(Serial.available()==0){//Enables the program to 'hang' and wait for user input.  
  }
  digitalWrite(yellow_pin,LOW);
}
if( LED_color == "R" || LED_color == "r" ){
  digitalWrite(red_pin,HIGH);
  while(Serial.available()==0){//Enables the program to 'hang' and wait for user input.  
  }
  digitalWrite(red_pin,LOW);
}
if( LED_color == "W" || LED_color == "w" ){
  digitalWrite(white_pin,HIGH);
  while(Serial.available()==0){//Enables the program to 'hang' and wait for user input.  
  }
  digitalWrite(white_pin,LOW);
}

/* Using while loop but this gives me a  bug though!
j=1;
while(j<=blink_count){
  digitalWrite(yellow_pin,HIGH);
  delay(delay_time_led);
  digitalWrite(yellow_pin,LOW);
  delay(delay_time_led);
  j++;
}
*/
}
