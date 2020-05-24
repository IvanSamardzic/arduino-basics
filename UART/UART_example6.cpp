//declare data variable and set pins 10, 11, 12 and 13 as led pins
//declare an array with elements representing each led pin
char data;
int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;
int myLeds[4] = {led1, led2, led3, led4};

//define uart baudrate as 9600 bits per second, declare led pin as output
void setup(){
	Serial.begin(9600);
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
}

//sequentially turn all the leds on
void turn_leds_on(){
	for( int i = 0; i < 4; i++){
		digitalWrite(myLeds[i], 1);
		Serial.print("Led ");
		Serial.print(i);
		Serial.println(" on!");
		delay(100);
	}
	delay(500);
}

//sequentially turn all the leds off
void turn_leds_off(){
	for( int i = 0; i < 4; i++){
		digitalWrite(myLeds[i], 0);
		Serial.print("Led ");
		Serial.print(i);
		Serial.println(" off!");
		delay(100);
	}
	delay(500);
}
//check if uart is available, if it is, monitor data variable value, if it is 1, turn on
//a led, if it is 0, turn off the led
void loop(){
	if(Serial.available() > 0){
		data = (char) Serial.read();
		
		Serial.print("received data is: ");
		
		if(data == '1'){
			turn_leds_on();
			Serial.println(data);
		}
		else if(data == '0'){
			turn_leds_off();
			Serial.println(data);
		}
		else{
			Serial.println("invalid value");
		}
	}
}