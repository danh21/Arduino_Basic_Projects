#define led1 13



void setup() 
{
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
}



void Blink(int led, int ms) 
{
  digitalWrite(led, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(ms);                  // wait for a ms
  digitalWrite(led, LOW);     // turn the LED off by making the voltage LOW
  delay(ms);                  // wait for a ms
}



void loop() 
{
  // put your main code here, to run repeatedly:
  Blink(led1, 500);
}
