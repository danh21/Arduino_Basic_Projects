#include <TimeOut.h>

int led = 13;

TimeOut timeout0;



void setup() 
{
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  timeout0.timeOut(500, Blink);
}



void Blink() 
{
  digitalWrite(led, !digitalRead(led)); // toggle the LED
  timeout0.timeOut(500, Blink);
}



void loop() {
  // put your main code here, to run repeatedly:
  timeout0.handler();
}
