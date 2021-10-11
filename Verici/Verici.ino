

#include <VirtualWire.h> // RF modül için gerekli Arduino kütüphanesi
char*mesaj; // Gönderilecek mesajın yazıldığı değişken
int butonPin=6;
int butonDurum;
 
void setup() {
Serial.begin(9600);
pinMode(butonPin,INPUT);
  
   vw_set_ptt_inverted(true);
   vw_set_tx_pin(12); // Verici modülün data pin bağlantısı
   vw_setup(4000);
}
 
void loop() {
 butonDurum=digitalRead(butonPin); // Butondan okunan değeri değişkene aktardık.
 
if(butonDurum==HIGH){
     mesaj="1" ; //Eğer butona basılmış ise mesaj değişkenini 1 yapıyoruz.
}else{
      mesaj="0" ; //Eğer butona basılmış ise mesaj değişkenini 0 yapıyoruz.
  }
  
Serial.println(mesaj); //Oluşturduğumuz mesaj değişkenini serial ekranda yazdırdık.
   vw_send((uint8_t *)mesaj, strlen(mesaj)); //Mesaj değişkenini RF 433 ile alıcı modüle gönderiyoruz.
   vw_wait_tx();

}
