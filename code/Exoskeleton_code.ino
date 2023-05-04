
int DIR=12;
int motor=6;
int k_lock=8;
int P=A0;
int p1=A1;
int p2=A2;
int F;
int F1;
int F2;
//int pwm;
void setup() {
  // put your setup code here, to run once:
  pinMode(DIR,OUTPUT);
  pinMode(motor,OUTPUT);
  pinMode(k_lock,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  F2=analogRead(p2);
  F=analogRead(P);
  F1=analogRead(p1);
  Serial.println(F);
  Serial.println(F1);
   Serial.println(F2);
  if(F>50){
    digitalWrite(DIR,LOW);
    analogWrite(motor,50);
  }
  else if(F1>50){
    digitalWrite(DIR,HIGH);
    analogWrite(motor,50);
  }
  
  else{
    analogWrite(motor,0);}
  delay(100);
  if(F2>50)
  {
    digitalWrite(k_lock,LOW);
  }
  else
  {
   digitalWrite(k_lock,HIGH); 
  }
delay(100);
}
