#include <Mouse.h>//Mouse kütüphanemizi dahil ediyoruz
int xPin = A0; //Joystick x ekseni, y ekseni ve üzerindeki buton için pin tanımlaması
int yPin = A1;
int buton_pin = 2 ;
int buton_durum;

int x_degeri, y_degeri;       //Joystick üzerinden alınan koordinat bilgisi
int xZero, yZero;             //Joystick kullanılmadıgında gelen degerler
const int hassasiyet = 300;   //Mouse hassasiyeti, bu deger yükseltildiğinde mouse hızı düşecektir
int a,b,x,y,c,d,e,f;

void setup()
{  
  Serial.begin(9600);
  pinMode(xPin, INPUT);  
  pinMode(yPin, INPUT);  
  pinMode(buton_pin, INPUT);  
  digitalWrite(buton_pin, HIGH);  
  delay(2000);
  xZero = analogRead(xPin);  
  yZero = analogRead(yPin);
//  a=map(xZero,505,1023,0,500);
// b=map(xZero,0,505,-500,0);
 
a=xZero-505;
b=yZero-503;  
}
void loop()
{  
 c=x; d=y;
 x = analogRead(xPin)-505;  
  y = analogRead(yPin)-503;
if(x<20&&x>-20)
x=0;
if(y<20&&y>-20)
y=0;
  x=map(x,-505,510,-5000,5000);
  y=map(y,-505,510,-5000,5000);
Mouse.move(c-x,d-y,0);

  
  
} 






//if(x>-10&&y<10){
//    Mouse.move(-c/300,0,0);
//    c=0;
//    Serial.println("fsfsdsf");
//  }
//  if(y>-10&&y<10){
//    Mouse.move(0,-d/300,0);
//    d=0;
//    Serial.println("fsddfsfd");
//  }
// 
//  Mouse.move(x/300,y/300,0);
