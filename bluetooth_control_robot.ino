char input;
int E = 12;
int T = 8;
float t, ef, d ;
void setup() {
  pinMode(E, INPUT);
  pinMode(T, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
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
  delay(1000);
  


  if (Serial.available() > 0);
  input = Serial.read();

  if (input == '1')
  {
    analogWrite(11, 100);
    analogWrite(10, 0);
    analogWrite(9, 100);
    analogWrite(6, 0);
    delay(100);
  }
  else if (input == '2')
  {
    analogWrite(11, 0);
    analogWrite(10, 100);
    analogWrite(9, 0);
    analogWrite(6, 100);
    delay(100);
  }
  else if (input == '3')
  {
    analogWrite(11, 100);
    analogWrite(10, 0);
    analogWrite(9, 0);
    analogWrite(6, 0);
    delay(100);
  }
  else if (input == '4')
  {
    analogWrite(11, 0);
    analogWrite(10, 0);
    analogWrite(9, 100);
    analogWrite(6, 0);
    delay(100);
  }

  else if (d < 10)
  {
    digitalWrite(7, 1);
    digitalWrite(7, 0);
    delay(1000);
  }

  else
  {
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
  }

}
