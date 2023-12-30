void setup() {
  
pinMode(A2,INPUT);  
pinMode(A1,INPUT);
Serial.begin(9600);    
pinMode(12,OUTPUT);  
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);  
pinMode(9,OUTPUT);
}

void loop() {

  
int a=analogRead(A2);     
a=constrain(a,73,391);   
int b=map(a,73,391,0,100); 
Serial.print("displaying b= ");
Serial.println(b);

int c=analogRead(A1);   
c=constrain(c,45,665); 
int d=map(c,45,665,0,100);  
Serial.print("displaying d= "); 
Serial.println(d); 

if (b>=85)
{
digitalWrite(12,0);
digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(9,0);
}

else if (d>=85)
{
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,1);
}

else if (d>=85 && b>85)
{
digitalWrite(12,1);
digitalWrite(11,0);
digitalWrite(10,1);
digitalWrite(9,0);
}
else
{
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
}

}
