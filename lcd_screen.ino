#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

void setup() {
  lcd.createChar(0, heart);
  lcd.begin(16, 2);
  lcd.write(byte(0));
}

void loop()
{
lcd.setCursor(4, 1);
  // draw the little man, arms down:
  lcd.write(1);
}
