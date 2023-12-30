void setup() {
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);  
}

void loop() {
  if(digitalRead(11)==true)
   {
    Serial.print("D");
    delay(450);
   }
    if(digitalRead(11)==true)
   {
    Serial.print("b");
    delay(450);
   }
   else if(digitalRead(10)==true)
   {
    Serial.print("c");
    delay(450);
   }
   if(digitalRead(9)==true)
   {
    Serial.print("d");
    delay(450);
   }
   else if(digitalRead(8)==true)
   {
    Serial.print("e");
    delay(450);
   }
   else if(digitalRead(7)==true)
   {
    Serial.print("f");
    delay(450);
   }
   else if(digitalRead(6)==true)
   {
    Serial.print("g");
    delay(450);
   }
}
