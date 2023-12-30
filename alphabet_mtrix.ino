#include <LedControl.h>
LedControl aman = LedControl(11, 10, 9, 1);
void setup() {
  aman.shutdown(0, false);
  aman.setIntensity(0, 7);

}
void A() {
  aman.setRow(0, 0 , B01110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B11111000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void B() {
  aman.setRow(0, 0 , B11110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B11111000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void C() {
  aman.setRow(0, 0 , B01111000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B10000000);
  aman.setRow(0, 3 , B10000000);
  aman.setRow(0, 4 , B01111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void D() {
  aman.setRow(0, 0 , B11110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10001000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B11110000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void E() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B11100000);
  aman.setRow(0, 3 , B10000000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
/*void F() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B11100000);
  aman.setRow(0, 3 , B10000000);
  aman.setRow(0, 4 , B10000000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}*/
void G() {
  aman.setRow(0, 0 , B01110000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B10111000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B01110000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void H() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B11111000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void I() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B00100000);
  aman.setRow(0, 2 , B00100000);
  aman.setRow(0, 3 , B00100000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void J() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B00100000);
  aman.setRow(0, 2 , B00100000);
  aman.setRow(0, 3 , B10100000);
  aman.setRow(0, 4 , B11100000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void K() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B11010000);
  aman.setRow(0, 2 , B10100000);
  aman.setRow(0, 3 , B10010000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void L() {
  aman.setRow(0, 0 , B10000000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B10000000);
  aman.setRow(0, 3 , B10000000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void M() {
  aman.setRow(0, 0 , B11011000);
  aman.setRow(0, 1 , B10101000);
  aman.setRow(0, 2 , B10101000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void N() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B11001000);
  aman.setRow(0, 2 , B10101000);
  aman.setRow(0, 3 , B10011000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void O() {
  aman.setRow(0, 0 , B01110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10001000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B01110000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void P() {
  aman.setRow(0, 0 , B11110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B11100000);
  aman.setRow(0, 3 , B10000000);
  aman.setRow(0, 4 , B10000000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void Q() {
  aman.setRow(0, 0 , B11100000);
  aman.setRow(0, 1 , B10100000);
  aman.setRow(0, 2 , B11101000);
  aman.setRow(0, 3 , B00110000);
  aman.setRow(0, 4 , B00100000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void R() {
  aman.setRow(0, 0 , B11110000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10100000);
  aman.setRow(0, 3 , B10010000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void S() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B10000000);
  aman.setRow(0, 2 , B11111000);
  aman.setRow(0, 3 , B00001000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void U() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10001000);
  aman.setRow(0, 3 , B10001000);
  aman.setRow(0, 4 , B01110000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void V() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10001000);
  aman.setRow(0, 3 , B01010000);
  aman.setRow(0, 4 , B00100000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void W() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B10001000);
  aman.setRow(0, 2 , B10101000);
  aman.setRow(0, 3 , B10101000);
  aman.setRow(0, 4 , B01010000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void X() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B01010000);
  aman.setRow(0, 2 , B00100000);
  aman.setRow(0, 3 , B01010000);
  aman.setRow(0, 4 , B10001000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void Y() {
  aman.setRow(0, 0 , B10001000);
  aman.setRow(0, 1 , B01010000);
  aman.setRow(0, 2 , B00100000);
  aman.setRow(0, 3 , B00100000);
  aman.setRow(0, 4 , B00100000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void Z() {
  aman.setRow(0, 0 , B11111000);
  aman.setRow(0, 1 , B00010000);
  aman.setRow(0, 2 , B00100000);
  aman.setRow(0, 3 , B01000000);
  aman.setRow(0, 4 , B11111000);
  aman.setRow(0, 5 , B00000000);
  aman.setRow(0, 6 , B00000000);
  aman.setRow(0, 7 , B00000000);
}
void loop() {


}
