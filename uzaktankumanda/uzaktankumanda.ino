#define m1a 4
#include <SoftwareSerial.h>
SoftwareSerial hc05(11,12);
int veri;
#define m1b 5
#define m2a 6
#define m2b 7
#define m1en 10
#define m2en 9

void setup() {
hc05.begin(9600);
Serial.begin(9600);
for(int i = 4;i<11;i++){
  pinMode(i,OUTPUT);
}

}

void loop() {
if(hc05.available()>0){
  veri=hc05.read();
  Serial.println(veri);
  
  
  
}
else{
  ileri(0);
}

if(veri<0){
  veri=veri*-1;
  sol(veri);
}
else if(veri>0){
  sag(veri);
  
}
else if(veri==0){
  ileri(255);
}
else if(veri==200){
  ileri(0);
}







}
void ileri(int a){
  analogWrite(m1en,a);
  analogWrite(m2en,a);
  digitalWrite(m1a,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
void dur(){
  digitalWrite(m1a,LOW);
  digitalWrite(m2a,LOW);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
void geri(int b){
  analogWrite(m1en,b);
  analogWrite(m2en,b);
  digitalWrite(m1a,LOW);
  digitalWrite(m2a,LOW);
  digitalWrite(m1b,HIGH);
  digitalWrite(m2b,HIGH);
}
void sol(int c){
  analogWrite(m1en,255-(c*10));
  analogWrite(m2en,255);
  digitalWrite(m1a,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
void sag(int d){
  analogWrite(m1en,255);
  analogWrite(m2en,255-(d*10));
  digitalWrite(m1a,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
