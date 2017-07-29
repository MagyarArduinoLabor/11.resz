#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() 
{
  lcd.clear();
  lcd.print("Hello World");

  delay(2500);

  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("kurzor beall.");

  delay(2500);

  lcd.clear();
  lcd.blink();
  lcd.print("kurzor villog");
 

  delay(2500);
  
  lcd.noBlink();
  lcd.clear();
  lcd.cursor();
  lcd.print("Alulvon. kurzor");
  

  delay(2500);

  lcd.clear();
  lcd.noCursor();
  lcd.print("nincs kurzor");
  

  delay(2500);
}
