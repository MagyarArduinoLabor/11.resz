#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


        byte newChar[8] = {
       B00000,
        B11111,
        B00001,
        B11111,
        B00000,
        B11111,
        B00100,
        B11111
};

void setup() {
    lcd.begin(16, 2);
    lcd.clear();
    lcd.createChar(1, newChar);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.write(1);

  
  }
