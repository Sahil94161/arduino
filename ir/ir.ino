int button=2;

int led1=13;
int buttonState=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
 pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState=digitalRead(button);
  if(buttonState==HIGH)
  {
    //p++;
    //elay(2000);
digitalWrite(led1,HIGH);
    }
    else
    {
digitalWrite(led1,LOW);

    }
}
