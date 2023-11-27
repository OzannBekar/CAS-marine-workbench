#define doo 1000
#define re 1122
#define mi 1260
#define fa 1335
#define sol 1498
#define la 1681
#define si 1887
#define dom 2000
int melodi[]= {mi,mi,mi,mi,mi,mi,mi,sol,doo,re,mi,fa,fa,fa,fa,fa,mi,mi,mi,mi,mi,re,re,mi,re,sol};
int notasuresi[] = {5,5,2,5,5,2,6,6,2,6,2,5,5,5,3,16,5,5,5,5,4,5,5,5,4,2};
int buzzer=13;
int kirmizi1=2;
int kirmizi2=3;
int kirmizi3=4;
int kirmizi4=5;
int kirmizi5=6;
int kirmizi6=7;
  int kirmizi7=8;
  int pot = A0;
int potDeger;
int tempo=1200;

void setup()
{ 
 pinMode(13,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  pinMode(pot,INPUT);
  
  

   
  
    
 
}

void loop()
{
  for(int b=0; b<26; b++){
    int sure=tempo/notasuresi[b];
    int a=sure*1.5;
     tone(13,melodi[b],sure);
    delay(a);
  
  potDeger= analogRead(pot);
Serial.print("Potansiyometre Okunan Deger= ");
Serial.println(potDeger);
  
  if(0<=potDeger && potDeger<256){
    digitalWrite(2,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
  }
  if(256<=potDeger && potDeger<512){
    digitalWrite(3,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(8,LOW);
    digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
  }
  if(512<=potDeger && potDeger<768){
    digitalWrite(2,LOW);
      digitalWrite(8,LOW);
      digitalWrite(3,LOW);
      digitalWrite(7,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(2,LOW);
  }
  if(768<=potDeger && potDeger<1023){
    digitalWrite(2,LOW);
      digitalWrite(8,LOW);
      digitalWrite(3,LOW);
      digitalWrite(7,LOW);
      digitalWrite(4,LOW);
      digitalWrite(6,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(2,LOW);
  }
  
  
  }
}