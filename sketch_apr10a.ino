void setup() {
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
digitalWrite(12,1);
digitalWrite(11,0);
delay(1000);
digitalWrite(12,1);
digitalWrite(11,0);
delay(1000);
}
