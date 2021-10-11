#include <VirtualWire.h> 
char*mesaj; 
#define trig 3
#define echo 4
int mesafe;
int sure;
void setup()
{
  Serial.begin(9600);
   vw_set_ptt_inverted(true);
   vw_set_tx_pin(2); // Verici modülün data pin bağlantısı
   vw_setup(4000);
   pinMode(trig,OUTPUT);
   pinMode(echo,INPUT);
}
void loop()
{
   digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = sure/58;
  Serial.println(mesafe);
  if(mesafe <70){
    mesaj = "1";
    
  }
  else{
    mesaj = "0";
  }
   
   vw_send((uint8_t *)mesaj, strlen(mesaj));
   vw_wait_tx();
   
}
int mes(){
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  sure = pulseIn(echo,HIGH);
  mesafe = sure/58;
  return mesafe;
}
