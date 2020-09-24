int yellow_pin=6;
int blink_count;
int j;
int delay_time_led=500;
String user_msg = "How many blinks you want for your LED:";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(yellow_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(user_msg);
while(Serial.available()==0){//Enables the program to 'hang' and wait for user input.
  
}
blink_count = Serial.parseInt();//Affix the user entered value into the declared variable.
//Serial.println(blink_count);

for (j=1;j<=blink_count;j=j+1){
  digitalWrite(yellow_pin,HIGH);
  delay(delay_time_led);
  digitalWrite(yellow_pin,LOW);
  delay(delay_time_led); 
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
