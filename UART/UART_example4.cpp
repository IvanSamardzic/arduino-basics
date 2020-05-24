//declare data variable and set pin 13 as led pin
char data;
int led = 13;

//define uat baudrate as 9600 bits per second, declare led pin as output
void setup(){
	Serial.begin(9600);
	pinMode(led, OUTPUT);
}

//check if uart is available, if it is, monitor data variable value, if it is 1, turn on
//a led, if it is 0, turn off the led
void loop(){
	if(Serial.available() > 0){
		data = (char) Serial.read();
		
		Serial.print("received data is: ");
		
		if(data == '1'){
			digitalWrite(led, 1);
			Serial.println(data);
		}
		else if(data == '0'){
			digitalWrite(led, 0);
			Serial.println(data);
		}
		else{
			Serial.println("invalid value");
		}
	}
}