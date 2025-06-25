int INA1=10;  //Input 1 to motor driver 
int INA2=9;  //Input 2 to motor driver 
int INB1=8;   //Input 3 to motor driver 
int INB2=2; //Input 4 to motor driver  
int PWM_A=5; //enable key 1 (connect to PWM pin) 
int   PWM_B=3;  //enable key 2  (connect to PWM pin)   
int voltage=90;  // 90 means (5/255)*90 V  

 int tdelay=20; 

 void   setup() 
 { 
  pinMode(INA1,OUTPUT); 
  pinMode(INA2,OUTPUT); 
  pinMode(INB1,OUTPUT); 
  pinMode(INB2,OUTPUT); 
  pinMode(PWM_A,OUTPUT); 
  pinMode(PWM_B,OUTPUT); 
 } 
 void loop(){ 
 // way to control motor using motor driver via voltage controling 
   digitalWrite(INA1,HIGH); 
    digitalWrite(INA2,LOW); 
   analogWrite (PWM_A,voltage); 
 delay(tdelay); } 
}
