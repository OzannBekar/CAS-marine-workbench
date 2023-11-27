int trigPin=9,echoPin=10;
int sari=2,beyaz=3,mavi=4,yesil=5,kirmizi=6;
long sure,uzaklik;
void setup()
{
 pinMode(trigPin,OUTPUT);pinMode(echoPin,INPUT);
  pinMode(kirmizi,OUTPUT);pinMode(beyaz,OUTPUT);
  pinMode(sari,OUTPUT);pinMode(yesil,OUTPUT);
  pinMode(mavi,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,LOW);delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  uzaklik=(sure/2)*0.0343;
  Serial.print("Mesafe:");
  Serial.print(uzaklik);
  Serial.println(" CM");
  
  delay(50);
  
  if(uzaklik<50){
    digitalWrite(sari,HIGH);        
    digitalWrite(beyaz,HIGH);       
    digitalWrite(mavi,HIGH);        
    digitalWrite(yesil,HIGH);   
    digitalWrite(kirmizi,HIGH);
    delay(100);
    digitalWrite(sari,LOW);       
    digitalWrite(beyaz,LOW);       
    digitalWrite(mavi,LOW);        
    digitalWrite(yesil,LOW);   
    digitalWrite(kirmizi,LOW);
    delay(100);
  }
  else if(uzaklik<150){
  digitalWrite(sari,LOW);
    digitalWrite(beyaz,HIGH);
    digitalWrite(mavi,HIGH);       
    digitalWrite(yesil,HIGH); 
    delay(198);
    digitalWrite(beyaz,LOW);    
    digitalWrite(mavi,LOW);    
    digitalWrite(yesil,LOW);
    delay(198);
    digitalWrite(kirmizi,LOW); 
  }
  else if(uzaklik<250){
    digitalWrite(sari,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(mavi,HIGH);
    delay(300);
    digitalWrite(mavi,LOW);
    delay(300);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
   
  }
  else if(uzaklik>250){
    digitalWrite(sari,LOW);
    digitalWrite(beyaz,LOW);
    digitalWrite(mavi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(kirmizi,LOW);
  }
}