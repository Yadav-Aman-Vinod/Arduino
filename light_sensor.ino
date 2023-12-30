void setup() {
  
pinMode(A0,INPUT);       
Serial.begin(9600);     
pinMode(10,OUTPUT);     
}

void loop() {
int a=analogRead(A0);  
a=constrain(a,600,800);   
int b=map(a,600,800,0,100);     
Serial.println(b);    
if (b>=30)
{
digitalWrite(10,0);
delay(50);
}
else{
digitalWrite(10,1);
delay(5000);
}
}
