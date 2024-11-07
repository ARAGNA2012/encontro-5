int Ledverde=11;
int Ledamarelo=10;
int Ledlaranja=9;
int Ledvermelho=6;
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,16,2);
 
void setup()
{lcd.init();
lcd.setBacklight(HIGH);
pinMode(Ledverde,OUTPUT);
pinMode(Ledamarelo,OUTPUT);
pinMode(Ledlaranja,OUTPUT);
pinMode(Ledvermelho,OUTPUT);
}
 
void loop()
{
  int ValorPot=analogRead(A0);

  lcd.setCursor(0,0);
  lcd.print("Potec"+String(ValorPot));
  lcd.setCursor(0,1);
  if (ValorPot>0 && ValorPot<=333){lcd.print("Led verde ON");
  digitalWrite(Ledverde,HIGH);
  delay(500);
  }

}
