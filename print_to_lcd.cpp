#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 20 chars and 4 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);              //set position cursor
  lcd.print("Hello, world!");      //print everything you want
  lcd.setCursor(0,1);
  lcd.print("I'm Doan Black !");
  lcd.setCursor(0,2);
  lcd.print("Haha");
  lcd.setCursor(2,3);
  lcd.print("2015");
}


void loop()
{
}
