 
#include <VirtualWire.h>
int h,g;
int asd[3];
char *data0="0";
int yukari = 4; 
int asagi = 2; 
int sag = 3; 
int sol = 5; 
long yuzbinlerbasamagi;
long onbinlerbasamagi;
long onlarbasamagi;
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
  val4 = digitalRead(sag);  val3 = digitalRead(sol);   

   
  val2 = analogRead(analogPin);     // read the input pin
  Serial.println(val2); 
  val2 = map(val2, 0, 1023, 0, 10);
  Serial.println(val2); 
verici();
                                                                         

  
}
void verici(){
if(val==LOW&&val1==HIGH){
   yuzbinlerbasamagi = 100000;
  
}
else if(val==HIGH&&val1==LOW){
   yuzbinlerbasamagi = 200000;
  
}
else if(val==HIGH&&val1==HIGH){
   yuzbinlerbasamagi = 300000;
  
}
 if(val3==LOW&&val4==HIGH){
   onbinlerbasamagi = 10000;
  
}
else if(val3==HIGH&&val4==LOW){
   onbinlerbasamagi = 20000;
  
}
else if(val3==HIGH&&val4==HIGH){
   onbinlerbasamagi = 30000;
  
}
onlarbasamagi = val2;
long a = yuzbinlerbasamagi + onbinlerbasamagi + onlarbasamagi;
String b;
char c[6];

b = (String)a;
b.toCharArray(c, 7);
Serial.println(c);
   vw_send((uint8_t *)c, strlen(c));
    vw_wait_tx(); 
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


