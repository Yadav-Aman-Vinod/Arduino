void setup()
{
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
/*{
  analogWrite(10, 0);
  analogWrite(9, 0);
  analogWrite(8, 0);
  analogWrite(7, 0);
  delay(1500);
}*/
  int c = digitalRead(12);
  int d = digitalRead(11);

  if (c == 1 && d == 1)
  {
    analogWrite(10, 150);
    analogWrite(9, 0);
    analogWrite(6, 0);
    analogWrite(5, 150);
  }

  else if (c == 0 && d == 0)
  {
    analogWrite(10, 0);
    analogWrite(9, 0);
    analogWrite(6, 0);
    analogWrite(5, 0);
  }

  else if (c == 1 && d == 0)
  {
    analogWrite(10, 150);
    analogWrite(9, 0);
    analogWrite(6, 0);
    analogWrite(5, 0);
    delay(150);
  }

  else if (c == 0 && d == 1)
  {
    analogWrite(10, 0);
    analogWrite(9, 0);
    analogWrite(8, 0);
    analogWrite(7, 150);
    delay(150);
  }

  else
  {
    analogWrite(10, 0);
    analogWrite(9, 0);
    analogWrite(6, 0);
    analogWrite(5, 0);

  }

}
