// C++ code
//
void setup()
{
  pinMode(13, OUTPUT); // definie pin
}

void loop()
{
  digitalWrite(13,HIGH); // HIGH= Ligado(5v) - LOW= Dersligado (0v)
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
}