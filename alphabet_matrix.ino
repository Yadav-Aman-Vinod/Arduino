// the nights
#include <LedControl.h>
LedControl aman = LedControl(12, 11, 10, 1);
int i;
void setup() {
  aman.shutdown(0, false);
  aman.setIntensity(0, 7);
 
}
void A(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B11111000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0,  i, B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void B(int i) {
  aman.setRow(0, i - 5 , B11110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B11110000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B11110000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void C(int i) {
  aman.setRow(0, i - 5 , B01111000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B10000000);
  aman.setRow(0, i - 2 , B10000000);
  aman.setRow(0, i - 1 , B01111000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void D(int i) {
  aman.setRow(0, i - 5,  B11110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10001000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B11110000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  // aman.setRow(0, 7 , B00000000);
}
void E(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B11100000);
  aman.setRow(0, i - 2 , B10000000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void hi(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B11100000);
  aman.setRow(0, i - 2 , B10000000);
  aman.setRow(0, i - 1 , B10000000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void G(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B10111000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B01110000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void H(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B11111000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  ///  aman.setRow(0, 6 , B00000000);
  // aman.setRow(0, 7 , B00000000);
}
void I(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00100000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B00100000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  /// aman.setRow(0, 6 , B00000000);
  ////aman.setRow(0, 7 , B00000000);
}
void J(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00100000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B10100000);
  aman.setRow(0, i - 1 , B11100000);
  aman.setRow(0, i , B00000000);
  //////  aman.setRow(0, 6 , B00000000);
  //  aman.setRow(0, 7 , B00000000);
}
void K(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B10010000);
  aman.setRow(0, i - 3 , B11100000);
  aman.setRow(0, i - 2 , B10010000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  ////// aman.setRow(0, 6 , B00000000);
  ///// aman.setRow(0, 7 , B00000000);
}
void L(int i) {
  aman.setRow(0, i - 5 , B10000000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B10000000);
  aman.setRow(0, i - 2 , B10000000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  // aman.setRow(0, 7 , B00000000);
}
void M(int i) {
  aman.setRow(0, i - 5 , B11011000);
  aman.setRow(0, i - 4 , B10101000);
  aman.setRow(0, i - 3 , B10101000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void N(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B11001000);
  aman.setRow(0, i - 3 , B10101000);
  aman.setRow(0, i - 2 , B10011000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void O(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10001000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B01110000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void P(int i) {
  aman.setRow(0, i - 5 , B11110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B11110000);
  aman.setRow(0, i - 2 , B10000000);
  aman.setRow(0, i - 1 , B10000000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void Q(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10011000);
  aman.setRow(0, i - 2 , B01111000);
  aman.setRow(0, i - 1 , B00000100);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void R(int i) {
  aman.setRow(0, i - 5 , B11110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B11110000);
  aman.setRow(0, i - 2 , B10010000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void S(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B11111000);
  aman.setRow(0, i - 2 , B00001000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void T(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00100000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B00100000);
  aman.setRow(0, i - 1 , B00100000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void U(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10001000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B01110000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void V(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10001000);
  aman.setRow(0, i - 2 , B01010000);
  aman.setRow(0, i - 1 , B00100000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  // aman.setRow(0, 7 , B00000000);
}
void W( int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B10101000);
  aman.setRow(0, i - 2 , B10101000);
  aman.setRow(0, i - 1 , B01010000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void X(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B01010000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B01010000);
  aman.setRow(0, i - 1 , B10001000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void Y(int i) {
  aman.setRow(0, i - 5 , B10001000);
  aman.setRow(0, i - 4 , B01010000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B00100000);
  aman.setRow(0, i - 1 , B00100000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void Z(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00010000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B01000000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  ////aman.setRow(0, 6 , B00000000);
  //////aman.setRow(0, 7 , B00000000);
}
void zero(int i) {
  aman.setRow(0, i - 5 , B01100000);
  aman.setRow(0, i - 4 , B10010000);
  aman.setRow(0, i - 3 , B10010000);
  aman.setRow(0, i - 2 , B10010000);
  aman.setRow(0, i - 1 , B01100000);
  aman.setRow(0, i , B00000000);
  //////aman.setRow(0, 6 , B00000000);
  ///////////aman.setRow(0, 7 , B00000000);
}
void one(int i) {
  aman.setRow(0, i - 5 , B00100000);
  aman.setRow(0, i - 4 , B01100000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B00100000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  /////// aman.setRow(0, 6 , B00000000);
  /////////aman.setRow(0, 7 , B00000000);
}
void two(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B00010000);
  aman.setRow(0, i - 2 , B00100000);
  aman.setRow(0, i - 1 , B11111000);
  aman.setRow(0, i , B00000000);
  ///aman.setRow(0, 6 , B00000000);
  ///aman.setRow(0, 7 , B00000000);
}
void three(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00010000);
  aman.setRow(0, i - 3 , B01110000);
  aman.setRow(0, i - 2 , B00001000);
  aman.setRow(0, i - 1 , B11110000);
  aman.setRow(0, i , B00000000);
  ////aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void four(int i) {
  aman.setRow(0, i - 5 , B10000000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B10100000);
  aman.setRow(0, i - 2 , B11111000);
  aman.setRow(0, i - 1 , B00100000);
  aman.setRow(0, i , B00000000);
  ///aman.setRow(0, 6 , B00000000);
  ///aman.setRow(0, 7 , B00000000);
}
void five(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B11110000);
  aman.setRow(0, i - 2 , B00001000);
  aman.setRow(0, i - 1 , B11110000);
  aman.setRow(0, i , B00000000);
  ///aman.setRow(0, 6 , B00000000);
  ///aman.setRow(0, 7 , B00000000);
}
void six(int i) {
  aman.setRow(0, i - 5 , B11110000);
  aman.setRow(0, i - 4 , B10000000);
  aman.setRow(0, i - 3 , B11110000);
  aman.setRow(0, i - 2 , B10010000);
  aman.setRow(0, i - 1 , B11110000);
  aman.setRow(0, i , B00000000);
  // aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void seven(int i) {
  aman.setRow(0, i - 5 , B11111000);
  aman.setRow(0, i - 4 , B00010000);
  aman.setRow(0, i - 3 , B00100000);
  aman.setRow(0, i - 2 , B01000000);
  aman.setRow(0, i - 1 , B10000000);
  aman.setRow(0, i , B00000000);
  ///aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void eight(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B01110000);
  aman.setRow(0, i - 2 , B10001000);
  aman.setRow(0, i - 1 , B01110000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void nine(int i) {
  aman.setRow(0, i - 5 , B01110000);
  aman.setRow(0, i - 4 , B10001000);
  aman.setRow(0, i - 3 , B01111000);
  aman.setRow(0, i - 2 , B00001000);
  aman.setRow(0, i - 1 , B00001000);
  aman.setRow(0, i , B00000000);
  //aman.setRow(0, 6 , B00000000);
  //aman.setRow(0, 7 , B00000000);
}
void loop() {

  for (i = 7; i >= 0; i--)
  {
    C(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    D(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    E(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    H(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {

    G(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {

    H(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    I(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    J(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    K(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    L(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    M(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    N(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    O(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    P(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    Q(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    R(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    S(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    T(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    U(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    V(i);
    delay(100);
  }

  for (i = 7; i >= 0; i--)
  {
    W(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    X(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    Y(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    Z(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    zero(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    one(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    two(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    three(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    four(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    five(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    six(i);
    delay(100);
  } for (i = 7; i >= 0; i--)
  {
    seven(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    eight(i);
    delay(100);
  }
  for (i = 7; i >= 0; i--)
  {
    nine(i);
    delay(100);
  }
}
