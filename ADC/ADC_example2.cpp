//declare analog pin0 as sensorPin, declare two variables digitalValue and analogVoltage
//to store digital value and converted voltage value
int sensorPin = A0;   // select the input pin for the potentiometer
int digitalValue = 0;  // variable to store the value coming from the sensor
float analogVoltage = 0.00;

//declare uart baudrate as 9600 bits per second
void setup() {
  Serial.begin(9600);
}

//convert analog value potentiometer resistance into digital, store it in digitalValue
//variable, print it on the screen and then convert it in voltage 
void loop() {
  digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.print("digital value = ");
  Serial.print(digitalValue);        //print digital value on serial monitor
  //convert digital value to analog voltage
  analogVoltage = (digitalValue * 5.00)/1023.00;
  Serial.print("  analog voltage = ");
  Serial.println(analogVoltage);
  delay(1000);
}