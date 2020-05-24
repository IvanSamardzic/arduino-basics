//declare digital pin 6 as ledPin
//declare analog pin 0 as analogPin
//declare val variable and initilise it on zero
int ledPin = 6;
int analogPin = A0;
int val = 0;

//declare ledPin as output pin
void setup(){
	pinMode(ledPin, OUTPUT);
}

//read analog value and convert it in digital value, use PWM method with val/4 value
//on the ledPin
void loop(){
	val = analogRead(analogPin);
	analogWrite(ledPin, val / 4);
}