//declare system variable
char data;

//setup the system, declare uart baudrate as 9600 bits per second
void setup(){
	Serial.begin(9600);
}

//check if any data is received, if it is, store received data into data variable,
//print that received data on the command prompt, do it forever
void loop(){
	if(Serial.available() > 0){
		data = Serial.read();
		Serial.print("received data is: ");
		Serial.println(data);
	}
}