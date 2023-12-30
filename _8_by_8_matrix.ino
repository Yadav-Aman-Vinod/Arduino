#include <LedControl.h>
LedControl aman = LedControl(12, 11, 10, 1);
int i;
void setup() {
  aman.shutdown(0, false);
  aman.setIntensity(0, 7);

}
void A(int i) {
   //aman.setRow(0,  i - 7, B00000000);
  //aman.setRow(0,  i - 6, B00000000);
  aman.setRow(0,  i - 5, B01110000);
  aman.setRow(0,  i - 4, B10001000);
  aman.setRow(0,  i - 3, B11111000);
  aman.setRow(0,  i - 2, B10001000);
  aman.setRow(0,  i - 1, B10001000);
  aman.setRow(0,  i  , B00000000);
}
void M() {
  aman.setRow(0, 0, B10001000);
  aman.setRow(0, 1, B11011000);
  aman.setRow(0, 2, B10101000);
  aman.setRow(0, 3, B10001000);
  aman.setRow(0, 4, B10001000);
  aman.setRow(0, 5, B00000000);
  aman.setRow(0, 6, B00000000);
  aman.setRow(0, 7, B00000000);
}
void N(int i) {
  //aman.setRow(0,  i - 7, B00000000);
  //aman.setRow(0,  i - 6, B00000000);
  aman.setRow(0,  i - 5, B10001000);
  aman.setRow(0,  i - 4, B11001000);
  aman.setRow(0,  i - 3, B10101000);
  aman.setRow(0,  i - 2, B10011000);
  aman.setRow(0,  i - 1, B10001000);
  aman.setRow(0,  i  , B00000000);
}
void loop() {

  for (i = 7; i >= 0; i--)
  {
    int j= i-7;
    A(j);
    delay(100);
    N(i);
    delay(100);
  }

}
