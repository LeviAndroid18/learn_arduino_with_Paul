int yellowPin = 9;
int bright_1 = 50;
int bright_2 = 100;
int bright_3 = 150;
int bright_4 = 200;
int bright_5 = 250;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(yellowPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(yellowPin, bright_1);
  delay(1000);
  analogWrite(yellowPin, bright_2);
  delay(1000);
  analogWrite(yellowPin, bright_3);
  delay(1000);
  analogWrite(yellowPin, bright_4);
  delay(1000);
  analogWrite(yellowPin, bright_5);
  delay(1000);
}
