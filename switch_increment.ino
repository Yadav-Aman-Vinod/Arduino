int a = 0;
int b = 0;
int menu = 7;
int A = 8;
int back = 6;                                //to describe variable
int ap = 12;
int am = 11;
int bp = 10;
int bm = 9;
int x = 0;          //phsical back counter
int y = 0;  
void setup() {
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
}

void loop()
{
  x=0;                // to define x=0 again
  if (digitalRead(menu) == true)
  {
    while (digitalRead(menu) == true) {}
    Serial.println("hello");                               //starter
    delay(1000);
    Serial.println("pls ek value doo");

    while (x % 2 == 0)
    { y=0;
      if (digitalRead(back) == true)
       { 
        while (digitalRead(back) == true) {}
        x = x + 1;
        Serial.println("back1 is pressed");}

      if (digitalRead(A) == true)
        // while (digitalRead(A) == true) {}
      {
        Serial.println("yo");
        delay(500);
        
        while (y % 2 == 0)
        {
          if (digitalRead(back) == true)
            {
              while (digitalRead(back) == true) {}
              y = y + 1;
            Serial.println("back2 is pressed");}
            
          if (digitalRead(ap) == true)
          {
            while (digitalRead(ap) == true) {}
            Serial.print(" number = ");
            Serial.println(a);
            a = a + 1;
            delay(380);                                       //button 1
          }
          if (digitalRead(am) == true)
          {
            while (digitalRead(am) == true) {}
            Serial.print(" number = ");
            Serial.println(a);
            a = a - 1;
            delay(380);
          }
        }
      }


    }
  }
}
