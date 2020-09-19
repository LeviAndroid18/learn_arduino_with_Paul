int supply_pin = 8;
float volt_read = 0;
int volt_read_pin = A3;
int delay_read = 250;
void setup() {
  // put your setup code here, to run once:
pinMode(supply_pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(supply_pin,HIGH);

volt_read=(5./1023.)*analogRead(volt_read_pin);

Serial.println(volt_read);
delay(delay_read);

}
