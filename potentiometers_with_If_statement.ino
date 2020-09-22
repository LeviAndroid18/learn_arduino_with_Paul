int supply_pin = 8;
int warn_pin = 7;
int delay_warn = 600;

float volt_read;
int volt_read_pin = A3;
int delay_read = 250;
float treshhold_val=2.75;

void setup() {
  // put your setup code here, to run once:
pinMode(supply_pin,OUTPUT);
pinMode(warn_pin,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(supply_pin,HIGH);

volt_read=(5./1023.)*analogRead(volt_read_pin);

Serial.print("Potentiometer read voltage =");
Serial.println(volt_read);
delay(delay_read);

//warning pin programming
if(volt_read>(treshhold_val+.500)){
  digitalWrite(warn_pin,HIGH);
}
if(volt_read>treshhold_val && volt_read<=(treshhold_val+.500)){
  digitalWrite(warn_pin,HIGH);
  delay(delay_warn);
  digitalWrite(warn_pin,LOW);
  delay(delay_warn);
  digitalWrite(warn_pin,HIGH);
  delay(delay_warn);
  digitalWrite(warn_pin,LOW);
  delay(delay_warn+1000);
}
if(volt_read<treshhold_val){
  digitalWrite(warn_pin,LOW);
}

}
