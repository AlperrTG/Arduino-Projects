#include <VirtualWire.h>
char*mesaj; 
int x,y,toplam;
void setup() {
  Serial.begin(9600);
   vw_set_ptt_inverted(true);
    vw_set_rx_pin(12);  //RF alıcı modü data çıkışı bağlı olduğu arduino pini
    vw_setup(4000);
    vw_rx_start();

}

void loop() {
  uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;
    vw_get_message(buf, &buflen);
    
       
         Serial.println(buf[0]);
        
   

}
