#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init(); 
  lcd.backlight();
  
}

void loop() {
 for(int a = 1;a<16;a++){
  lcd.setCursor(a,0);
  lcd.print("red");
  delay(300);
  lcd.clear(); 
  
  
  }
}
