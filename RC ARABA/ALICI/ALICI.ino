#include <VirtualWire.h> // RF modül için gerekli Arduino kütüphanesi
char*mesaj;  // Alınan mesajın yazıldığı değişken

#define m1a 4
#define m1b 5
#define m2a 6
#define m2b 7
#define m1en 10
#define m2en 9
int sayi;
int gaz,fren,sagg,soll;
void setup() {
 Serial.begin(9600);
for(int i = 4;i<11;i++){
  pinMode(i,OUTPUT);
}
vw_set_ptt_inverted(true);
    vw_set_rx_pin(11);  //RF alıcı modü data çıkışı bağlı olduğu arduino pini
    vw_setup(4000);
    vw_rx_start();
}

void loop() {
  
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;

     if (vw_get_message(buf, &buflen)) // if we get a message that we recognize on this buffer...
    {
 
    String out = "";
    
 // we have data coming in, let's aknowledge somehow that we've received it

Serial.println(buflen); // simple enough

    for (int i = 0; i<buflen; i++)
    {
       out +=(char)buf[i]; // fill the string with the data received 
    }
    Serial.println(out); // simple enough

sayi=out.toInt();

}
gaz=sayi/1000;
fren=(sayi-(gaz*1000))/100;
soll=(sayi-(gaz*1000)+(fren*100))/10;
sagg=(sayi-((gaz*1000)+(fren*100)+(soll*10)))/1;

Serial.print("Gaz = ");
Serial.println(gaz);
Serial.print("Fren = ");
Serial.println(fren);
Serial.print("Sol = ");
Serial.println(soll);
Serial.print("Sag = ");
Serial.println(sagg);
Serial.println("=============================");

if(gaz==0&&fren>0){
  geri(map(fren,0,5,0,255));
}
else if(fren==0&&fren==0&&soll==0&&sagg==0){
  dur();
}
else if(fren==0&&gaz>0){
  if(sol>sag){
    sol(soll,map(gaz,0,5,0,255));
  }
  else if(sag>sol){
    sag(sagg,map(gaz,0,5,0,255));
  }
  else{
    ileri(map(gaz,0,5,0,255));
  }
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
void sol(int c,int x){
  analogWrite(m1en,x-(c*10));
  analogWrite(m2en,x);
  digitalWrite(m1a,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
void sag(int d,int y){
  analogWrite(m1en,y);
  analogWrite(m2en,y-(d*10));
  digitalWrite(m1a,HIGH);
  digitalWrite(m2a,HIGH);
  digitalWrite(m1b,LOW);
  digitalWrite(m2b,LOW);
}
