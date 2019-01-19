const int analogInPin = A5;// Analog input pin that the potentiometer is attached to
int led=13;
int sensorValue = 0;        // value read from the pot

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
   // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  delay(200);
  if(sensorValue>600)
  {
    digitalWrite(led,HIGH);
    }
    else
    {
    digitalWrite(led,LOW);
    }


}
