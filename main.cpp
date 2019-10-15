#include <LiquidCrystal.h> // For LCD
int Switch=53;
int switchState;


LiquidCrystal lcd(6,7,5,4,3,2); 

void setup() 
{
pinMode(Switch,INPUT_PULLUP);
lcd.begin(16,2);
Serial.begin(9600);
}
  void Startup()
  {
  switchState=digitalRead(Switch);
  if(switchState==LOW)
  {
  lcd.setCursor(4,0);
  lcd.print("W");
  delay(500);
  lcd.setCursor(5,0);
  lcd.print("E");
  delay(500);
  lcd.setCursor(6,0);
  lcd.print("L");
  delay(500);
  lcd.setCursor(7,0);
  lcd.print("C");
  delay(500);
  lcd.setCursor(8,0);
  lcd.print("O");
  delay(500);
  lcd.setCursor(9,0);
  lcd.print("M");
  delay(500);
  lcd.setCursor(10,0);
  lcd.print("E");
  delay(500);
  lcd.setCursor(11,0);
  lcd.print("!");
  delay(500);
  lcd.clear();
  delay(400);
  lcd.setCursor(4,0);
  lcd.print("WELCOME!");
  delay(600);
  lcd.clear(); 
  }
  else
  {
    lcd.clear();
  
  }
  }  




void loop() 
{
  switchState=digitalRead(Switch);
  Startup();
}
