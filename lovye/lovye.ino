#include <Joystick.h>
Joystick_ Joystick;
int y=A1;
int x=A0;
int trot=A2;
int tr;
int y0,y1,y2;
int x0,x1,x2;
int b,g;
void setup() {
Joystick.begin();
Serial.begin(9600);


}

void loop() {

x0=analogRead(x);
//Serial.println(x0);

Joystick.setRudder(127.5);
//x1=map(x0,50,500,127,0);
//x1=-x1;
//  if(x1>127) x1=127;
//  if(x1<-127) x1=-127;
//  if(x1<10&&x1>-10) x1=0;
  Joystick.setXAxis(x0);
 y0 = analogRead(y);
 Serial.println(y1);
y0=map(y0,0,1023,1023,0);
////Serial.println(y1);
//y2=y1;
//if(y2>127) y2=127;
//if(y2<-127) y2=-127;
//if(y2>-25&&y2<25) y2=0;
Joystick.setYAxis(y0);

}
