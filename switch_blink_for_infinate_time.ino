void setup() {
pinMode(12,INPUT);      // pin connection
pinMode(10,OUTPUT);
}

void loop() {
 //if(digitalRead(12)==true)    // to check condition
//{digitalWrite(10,1);         // to on led
/*{
for(int i=100;i<=300;i++)    // to blink led at particular time 
{digitalWrite(10,1);
delay(100);
digitalWrite(10,0);
delay(100);
}*/

while(true)     //to blink led for infinate time
{
  digitalWrite(10,1);
  delay(100);
  digitalWrite(10,0);
  delay(100);
}
//}
//else      // to check condition
//digitalWrite(10,0);    // to on led

}
