//   fade in n fade out program


void setup() {
pinMode(12,OUTPUT);    //initializing pin 12 where led is connected
}

void loop() 
{
for(int i=2,j=22;i<=3000,j>=0;i++,j--)//putting conditions and initializing for loop. syntax: for(initialization;test condition;increment or decrement)
{
    digitalWrite(12,LOW);//fade in ..... T off decreases as time goes on
  delay(j);
  digitalWrite(12,HIGH);
  delay(i);
}
digitalWrite(12,HIGH);// to keep the led on
 delay(2000);
 for(int i=2,j=22;i<=30000,j>=0;i++,j--)//putting conditions and initializing for loop. syntax: for(initialization;test condition;increment or decrement)
{
    digitalWrite(12,LOW);//fade out......T off increases as the time goes on
  delay(i);
  digitalWrite(12,HIGH);
  delay(j);
}
digitalWrite(12,0);//to keep the led off
delay(1000);
}
