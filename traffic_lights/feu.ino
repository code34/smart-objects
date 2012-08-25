	/*
	A simple traffic lights - nicolas_boiteux@yahoo.fr
	*/

	// Green 		 
	int led = 11;
	// Orange
	int led2 = 7;
	// Red
	int led3 = 4;

	void setup() {                
		pinMode(led, OUTPUT);
		pinMode(led2, OUTPUT);  
		pinMode(led3, OUTPUT);  
	}
	
	void loop() {
		digitalWrite(led, HIGH);
		delay(10000);
		digitalWrite(led, LOW);
		delay(500);
		digitalWrite(led2, HIGH);
		delay(3000);
		digitalWrite(led2, LOW);
		delay(500);
		digitalWrite(led3, HIGH);
		delay(10000);
		digitalWrite(led3, LOW);
		delay(500); 
	}