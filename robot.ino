void setup() {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
{ digitalWrite(12,0);
 digitalWrite(11,0);
 digitalWrite(10,0);
 digitalWrite(9,0);}
 delay(2000);
 { digitalWrite(12,1);
 digitalWrite(11,0);
 digitalWrite(10,1);
 digitalWrite(9,0);}
 delay(3900);
 { digitalWrite(12,0);
 digitalWrite(11,0);
 digitalWrite(10,0);
 digitalWrite(9,0);}
 delay(97);
 { digitalWrite(12,0);
 digitalWrite(11,0);
 digitalWrite(10,1);
 digitalWrite(9,0);}
 delay(920);
 { digitalWrite(12,1);
 digitalWrite(11,0);
 digitalWrite(10,1);
 digitalWrite(9,0);}
 delay(1500); 
 while(true)
 { digitalWrite(12,00);
 digitalWrite(11,0);
 digitalWrite(10,0);
 digitalWrite(9,0);}
 delay(2000);   
}
