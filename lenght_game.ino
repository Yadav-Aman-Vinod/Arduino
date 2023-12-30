
 int Echo = 9;
 int Trig = 8;
 int c=3,k;
 float t,ef,d ;

void setup() {

  pinMode(Echo,INPUT);
  pinMode(Trig,OUTPUT);
  pinMode(7,INPUT);
    
    Serial.begin(9600);
  
}


void loop() {

  if (digitalRead(7)== true){
  while (true){
  digitalWrite(Trig,0);
  delay(1);
  digitalWrite(Trig,1);
  delayMicroseconds(10);
  digitalWrite(Trig,0);

t = pulseIn(Echo,1);
ef =t/2;
d = 0.0348*ef-0.92 ;


if(d>c){
  
Serial.println(d);

delay(500);
}
  }

}
}
