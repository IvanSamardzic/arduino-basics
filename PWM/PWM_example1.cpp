//declare pin 6 as led pin, declare system variables, brightness and fadeAmount
//and initialise them on respect values
int led = 6;
int brightness = 0;
int fadeAmount = 5;

//declare led pin as output
void setup(){
	pinMode(led, OUTPUT);
}

void loop(){
	//set brightness value as PWM value on the led pin
	analogWrite(led, brightness);
	
	//increase brightness value with 5 every 30 miliseconds
	brightness += fadeAmount;
	
	//check if brightness value is over 255 or beyond 0, then change fadeAmount sign
	if(brightness <= 0 || brightness >= 255){
		fadeAmount = -fadeAmount;
	}
	delay(30);
}