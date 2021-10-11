

#include <RFID.h>
#include <SPI.h>
#define led 2
#define buzzer 3
int kart[5] = {214,235,77,165,213}; 
bool izin = 1;
RFID rfid(10,9);
void setup() {
 Serial.begin(9600);
 Serial.println("Kod Basladi");
 SPI.begin();
 rfid.init();
 pinMode(led,OUTPUT);
 pinMode(buzzer,OUTPUT);
}

void loop() {
 if(rfid.isCard()){
 
  if(rfid.readCardSerial()){
    Serial.print(" Kart Bulundu ID : ");
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(125);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    Serial.print(rfid.serNum[0]);
    Serial.print(",");
    Serial.print(rfid.serNum[1]);
    Serial.print(",");
    Serial.print(rfid.serNum[2]);
    Serial.print(",");
    Serial.print(rfid.serNum[3]);
    Serial.print(",");
    Serial.println(rfid.serNum[4]);
    delay(500);
   
  }
  for(int i=0;i<5;i++){
    
  
   if(rfid.serNum[i]!= kart[i]){
      izin = false;
      break;
    }
    }
    if(izin == 1){
      Serial.println("Izın Verildi");
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      digitalWrite(buzzer,HIGH);
      delay(125);
      digitalWrite(buzzer,LOW);
      delay(500);
      for(int i = 0;i<6;i++){
        digitalWrite(led,HIGH);
        
        delay(1000);
        digitalWrite(led,LOW);
        
        delay(1000);
      }
    }
    else{
      Serial.println("Izin Verilmedi ! ! ! Kacak Giris");
      for(int i = 0;i<16;i++){
        digitalWrite(led,HIGH);
        digitalWrite(buzzer,HIGH);
        delay(50);
        digitalWrite(led,LOW);
        digitalWrite(buzzer,LOW);
        delay(50);
      }
    }
    izin = 1;
  rfid.halt();
 }

}
