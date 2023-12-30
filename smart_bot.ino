char input;
int E = 7;
int T = 8;
double t, ef, d ;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(E, INPUT);
  pinMode(T, OUTPUT);
}

void loop() {
  digitalWrite(T, 0);
  delay(1);
  digitalWrite(T, 1);
  delayMicroseconds(10);
  digitalWrite(T, 0);

  t = pulseIn(E, 1);
  ef = t / 2;
  d = 0.0348 * ef - 0.92 ;
  Serial.println(d);
  delay(100);


  if (Serial.available() > 0);
  input = Serial.read();
  if (input == '2')                           //straight
  {
    digitalWrite(12, 1);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
    digitalWrite(9, 1);
    delay(100);
  }
  else if (input == '8')                      //back
  {
    digitalWrite(12, 0);
    digitalWrite(11, 1);
    digitalWrite(10, 1);
    digitalWrite(9, 0);
  }
  else if (input == '4')                      //left
  {
    digitalWrite(12, 1);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
    digitalWrite(9, 0);
  }
  else if (input == '6')                     //right
  {
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
    digitalWrite(9, 1);
  }
  else if (d <= 20)   {                   // emotion

    digitalWrite(12, 0);
    digitalWrite(11, 1);
    digitalWrite(10, 1);
    digitalWrite(9, 0);
    delay(100);

  }
  else
  {
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 0);
    digitalWrite(9, 0);
  }
}
