//declare pins, rename them
int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;

//declare an array which contains all leds
int myLeds[4] = {led1, led2, led3, led4};

//declare led1-led4 pins as outputs
void setup(){
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
}

//declare a functions to set high one led at the time
void led_on(int ledPos){
	for(byte i = 0; i < 4; i++){
		if( i == ledPos)
			digitalWrite(myLeds[ledPos], 1);
		if( i != ledPos)
			digitalWrite(myLeds[i], 0);
	}
}

//set led on and than wait 0,5 sec, than set led off
void loop(){
	led_on(0);
	delay(500);
	led_on(1);
	delay(500);
	led_on(2);
	delay(500);
	led_on(3);
	delay(500);
}