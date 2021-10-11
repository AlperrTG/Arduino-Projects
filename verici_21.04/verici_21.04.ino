 
#include <VirtualWire.h>
int h,g;
int yukari = 4; 
int asagi = 2; 
int sag = 3; 
int sol = 5; 

boolean val ;
int val2 = 0;
int val5 ;
int val1;
int val3;
int val4;
 int analogPin = 1;
void setup() {
 pinMode(8,INPUT_PULLUP);
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode (yukari, INPUT_PULLUP);
    pinMode (asagi, INPUT_PULLUP);
       pinMode (sag, INPUT_PULLUP);
    pinMode (sol, INPUT_PULLUP);
    pinMode(12,OUTPUT);
    digitalWrite(12,HIGH);
    vw_set_tx_pin(13); 
    vw_setup(2000);// speed of data transfer in bps, can max out at 10000
        while(1){
   int q = digitalRead(8);
   if(q == 0 ){
   break;
   }
        }
        }
 
void loop()
{
  val = digitalRead (yukari);   val1 = digitalRead (asagi);    
  val2 = digitalRead(sag);  val3 = digitalRead(sol);   
yukariasagi();
   
  val2 = analogRead(analogPin);     // read the input pin
  Serial.println(val2); 
  val2 = map(val2, 0, 1023, 0, 10);
  Serial.println(val2); 
pot();

 if(val ==0 && val1 ==1) {
 g = 1;
 }
 if(val3 == 1 && val5 == 1){
  h = 1;
 }
 if(val == 1 && val1 == 0){
  g =2;
 }

   
  delay(50);
  
}
//void sagsol(){
//  char  *senddata5="d";
//    if (val3 == 0){
//    Serial.println("asdaffsdshshsgfjfhjg");
//    digitalWrite(13,1); 
//    vw_send((uint8_t *)senddata5, strlen(senddata5));
//    vw_wait_tx(); 
//    digitalWrite(13,0); 
//    
//    }
//    char *senddata6="e";
//
//    if (val5 == 0){
//    Serial.print(val1);
//    digitalWrite(13,1); 
//    vw_send((uint8_t *)senddata6, strlen(senddata6));
//    vw_wait_tx(); 
//    digitalWrite(13,0); 
//  Serial.println("asdaffsdshshsgfjfhjg");
//    }
//    
//   char *senddata7="f";
//
//    if (val5 == 1 && val3 == 1){
//    Serial.print(val);
//    digitalWrite(13,1); 
//    vw_send((uint8_t *)senddata7, strlen(senddata7));
//    vw_wait_tx(); 
//    digitalWrite(13,0); 
//  Serial.println("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//    }

//}
void yukariasagi(){
  char  *senddata="a";
    if (g ==1 && h==1 ){
    Serial.print(val);
    digitalWrite(13,1); 
    vw_send((uint8_t *)senddata, strlen(senddata));
    vw_wait_tx(); 
    digitalWrite(13,0); 
  
    }
    char *senddata2="b";

    if (g == 2 && h == 1){
    Serial.print(val1);
    digitalWrite(13,1); 
    vw_send((uint8_t *)senddata2, strlen(senddata2));
    vw_wait_tx(); 
    digitalWrite(13,0); 
  
    }
    
    char *senddata3="c";

    if (val == 1 && val1 == 1){
    Serial.print(val);
    digitalWrite(13,1); 
    vw_send((uint8_t *)senddata3, strlen(senddata3));
    vw_wait_tx(); 
    digitalWrite(13,0); 
  
    }
}

void pot(){

     char *data0="0";
    if (val2 == 0){
    vw_send((uint8_t *)data0, strlen(data0));
    vw_wait_tx(); 
    }
    
     char *data1="1";
    if (val2 == 1){
    vw_send((uint8_t *)data1, strlen(data1));
    vw_wait_tx(); 
    }
    
     char *data2="2";
    if (val2 == 2){
    vw_send((uint8_t *)data2, strlen(data2));
    vw_wait_tx(); 
  
    }

     char *data3="3";
    if (val2 == 3){
    vw_send((uint8_t *)data3, strlen(data3));
    vw_wait_tx(); 
  
    }

         char *data4="4";
    if (val2 == 4){
    vw_send((uint8_t *)data4, strlen(data4));
    vw_wait_tx(); 
  
    }

         char *data5="5";
    if (val2 == 5){
    vw_send((uint8_t *)data5, strlen(data5));
    vw_wait_tx(); 
 
    }

         char *data6="6";
    if (val2 == 6){
    vw_send((uint8_t *)data6, strlen(data6));
    vw_wait_tx(); 

    }

         char *data7="7";
    if (val2 == 7){
    vw_send((uint8_t *)data7, strlen(data7));
    vw_wait_tx(); 

    }

         char *data8="8";
    if (val2 == 8){
    vw_send((uint8_t *)data8, strlen(data8));
    vw_wait_tx(); 
  
    }


         char *data9="9";
    if (val2 == 9){
    vw_send((uint8_t *)data9, strlen(data9));
    vw_wait_tx(); 
  
    }


         char *data10="10";
    if (val2 == 10){
    vw_send((uint8_t *)data10, strlen(data10));
    vw_wait_tx(); 
 
    }
  }


