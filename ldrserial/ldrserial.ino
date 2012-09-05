/*
Led Intensity variation with a potentiometer
*/

int sensorPin = A0;    
int sensorValue = 0; 
int valuemapped = 0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  valuemapped = map(sensorValue, 0, 1024, 0, 255);
  Serial.print(valuemapped);
  Serial.println();
  delay(1000);
}