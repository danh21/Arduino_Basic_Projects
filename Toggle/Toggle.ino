int ledPin = 13;                 
int ledState = LOW;

int btnPin = 3;                  



void Blink()
{
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  Serial.println("Pressed, value = " + String(ledState));
}



void setup()
{
  pinMode(ledPin, OUTPUT);      
  pinMode(btnPin, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(btnPin), Blink, FALLING); 
  Serial.begin(9600);
}



void loop()
{

}
