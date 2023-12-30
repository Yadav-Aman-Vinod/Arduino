void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);       //data of ldr resistance converted in term of voltage 
Serial.begin(9600);     //this will begin communication between arduino n pc at a speed of 9600 bits per sec
pinMode(10,OUTPUT);     //
}

void loop() {
  // put your main code here, to run repeatedly:
int a=analogRead(7);     //the ADC converted value is stored in variable a
a=constrain(a,600,800);   //the mini n max value of a cannot go beyond 800 n less than 600
int b=map(a,600,800,0,100);     //converting the mini n max value in terms of 0 n 100......syn map(varible,mini , max , new mini , new max )
Serial.println(b);    //print value of b on serial moniter
if (b>=30)
{
digitalWrite(11,1);
delay(1000);
}
else
digitalWrite(11,0);
delay(500);
}
