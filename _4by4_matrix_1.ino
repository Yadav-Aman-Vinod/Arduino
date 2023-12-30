int r1= 3,r2=4,r3=5,r4=6,c1=7,c2=8,c3=9,c4=10;
void setup() {
  pinMode(r1,OUTPUT); 
  pinMode(r2,OUTPUT);
   pinMode(r3,OUTPUT);
    pinMode(r4,OUTPUT);
     pinMode(c1,OUTPUT);
      pinMode(c2,OUTPUT);
       pinMode(c3,OUTPUT);
        pinMode(c4,OUTPUT);
}

void loop() {
  digitalWrite(r3,1);
  digitalWrite(c3,0);

}
