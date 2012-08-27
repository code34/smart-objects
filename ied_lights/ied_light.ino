/*
Simple IED lights for ARMA SIMULATOR -use only 3 leds
*/

const int ledPin1 = 10; // GREEN
const int ledPin2 = 9; // ORANGE
const int ledPin3 = 4; // RED

void setup()
{
      Serial.begin(9600); // Initialize serial port to send and receive at 9600 baud
      pinMode(ledPin1, OUTPUT); // set this pin as output
      pinMode(ledPin2, OUTPUT); // set this pin as output
      pinMode(ledPin3, OUTPUT); // set this pin as output
}
void loop()
{
	if ( Serial.available()) // Check to see if at least one character is available
	{
		char ch = Serial.read();
		if(ch >= '0' && ch <= '9')
		{
			if(ch == '0') 
			{
				digitalWrite(ledPin1,HIGH);
				digitalWrite(ledPin2,LOW);
				digitalWrite(ledPin3,LOW);        
			}
			if(ch == '1')
			{
				digitalWrite(ledPin1,HIGH);
				digitalWrite(ledPin2,HIGH);
                                delay(500);
                                digitalWrite(ledPin2,LOW);
                                delay(500);
				digitalWrite(ledPin3,LOW);
			}
			if(ch == '2')
			{
				digitalWrite(ledPin1,HIGH);
				digitalWrite(ledPin2,HIGH);
				digitalWrite(ledPin3,LOW);
			}
			if(ch == '3')
			{
				digitalWrite(ledPin1,HIGH);
				digitalWrite(ledPin2,HIGH);
				digitalWrite(ledPin3,HIGH);
                                delay(500);
				digitalWrite(ledPin3,LOW);
                                delay(500);
			}
			if(ch == '4')
			{
				digitalWrite(ledPin1,HIGH);
				digitalWrite(ledPin2,HIGH);
				digitalWrite(ledPin3,HIGH);
			}
		}
	}
}