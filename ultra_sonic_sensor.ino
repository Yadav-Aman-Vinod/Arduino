const int E = 10;
const int T = 9;
 float t,ef,d ;

void setup() {
pinMode(E,INPUT);
pinMode(T,OUTPUT);

Serial.begin (9600);
}

void loop() {
  
digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
d = 0.0348*ef ;
Serial.println(d);
delay(100); 
}
