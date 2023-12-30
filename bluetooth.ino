int a = 12, b = 10, c = 9;
char input;

void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  Serial.println("Start");
}

void loop() {
  if (Serial.available() > 0);
  input = Serial.read();
  if (input == '1')
  {
    Serial.println("on");                      //blue
    analogWrite(b, 255);

  }
  else if (input == '2')
  {
    Serial.println("on");
    analogWrite(a, 255);                       //green
  }
  else if (input == '3')
  {
    Serial.println("on");

    analogWrite(c, 255);                       //red
  }
  else if (input == '4')
  {
    Serial.println("on");
    analogWrite(b, 100);
    analogWrite(a, 255);                       // light blue
  }
  else if (input == '5')
  {
    Serial.println("on");
    analogWrite(c, 255);
    analogWrite(a, 255);                       // yellow
  }
   else if (input == '6')
  {
    Serial.println("on");
    analogWrite(c, 255);
    analogWrite(b, 255);                       // pink
  }
   else if (input == '7')
  {
    Serial.println("on");
    for (a = 0; a <= 180; a += 1){
     //while (digitalRead(a) == true) {} 
   digitalWrite(a, 1);    
   digitalWrite(a,0);
    }   
  }
  else if (input == '0')
  {
    Serial.println("off");
    analogWrite(b, 0);
    analogWrite(c, 0);
    analogWrite(a, 0);

  }
  else
  {
    Serial.println("no input");
    Serial.println(input);
  }
}
