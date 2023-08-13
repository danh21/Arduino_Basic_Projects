int ledPin = 13;
int ledState = LOW;

unsigned long previousMillis = 0;
const long interval = 500;



void setup() 
{
  pinMode(ledPin, OUTPUT);
}



void loop() 
{
  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis >= interval) 
  {
    previousMillis = currentMillis;
    
    ledState = !ledState;   
    digitalWrite(ledPin, ledState);
  }
}
