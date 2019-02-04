#include "SoftwareSerial.h"
#define r1 6
#define r2 7
#define r3 8
#define r4 9
int relay1=LOW;
int relay2=LOW;
int relay3=LOW;
int relay4=LOW;
int data;
SoftwareSerial HC05(4,5);//tx ,rx
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
HC05.begin(9600);
pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
   pinMode(r4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
if(HC05.available())
{
  data=HC05.read();
  Serial.println(data);
  switch(data)
    {
      case 2704:
       digitalWrite(r1,1);
       digitalWrite(r2,0);
       digitalWrite(r3,0);
        digitalWrite(r4,0);
       delay(250);
       break;
       case 49:
         relay1= ~ relay1;
        digitalWrite(r1,relay1);
        delay(250);
        break;
       case 50:
        relay2 = ~ relay2;
        digitalWrite(r2,relay2);
        delay(250);
        break;
        case 51:
        relay3= ~ relay3;
        digitalWrite(r3,relay3);
        delay(250);
        break;
        case 52:
        relay4= ~relay4;
        digitalWrite(r4,relay4);
        delay(250);

      }
  }
}
