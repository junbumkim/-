
void setup() { 
 pinMode(11,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(7,INPUT);
 pinMode(A0,INPUT);
 Serial.begin(9600);
 
}

void loop() {
 int slide = analogRead(A0);
 Serial.print("slide:");
 Serial.println(slide);
 if(slide <= 300){
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(9,HIGH);
   }
 else if(slide <= 500){
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   }  
 else if(slide <= 700){
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(10,HIGH);
   }
 else if(slide <= 1000){
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(11,HIGH);
   }
 else if(slide >= 1001){
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH); 
   }
    
 }

 
 
