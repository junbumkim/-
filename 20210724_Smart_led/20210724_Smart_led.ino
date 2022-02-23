void setup() {
 pinMode(A1,INPUT);
 Serial.begin(9600);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop() {
 int a = analogRead(A1);
 Serial.println(a);
 if(a>=1 && a<=100){
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
 }
 else if(a>=101 && a<=300){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  }
 else if(a>=301 && a<=500){
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  }
 else if(a>=501 && a<=700){
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  } 
 else if(a>=701 && a<=1023){
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  } 
  
   

  
   
  
  
}
