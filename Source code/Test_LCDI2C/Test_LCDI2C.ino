#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(1, 0);
  lcd.print("Oi ban oi");
  lcd.setCursor(0, 1);
  lcd.print("La do ban ga` do'");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(1, 0);
  lcd.print("Oi ban oi");
  lcd.setCursor(0, 1);
  lcd.print("La do ban ga` do'");
}
