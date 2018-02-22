#include <math.h>

int dur=10 , freq=0;
void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(3,INPUT);
pinMode(6,OUTPUT);
attachInterrupt(0,RestartTheCycle,RISING); // put pin 2 on the same node of pin 4 and 3 

}

void loop()
{
  
 if(digitalRead(4)==HIGH)
{
  freq=freq+20;
}
if(digitalRead(3)==HIGH)
{
  freq=freq-20;
}
if(freq>255)
{
  freq=0;
}
analogWrite(6,freq);
delay(dur*1000);
digitalWrite(6,LOW);
delay(2000);
}
void RestartTheCycle ()
{
digitalWrite(6,LOW);

}
