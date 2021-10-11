
#define sol1p 2
#define sol2p 3
#define sol3p 4
#define sol4p 5
#define sag4p 6
#define sag3p 7
#define sag2p 8
#define sag1p 9
int sag1, sag2, sag3, sag4, sol3, sol4, sol2, sol1;
int s=0;
int b=1;
#define trig 12
#define echo A5
int a;
int sure,mesafe,mes,m;
void setup() {
  Serial.begin(9600);
  for (int i = 2; i < 10; i++) {
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(10, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(11, OUTPUT);
    pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);





while(0){
 m=mesa();
m=mesa();

if(m<25){
  
  ileri(0);
  sol(150);
  delay(300);
  ileri(0);
  delay(100);
  ileri(100);
  while(1){
        sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
    if((sol1==s||sol2==s||sol3==s||sol4==s)&&sag3==b&&sag2==b){
      ileri(0);
      break;
    }
  }
  delay(100);
  ileri(50);
  while(1){
        sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
    if(sol1==b&&sol2==b&&sol3==b&&(sag3==s||sag2==s||sag1==s||sag4==s)){
      ileri(0);
      break;
    }
  }
  for(int i=0;i<1200;i++){
    cizgi();
    delay(1);
  }
  ileri(0);
  delay(500);
  sag(150);
  delay(300);
  ileri(0);
  delay(100);
  ileri(50);
  while(1){
        sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
    if(sag1==b&&sag2==b&&sag3==b&&(sol3==s||sol2==s||sol1==s||sol4==s)){
      ileri(0);
      for(int i=0;i<1000;i++){
        cizgi();
        delay(1);
      }
      
      ileri(0);
      break;
    }
}
break;
}
else{
cizgi();
}
}



while(0){
 m=mesa();
 m=mesa();
 if(m<=10){
  ileri(0);
  while(1){
    m=mesa();
    m=mesa();
    if(m>15){
    delay(500);
    break;
    }
  }
   for(int i=0;i<2000;i++){
        cizgi();
        delay(1);
      }
      ileri(0);
      break;
 }
 else{
    cizgi();
  }
}


while(1){
 m=mesa();
 m=mesa();
 if(m<15){
  ileri(0);

  while(1){
 m=mesa();
 m=mesa();
 if(a==50){
  break;
 }
 if(m<15){
  ileri(0);
 }
 else{
  cizgi3();
 }
 if(a==50){
  break;
 }
  }
  sol(150);
  delay(200);
  ileri(0);


 delay(100);
  ileri(100);
  while(1){
        sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
    if((sol1==s||sol2==s||sol3==s||sol4==s)&&sag3==b&&sag2==b){
      ileri(0);
      break;
    }
  }
  delay(100);
  ileri(50);
  while(1){
        sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
    if(sol1==b&&sol2==b&&sol3==b&&(sag3==s||sag2==s||sag1==s||sag4==s)){
      ileri(0);
      break;
    }
  }
  for(int i=0;i<1000;i++){
    cizgi();
    delay(1);
  }

while(1);
  
 }
 
 else{
  cizgi();
 }
  
}


}

void loop() {

cizgi3();
//  Serial.print("sol1=");
//  Serial.println(sol1);
//  Serial.print("sol2=");
//  Serial.println(sol2);
//  Serial.print("sol3=");
//  Serial.println(sol3);
//  Serial.print("sol4=");
//  Serial.println(sol4);
//  Serial.print("sag4=");
//  Serial.println(sag4);
//  Serial.print("sag3=");
//  Serial.println(sag3);
//  Serial.print("sag2=");
//  Serial.println(sag2);
//  Serial.print("sag1=");
//  Serial.println(sag1);
//  Serial.println("=====================================================");




}
void cizgi3(){
    sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
  if(sol2==b&&sol3==b&&(sol4==s||sag4==s)&&sag3==b&&sag2==b&&sol1==b&&sag1==b){
  ileri(50);
}

else if((sol1==s||sol2==s||sol3==s||sol4==s)&&sag3==b&&sag2==b){
  if(sol4==s){
    sol(100);
  }
 else if(sol1==s){
    sol(100);
  }
  else if(sol2==s){
   analogWrite(10, 75);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 255);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
  }
  else if(sol3==s){
     analogWrite(10, 100);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 200);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
  }
}
else if(sol1==b&&sol2==b&&sol3==b&&(sag3==s||sag2==s||sag1==s||sag4==s)){
  if(sag4==s){
    sag(100);
  }
  else if(sag1==s){
    sag(100);
  }
  else if(sag2==s){
   analogWrite(10, 255);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 75);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
  }
  else if(sag3==s){
     analogWrite(10, 200);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 100);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
  }
}
else if(sol2==b&&sol3==b&&sol4==b&&sag4==b&&sag3==b&&sag2==b&&sag1==b&&sol1==b){
  ileri(0);
  a=50;
}
else{
  ileri(125);
}
}




