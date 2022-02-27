/*Note the numbering of analog pins: Pin 2 is Analog 1, Pin 3 is Analog 3, Pin 4 is Analog 2. 
For the Uno, the terms A1, A2, and A3 are mapped for you. 
For ATtiny85's, they are not. 
So for the pinMode calls, use the Pin number (stenciled on Trinket), for analogRead, use the analog number.*/


// Light Switch
int pin3 = 3; // LED pin
int sensorValue = 0;

void setup() {
  pinMode(4, OUTPUT); 
  pinMode(3,OUTPUT);
  pinMode(0,OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  pinMode(2, INPUT);
   sensorValue = analogRead(1); // analog 1 is pin 2
  if (sensorValue < 20) {
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
  digitalWrite(3, LOW);
  }
  else {
  digitalWrite(4, LOW);
  digitalWrite(0,LOW);
  digitalWrite(3, HIGH);
  }
  delay(0);
}
