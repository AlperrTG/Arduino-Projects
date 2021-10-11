#include <VirtualWire.h> 
char*mesaj;  
int led = 7;
int buzzer = 3;
void setup()
{
    Serial.begin(9600);
    vw_set_ptt_inverted(true);
    vw_set_rx_pin(12);
    vw_setup(4000);
    vw_rx_start();
    pinMode(led,OUTPUT);
    pinMode(buzzer,OUTPUT);
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
}
void loop()
{
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
   if(out == "1"){
    digitalWrite(led,HIGH);
    for(int i = 0;i<75;i++){
      digitalWrite(buzzer,HIGH);
      delay(50);
      digitalWrite(buzzer,LOW);
      delay(50);
    }
    digitalWrite(led,LOW);
    delay(500);
   }
   else if(out == "0"){
    digitalWrite(led,LOW);
   }
    }
}
