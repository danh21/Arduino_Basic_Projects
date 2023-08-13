int ledPin = 13;                 
int ledState = LOW;

int btnPin = 0;                  



void blink()
{
  ledState = !ledState;
  digitalWrite(ledPin, ledState); 
  Serial.println("Pressed, value = " + String(ledState));
}



bool isPressed()
{
  return (digitalRead(btnPin) == 0);
}



void setup()
{
  pinMode(ledPin, OUTPUT);       
  pinMode(btnPin, INPUT_PULLUP); 
  Serial.begin(9600);
}



void loop()
{
  if (isPressed()) 
  {
    while (isPressed());  // debounce
    blink();
  }
}
