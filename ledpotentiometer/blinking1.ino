/*
Blinking a led with a potentiometer / speed variation
*/

int sensorPin = A0;   
int ledPin = 11;      
int sensorValue = 0; 

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  analogWrite(ledPin, 255);  
  delay(sensorValue);
  analogWrite(ledPin, 0);
  delay(sensorValue);
}