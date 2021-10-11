#include <VirtualWire.h>
char*mesaj;
int x,y;
int toplam;
void setup() {
  Serial.begin(9600);
pinMode(13,HIGH);
digitalWrite(13,HIGH);
   vw_set_ptt_inverted(true);
   vw_set_tx_pin(12); // Verici modülün data pin bağlantısı
   vw_setup(4000);
}

void loop() {
 x=analogRead(A0);
 y=analogRead(A1);
 x=map(x,0,1023,0,5);
 y=map(y,0,1023,0,5);
 x=x*10;
 toplam=x+y;
 Serial.println(toplam);
 delay(500);
 veri(toplam);
}
void veri(int a){
   mesaj=char(a);
   vw_send((uint8_t *)mesaj, strlen(mesaj)); //Mesaj değişkenini RF 433 ile alıcı modüle gönderiyoruz.
   vw_wait_tx();
}
