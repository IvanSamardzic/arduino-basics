//declare pins, rename them
int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;

//declare led1-led4 pins as outputs
void setup(){
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
	pinMode(led3, OUTPUT);
	pinMode(led4, OUTPUT);
}

//set led on and than wait 0,5 sec, than set led off
void loop(){
	digitalWrite(led1, 1);
	digitalWrite(led2, 0);
	digitalWrite(led3, 0);
	digitalWrite(led4, 0);
	delay(500);
	digitalWrite(led1, 0);
	digitalWrite(led2, 1);
	digitalWrite(led3, 0);
	digitalWrite(led4, 0);
	delay(500);
	digitalWrite(led1, 0);
	digitalWrite(led2, 0);
	digitalWrite(led3, 1);
	digitalWrite(led4, 0);
	delay(500);
	digitalWrite(led1, 0);
	digitalWrite(led2, 0);
	digitalWrite(led3, 0);
	digitalWrite(led4, 1);
	delay(500);
}