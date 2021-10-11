#include <VirtualWire.h>
int x=A0;
int y=A1;
int xd,yd;            // x491 y514
int a,b,c,d,e;
void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
digitalWrite(13,HIGH);
vw_set_ptt_inverted(true);
   vw_set_tx_pin(12); // Verici modülün data pin bağlantısı
   vw_setup(4000);
}

void loop() {
xd=analogRead(x);
yd=analogRead(y);

b=map(yd,0,500,5,0);
a=map(yd,515,1023,0,5);
if(a<0)a=0;
if(b<0)b=0;
c=map(xd,0,480,5,0);
d=map(xd,493,1023,0,5);
if(c<0)c=0;
if(d<0)d=0;
e=(a*1000)+(b*100)+(c*10)+d;
Serial.println(a);
Serial.println(b);
Serial.println(c);
Serial.println(d);
Serial.println(e);
Serial.println("-----------------");
String f;
char g[6];

f = (String)e;
f.toCharArray(g, 7);
Serial.println(g);
   vw_send((uint8_t *)g, strlen(g));
    vw_wait_tx(); 

}
