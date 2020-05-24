//declare analog pin 0 as sensorPin, decalre digitalValue variable and initialise iter_swap
//as zero
int sensorPin = A0;
int digitalValue = 0;

//declare uart baudrate as 9600 bits per second
void setup(){
	Serial.begin(9600);
}


//calculate digital value of potentiometer resistance, stort it in digitalValue variable
//print the value on the serial monitor
void loop(){
	digitalValue = analogRead(sensorPin);
	Serial.print("digitalValue= ");
	Serial.println(digitalValue);
	delay(1000);
}