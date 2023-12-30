char input;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);

}

void loop() {
  if (Serial.available() > 0);
  input = Serial.read();
  if (input == '1')
  {

    digitalWrite(12, 1);
    delay(1000);

  }
  if (input == '2')
  {

    digitalWrite(12, 0);
delay(100);
  }

 
  
}