void cizgi(){
    sag4=digitalRead(sag4p);
  sag3=digitalRead(sag3p);
  sag2=digitalRead(sag2p);
  sag1=digitalRead(sag1p);
  sol1=digitalRead(sol1p);
  sol2=digitalRead(sol2p);
  sol3=digitalRead(sol3p);
  sol4=digitalRead(sol4p);
  if(sol2==b&&sol3==b&&(sol4==s||sag4==s)&&sag3==b&&sag2==b&&sol1==b&&sag1==b){
  ileri(255);
}
else if(sag4==s){
  sag(150);
}
 else if(sag1==s){
  sag(100);
 }
 else if(sag2==s){
   analogWrite(10, 255);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 100);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
 }
 else if(sag3==s){
   analogWrite(10, 200);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 100);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
 }


 else if(sol4==s){
  sol(150);
}
 else if(sol1==s){
  sol(100);
 }
 else if(sol2==s){
   analogWrite(10, 100);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 255);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
 }
 else if(sol3==s){
   analogWrite(10, 100);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, 200);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
 }

}
int mesa(){
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  sure=pulseIn(echo,HIGH);
  mesafe=(sure/2)/29.1;
  return mesafe;
}
void ileri(int a) {
  analogWrite(10, a);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, a);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}
void geri(int a) {
  analogWrite(10, a);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  analogWrite(11, a);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}
void sol(int a) {
  analogWrite(10, a);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  analogWrite(11, a);
  digitalWrite(A2, HIGH);
  digitalWrite(A3, LOW);
}
void sag(int a) {
  analogWrite(10, a);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  analogWrite(11, a);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
}

//if(sol1==sol2==sol3==sag3==sag2==sag1==b&&sag4==sol4==1){
//  ileri(200);
//}
//else if(sol1==sol2==sol4==sag4==sag3==sag2==sag1==b&&sol3==s){
//  sol(50);
//}
//else if(sol1==sol4==sag4==sag3==sag2==sag1==b&&sol3==sol2==s){
//  sol(75);
//}
//else if(sol1==sol3==sol4==sag4==sag3==sag2==sag1==b&&sol2==s){
//  sol(100);
//}
//else if(sol1==sol4==sag4==sag3==sag2==sag1==b&&sol3==sol2==s){
//  sol(125);
//}
//else if(sol3==sol2==sol4==sag4==sag3==sag2==sag1==b&&sol1==s){
//  sol(150);
//}
//else if(sol3==sol4==sag4==sag3==sag2==sag1==b&&sol2==sol1==s){
//  sol(175);
//}
//else if(sol1==sol2==sol3==sol4==s&&sag4==sag3==sag2==sag1==b){
//  sol(200);
//}
//
//else if(sag1==sag2==sag4==sol4==sol3==sol2==sol1==b&&sag3==s){
//  sag(50);
//}
//else if(sag1==sag4==sol4==sol3==sol2==sol1==b&&sag3==sag2==s){
//  sag(75);
//}
//else if(sag1==sag3==sag4==sol4==sol3==sol2==sol1==b&&sag2==s){
//  sag(100);
//}
//else if(sag1==sag4==sol4==sol3==sol2==sol1==b&&sag3==sag2==s){
//  sag(125);
//}
//else if(sag3==sag2==sag4==sol4==sol3==sol2==sol1==b&&sag1==s){
//  sag(150);
//}
//else if(sag3==sag4==sol4==sol3==sol2==sol1==b&&sag2==sag1==s){
//  sag(175);
//}
//else if(sol1==sol2==sol3==sol4==s&&sag4==sag3==sag2==sag1==b){
//  sol(200);
//}
