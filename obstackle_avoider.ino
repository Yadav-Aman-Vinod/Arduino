void setup() {
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {

  int c = digitalRead(5);
  int d = digitalRead(6);
  if (c == 1)
  {
    digitalWrite(10, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 1);
    digitalWrite(7, 0);
    delay(400);
  }


  if (c == 1 && d == 1)
  {
    digitalWrite(10, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(7, 0);

  }

  else if (d == 1)
  {
    digitalWrite(10, 0);
    digitalWrite(9, 1);
    digitalWrite(8, 0);
    digitalWrite(7, 0);
    delay(400);
  }

  else
  {
    digitalWrite(10, 0);
    digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(7, 0);


  }


}
