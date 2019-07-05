void setup()
{
  
  pinMode(2, OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
  Serial.begin(9600);
  
  
}
int d=0;
void loop()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  if(Serial.available()>0){
    d=Serial.read();
  
  d=d-'0';
  if(d&1){
  digitalWrite(2,HIGH);
  }
  else{
  digitalWrite(2,LOW);
    }
     if(d>>1&1){
  digitalWrite(3,HIGH);
     }
  else{
  digitalWrite(3,LOW);
    }
         if(d>>2&1){
  digitalWrite(4,HIGH);
         }
  else{
  digitalWrite(4,LOW);
  
    }
             if(d>>3&1){
  digitalWrite(5,HIGH);
             }
  else{
  digitalWrite(5,LOW);
    
    }
    digitalWrite(6,HIGH);
  delay(1000);
  }
}
