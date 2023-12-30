void setup() {
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);

}

void loop() {

if(digitalRead(8)==true)
{
  digitalWrite(12,1);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,0);
}
if(digitalRead(7)==true)
{
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(9,1);
}
if(digitalRead(6)==true)
{
  digitalWrite(12,1);
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(9,0);
}
if(digitalRead(5)==true)
{
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,0);
  
}
else{
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(9,0);
}
}
