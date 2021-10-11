#define s2 9
#define s3 8
#define out 10
#define s1 6
#define s0 7
int r,g,b,w;
void setup() {
pinMode(s2,OUTPUT);
pinMode(s3,OUTPUT);
pinMode(s0,OUTPUT);
pinMode(s1,OUTPUT);
pinMode(out,INPUT);
Serial.begin(9600);

digitalWrite(s0,HIGH);
digitalWrite(s1,1);
}

void loop() {
digitalWrite(s2,LOW);
digitalWrite(s3,LOW);
r = pulseIn(out,LOW);
delay(50);
digitalWrite(s2,HIGH);
digitalWrite(s3,HIGH);
g = pulseIn(out,LOW);
delay(50);
digitalWrite(s2,LOW);
digitalWrite(s3,HIGH);
b = pulseIn(out,LOW);
digitalWrite(s2,HIGH);
digitalWrite(s3,LOW);
w = pulseIn(out,LOW);

//Serial.print("R = ");
//Serial.println(r);
//Serial.print("G = ");
//Serial.println(g);
//Serial.print("B = ");
//Serial.println(b);
//Serial.println("---------------------------------------------------------");
delay(1000);
if ( r < g && r < b && r > w && g > b && g > w && b > w && r < 550) {
   Serial.println("*! RED *!");
 }
else if (b<r && b<g && b>w && r<g && g>w && r>w && b<550){
  Serial.println("Blue");
}
}
