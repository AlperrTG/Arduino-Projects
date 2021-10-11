#include <Joystick.h>


int xPin = A0; //Joystick x ekseni, y ekseni ve üzerindeki buton için pin tanımlaması
int yPin = A1;
int buton_pin = 2 ;
int buton_durum;

float x_degeri, y_degeri;       //Joystick üzerinden alınan koordinat bilgisi
int xZero, yZero;             //Joystick kullanılmadıgında gelen degerler
const int hassasiyet = 300;   //Mouse hassasiyeti, bu deger yükseltildiğinde mouse hızı düşecektir
int x,y;
int a,b,c,d,but,flaps;
void setup()
{  
     Joystick.begin();
  Serial.begin(9600);
  pinMode(xPin, INPUT);  
  pinMode(yPin, INPUT);  
  pinMode(buton_pin, INPUT);
  pinMode(3,INPUT);
   
  digitalWrite(buton_pin, HIGH);  
  delay(2000); 
  xZero = analogRead(xPin);  //0 pozisyonundaki değerler, bu degerlerin okunması sırasında joystick kullanılmamalı  
  yZero = analogRead(yPin);

}
void loop()
{  
  b=flaps;
  x = analogRead(xPin) - xZero;  //x eksenindeki konum  
  y = analogRead(yPin) - yZero;  //y eksenindeki konum 
  a = analogRead(2);
  flaps=analogRead(3);
  flaps=map(flaps,0,1023,0,8);
x=(map(x,-510,510,-120,120));
a=map(a,0,1023,-127,127);
if(x<2&&x>-2){
  x=0;
}
y=(map(y,-510,510,-120,120));
if(y<2&&y>-2){
  y=0;
}
Joystick.setXAxis(x);
Joystick.setYAxis(y);
Joystick.setZAxis(a);
Joystick.setXAxisRotation(180);
Joystick.setYAxisRotation(180);
Joystick.setThrottle(a);
Joystick.setRudder(128);
but= digitalRead(3);
Serial.println(flaps);
Joystick.setButton(1,but);
//if(flaps-b>0){
//  for(int i=0;i<=flaps-b;i++){
//    Joystick.setButton(5,1);
//    delay(10);
//    Joystick.setButton(5,0);
//  }
//}
//else if(flaps-b<0){
//  for(int i=0;i>=flaps-b;i--){
//    Joystick.setButton(6,1);
//    delay(10);
//    Joystick.setButton(6,0);  
//  }
}
//Serial.print("X = ");
//Serial.println(x);
//Serial.print("Y = ");
//Serial.println(y);
//Serial.println("=========================");
//delay(500);

  
 
