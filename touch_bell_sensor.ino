void setup()
{
  pinMode(12, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int c = digitalRead(12);
  if (c == 1)
  {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  }
  else
  {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
}
