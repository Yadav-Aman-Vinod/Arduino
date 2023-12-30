void setup() {
 
pinMode(A0,INPUT);     
Serial.begin(9600);    
pinMode(13,OUTPUT); 
pinMode(8,OUTPUT); 
}

void loop() {
int a=analogRead(A0);    
//a=constrain(a,500,800);   
int b=map(a,85,185,300,400);     
Serial.println(b);
Serial.print("temperature =  ");
                  
digitalWrite(13,HIGH);       
delayMicroseconds(1);
digitalWrite(13,LOW);         
delayMicroseconds(1);
for (int i=1; i<=b;i++)      
{
  digitalWrite(8,HIGH);       
  delayMicroseconds(1);                   
  digitalWrite(8,LOW);          
  delayMicroseconds(1);                   
}
delay(1000);
}

