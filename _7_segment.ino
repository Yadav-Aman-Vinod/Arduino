void setup() {
 
pinMode(A0,INPUT);     // ldr 
Serial.begin(9600);    //this will begin communication between arduino n pc at a speed of 9600 bits per sec
pinMode(13,OUTPUT);  //reset pin
pinMode(8,OUTPUT); // clock pulse
}

void loop() {
int a=analogRead(A0);    //the ADC converted value is stored in variable a
a=constrain(a,600,800);   //the mini n max value of a cannot go beyond 800 n less than 600  
int b=map(a,600,800,0,100);     //converting the mini n max value in terms of 0 n 100......syn map(varible,mini , max , new mini , new max )
Serial.println(b);              //print value of b on serial moniter
delay(100);
for (int i=1; i<=(b/10);i++)       //to loop the clock pulse according to moniter
{
  digitalWrite(8,HIGH);       //clockpulse on
  delay(1);                   //''
  digitalWrite(8,0);          //clockpulse off
  delay(1);                   //''
}
delay(1000);                  //time for mapped values
digitalWrite(13,HIGH);       //reset on
delay(1);
digitalWrite(13,0);         //reset off
delay(1);
}

