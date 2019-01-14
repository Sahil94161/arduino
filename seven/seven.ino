
int f=6;
int g=12;
int e=11;
int d=10  ;
int c=9;
int b=8;
int a=7;
int irPin=2;
int buttonState=0;
int p=0;
void setup() {
  // put your setup code here, to run once:
pinMode(g,OUTPUT);
pinMode(f,OUTPUT);
pinMode(e,OUTPUT);
pinMode(d,OUTPUT);
pinMode(c,OUTPUT);
pinMode(b,OUTPUT);
pinMode(a,OUTPUT);
pinMode(irPin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(irPin);
if(buttonState==LOW)
{p++;
delay(1000);
  }
if(p==1)
{
digitalWrite(a,1);
digitalWrite(b,1);//0
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);

}
if(p==2)
{
digitalWrite(a,0);//1
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);

}
if(p==3)
{
digitalWrite(a,1);//2
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,1);

}
if(p==4)
{
digitalWrite(a,1);
digitalWrite(b,1);//3
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,1);

}
if(p==5)
{
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);//4

}
if(p==6)
{
digitalWrite(a,1);
digitalWrite(b,0);//5
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);

}
if(p==7)
{
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,1);
digitalWrite(e,1);//6
digitalWrite(f,1);
digitalWrite(g,1);

}
if(p==8)
{
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);//7
digitalWrite(g,0);

}
if(p==9)
{
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);//8
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);

}
if(p==10)
{
digitalWrite(a,1);
digitalWrite(b,1);
digitalWrite(c,1);
digitalWrite(d,1);//9
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,1);

}
if(p==11)
{
  p=0;
  }





}
