void setup()
{
 pinMode(10,INPUT);
 pinMode(12,OUTPUT);
}

void loop() {
if(digitalRead(10)==true)         // 1st button press
{
while(true)
{
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(12,0);
  delay(1000);

  if(digitalRead(10)==true)         //2nd button press
  
  {
    while(true)
{
  digitalWrite(12,1);
  delay(800);
  digitalWrite(12,0);
  delay(800);

  if(digitalRead(10)==true)         //3rd button press
  {
    while(true)
{
  digitalWrite(12,1);
  delay(500);
  digitalWrite(12,0);
  delay(500);

  if(digitalRead(10)==true)         //4th button press
  {
    while(true)
{
  digitalWrite(12,1);
  delay(100);
  digitalWrite(12,0);
  delay(100);

  if(digitalRead(10)==true)       //5th button press
  {
    while(true)
{
  digitalWrite(12,1);
  delay(50);
    
}
  
  }
}
 }
}
  
  }
}
   
  }
}
}



else
{
digitalWrite(12,0);
delay(1000);
}
}
