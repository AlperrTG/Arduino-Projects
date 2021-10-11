#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 16, 2);

#define trig 3
#define echo 4
int mesafe;
int sure;
void setup() {
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
Serial.begin(9600);
lcd.begin();
lcd.backlight();
lcd.print(" !Lcd Aciliyor!");
delay(2000);
lcd.noBacklight();
delay(1500);
lcd.backlight();
lcd.clear();
lcd.print("Mesafe Olculuyor");
delay(1500);
lcd.clear();
}

void loop() {
lcd.print("Mesafe = ");
int a = mes();
lcd.print(a);
lcd.print(" cm");
while(1){
  if(a != mes())
  break;
}
delay(750);
lcd.clear();


}
int mes(){
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = sure/58;
  return mesafe;
}
