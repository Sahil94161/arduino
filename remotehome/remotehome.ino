#include<IRremote.h>

#define r1 5
#define r2 6
#define r3 7
#define r4 8

int RECV_PIN = 3;
IRrecv irrecv(RECV_PIN);
decode_results results;
int relay1=LOW;
int relay2=LOW;
int relay3=LOW;
int relay4=LOW;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
   pinMode(r4,OUTPUT);
  
  
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, DEC);
    switch(results.value)
    {
      case 2704:
       digitalWrite(r1,0);
       digitalWrite(r2,0);
       digitalWrite(r3,0);
        digitalWrite(r4,0);
       delay(250);
       break;
       case 16:
         relay1= ~ relay1;
        digitalWrite(r1,relay1);
        delay(250);
        break;
       case 2064:
        relay2 = ~ relay2;
        digitalWrite(r2,relay2);
        delay(250);
        break;
        case 1040:
        relay3= ~ relay3;
        digitalWrite(r3,relay3);
        delay(250);
        break;
        case 3088:
        relay4= ~relay4;
        digitalWrite(r4,relay4);
        delay(250);

      }
    irrecv.resume(); // Receive the next value
  }
}
