#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  lcd.init();
}


void loop()
{
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("HELLO");
  delay(1500);
  lcd.clear();
    
  lcd.setCursor(0,0);
  lcd.print("World");
  delay(1500);
  lcd.clear();
}
