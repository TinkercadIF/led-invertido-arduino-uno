int pinLedGND = 13 ;
int pinLedV = 12 ;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  digitalWrite(pinLedGND, HIGH);
  delay(1000); 
  digitalWrite(pinLedGND, LOW);
  delay(500); 
    digitalWrite(pinLedV, LOW);
  delay(1000); 
  digitalWrite(pinLedV, HIGH);
  delay(500); 
}
