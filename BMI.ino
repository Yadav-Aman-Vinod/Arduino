

int aman = 1;
int A, W, H;
int om = 0; float BMI;
#include <Rotary.h>


Rotary RotE = Rotary(2, 3);             // WE ARE DEFINING AT WHAT PIN NOS WILL WE CONNECT THE ENCODER TERMINALS

int count;
int EncButton = 4;
unsigned char EncResult;
int addr = 0 ;
int SavedValue;


void setup() {
  pinMode(EncButton, INPUT);
  Serial.begin(9600);

  Serial.println("Hi... Welcome to BMI CALCULATOR... ");
  delay(1000);
  Serial.println("Let's Get Started... ");
  delay(1000);
  Serial.println("PLEASE ENTER YOUR Age:");
 // Serial.print("/t");
}


void loop() {
  CheckRotation();
  EncButtonCheck();
  bmi();
}


void CheckRotation() {
  EncResult = RotE.process();
  if (EncResult) {
    // Serial.println(result == DIR_CW ? "Right" : "Left");
    if (EncResult == DIR_CW)                                  // IF ROTATION IS CLOCKWISE THEN INCREASE VALUE
    {
      count++;
      if (count >= 200) {
        count = 200;
      }
      Serial.println(count);
    }
    else if (EncResult == DIR_CCW)                          // IF ROTATION IS COUNTER-CLOCKWISE THEN DECREASE VALUE
    {
      count--;
      if (count <= 0) {
        count = 0;
      }
      Serial.println(count);
    }
    else {}
  }
}

void EncButtonCheck()
{
  if (digitalRead(EncButton) == HIGH)
  {
    while (digitalRead(EncButton) == HIGH) {}
    Serial.println("PRESS THE BUTTON ; ONE TIME FOR WEIGHTS (KG); SECOND TIME FOR HEIGHT (CM)");
    delay(2000);
    if (aman == 1)
    {
      A = count;
      aman++;
      Serial.println(A);

    }
    else if (aman == 2)
    {
      W = count;
      aman++;
      Serial.println(W);

    }
    else if (aman == 3)
    {
      H = count;
      aman = 1;
      Serial.println(H);

      BMI = (W * 100 * 100) / (H * H);
    Serial.print("BMI = ");
    Serial.println(BMI);
    delay(1000);
    om = 1;
    }
  }
  else {}
  if (om == 0)

  {
    
  }
}


void bmi ()
{
  
}

