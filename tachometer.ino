#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int xpin = 0;
int i, rpm;
int oldtime;

void setup()
{
  pinMode(xpin, INPUT);
  pinMode(13, OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(1,1);
  lcd.print("Come on boys");
  delay(500);
  
}

void loop()
{
  oldtime=millis();   
  while(digitalRead(xpin)); 
  i=millis()-oldtime;
  rpm = 60000/i;
  analogWrite(13,255);  
  lcd.clear();
  lcd.print("RPM IS");
  lcd.setCursor(1,1);
  lcd.print(rpm);
  delay(500);

}






