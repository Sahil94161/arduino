#include <DS3231.h>
DS3231   rtc(A0, A1);
Time t;
int pin=8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin, OUTPUT);

rtc.begin();


}

void loop() {
  // put your main code here, to run repeatedly:
t=rtc.getTime();
Serial.print("DAte:");
Serial.print(t.date,DEC);
Serial.print("/");
Serial.print(t.mon,DEC);
Serial.print("/");
Serial.print(t.year,DEC);
Serial.println();
Serial.println("Day of Week");
Serial.println(t.dow);
Serial.print(t.hour,DEC);
Serial.print(":");
Serial.print(t.min,DEC);
Serial.print(":");
Serial.print(t.sec,DEC);


delay(1000);

if(t.hour==7&&t.min==14)
{
  digitalWrite(pin,HIGH);
  delay(5000);
  }
  else
  {
    digitalWrite(pin,LOW);}
}
