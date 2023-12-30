#include <LiquidCrystal.h>

LiquidCrystal aman(11,10, 5, 4, 3, 2);

byte man[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010,
  0b10001,
};
byte mans[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b01010,
  0b00100,
  0b01110,
  0b10101,

};
byte manss[8] = {
  0b00100,
  0b01010,
  0b10001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
};
byte mansss [8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b01010,
  0b10001,
};
byte tree [8] = {
  0b00100,
  0b00100,
  0b10101,
  0b10101,
  0b11111,
  0b00100,
  0b00100,
  0b11111,
};

void setup() {
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  aman.createChar(0, man);
  aman.createChar(1, mans);
  aman.createChar(2, manss);
  aman.createChar(3, mansss);
  aman.createChar(4, tree);

  aman.begin(16, 2);

  aman.clear();
  aman.setCursor(2, 0);
  aman.print("JUMP OR FALL");
  aman.setCursor(1, 1);
  aman.write(byte(0));
  aman.setCursor(14, 1);
  aman.write(byte(4));
  delay(4000);

  aman.clear();
  aman.setCursor(2, 0);
  aman.print("JUMP OR DUMP");
  aman.setCursor(1, 1);
  aman.write(byte(0));
  aman.setCursor(14, 1);
  aman.write(byte(4));
  delay(1000);
  aman.setCursor(2, 1);
  aman.print("PRESS  START");

}


void jump ()
{

  {
    aman.clear();
    aman.setCursor(1, 1);
    aman.write(byte(0));

  }

  {
    aman.clear();
    aman.setCursor(1, 0);
    aman.write(byte(3));

  }

  {
    aman.clear();
    aman.setCursor(1, 1);
    aman.write(byte(0));

  }
}

void scroll ()
{
  for (int i = 15; i > -1; i--)
  {
    aman.clear();                      // MAN DOWN
    aman.setCursor(1, 1);
    aman.write(byte(0));

    if (digitalRead(9) == true)
    {
      while (digitalRead(9) == true) {}

      aman.clear();                     // MAN UP
      aman.setCursor(1, 0);
      aman.write(byte(3));


      aman.setCursor(i, 1);
      aman.write(byte(4));              // TREE INCREMENT
      delay(200);
    }
    else
    {
      aman.setCursor(i, 1);
      aman.write(byte(4));               // TREE INCREMENT
      delay(200);
    }
  }
}

void loop()
{

  if (digitalRead(9) == true)
  {
    aman.clear();
    aman.setCursor(0, 1);
    aman.print("loading.........");
    delay(4000);

    while (1)
    {
      scroll();
    }
  }
}







