const int analogInPin = A0;// Analog input pin that the potentiometer is attached to
int out=9;
int sensorValue = 0;        // value read from the pot

int OutputValue = 0;
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  

}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin); // print the results to the Serial Monitor:
  //map it the range of analog out.
  OutputValue=map(sensorValue,0,1023,0,255);
  //change the analogout value
  analogWrite(out,OutputValue);
   //print result of serial screen
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  Serial.print("output= ");
  Serial.println(OutputValue);
  delay(200);
 

}
