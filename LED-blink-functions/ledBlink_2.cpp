//declare pins 12 and 13 as led1 and led2 pins
int led1 = 12;
int led2 = 13;

//declare led1 and led2 pins as outputs
void setup(){
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}

//set led on and than wait 0,5 sec, than set led off
void loop(){
	digitalWrite(led1, 1);
	digitalWrite(led2, 0);
	delay(500);
	digitalWrite(led1, 0);
	digitalWrite(led2, 1);
	delay(500);
}