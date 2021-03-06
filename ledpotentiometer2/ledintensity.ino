/*
Led Intensity variation with a potentiometer
*/

int sensorPin = A0;    
int ledPin = 11;    
int sensorValue = 0; 
int valuemapped = 0;

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  valuemapped = map(sensorValue, 0, 1024, 0, 255);
  analogWrite(ledPin, valuemapped);  
}