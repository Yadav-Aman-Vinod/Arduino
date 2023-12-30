
void setup() {
 pinMode(10,INPUT);
 pinMode(8,OUTPUT);

}

void loop() {
if(digitalRead(10)==true)

digitalWrite(8,0);

else

digitalWrite(8,1);

}
