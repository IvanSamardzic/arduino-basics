//print signals on the serial plotter
//declare uart baudrate as 9600 bits per second
void setup() {
  Serial.begin(9600);
}

//do this forever, in the for loop use j variable to increment sinus and cosinus argument
//plot sinewave and cosinewave
void loop() {
  for (float j = 0; j < 360.00; j=j+2) {
   Serial.print(sin(j * (PI / 180.00)));    
   Serial.print(" ");
   Serial.println(cos(j * (PI / 180.00)));   
  }
}