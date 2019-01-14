int button=2;
int led1=13;
int led2=12;
int led3=11;
int led4=10;
int buttonState=0;
int p=0;
void setup() {
  pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(button,INPUT_PULLUP);
 
}

void loop() {
  
  buttonState=digitalRead(button);
  if(buttonState==LOW)
  {
    p++;
  }
    
  if(p==1)
  {
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  delay(100);
  
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  delay(100);
  } 
  if(p==2)
  {
    digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  delay(100);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
    }
    if(p==3)
    {
      digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  delay(100);
      }
      if(p==4)
      {
        
         digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  delay(100);
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,0);
  delay(100);
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  delay(100);
        }
  if(p==5)
  {p=0;}
}
