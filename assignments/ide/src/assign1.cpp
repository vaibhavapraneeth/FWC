#include<Arduino.h>
int w,x,y,z;
int f;

void assign(int f)
{
         digitalWrite(8,f);
}

void setup()
{
	pinMode(2,INPUT);
	pinMode(3,INPUT);
	pinMode(4,INPUT);
	pinMode(5,INPUT);
	pinMode(8,OUTPUT);
}

void loop()
{
         w=digitalRead(2);
         x=digitalRead(3);
         y=digitalRead(4);
         z=digitalRead(5);
         f= (w&&!y) || (x&&!z&&!y) || (x&&w&&!z);
assign(f);
}


