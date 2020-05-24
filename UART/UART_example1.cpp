//declare setup method, declare UART baudrate as 9600 bits per second
void setup(){
	Serial.begin(9600);
}

//put Hello on serial monitor and then wait for 1 second, do this forever
void loop(){
	Serial.println("Hello");
	delay(1000);
}