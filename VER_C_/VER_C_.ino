#include <VirtualWire.h>
char *senddata;
boolean val ;
int x;

void setup() {
      vw_set_tx_pin(12); 
    vw_setup(2000);// speed of data transfer in bps, can max out at 10000
Serial.begin(9600);
}

void loop() {
 x = analogRead(0);
x = map(x,0,1024,0,6);

switch(x){
  case 0:
  *senddata="0";
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    break;
    case 1:
 *senddata="1";
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx();  
    break;

    case 2:
  *senddata="2";
 
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    break;

       case 3:
   *senddata="3";
 
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    break;

       case 4:
  *senddata="4";
 
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    break;

   case 5:
*senddata="5";
 
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    break;



}




}
