
const int trigPin = 6;
const int echoPin = 3;
 long duration;
 int distance;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
 
 pinMode(9 ,OUTPUT);
 pinMode(10 ,OUTPUT);
 pinMode(11 ,OUTPUT);
 pinMode( 12,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  duration = pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
  
  Serial.println(distance);
  // DONO AAGE
digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, HIGH);
digitalWrite( 11, HIGH); //LEFT
digitalWrite( 12, LOW);  
 
  if  (distance <= 10)
  { 
    // RIGHT MOVEMENT
  digitalWrite( 9, HIGH);// RIGHT
digitalWrite( 10, LOW);
digitalWrite( 11, LOW); //LEFT
digitalWrite( 12, LOW);  
 delay(2000);
   
  // DONO AAGE
 digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, HIGH);
digitalWrite( 11, HIGH); //LEFT
digitalWrite( 12, LOW);  
 //delay(100000);
 }
    if (distance <= 7 )
     {
      // LEFT
      
      digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, LOW);
digitalWrite( 11, LOW); //LEFT
digitalWrite( 12, HIGH);  
delay(2000);

  // DONO AAGE
 digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, HIGH);
digitalWrite( 11, HIGH); //LEFT
digitalWrite( 12, LOW);  
 //delay(100000);
 }
if (distance <= 4 )
{
digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, HIGH);
digitalWrite( 11, LOW); //LEFT
digitalWrite( 12, HIGH);  
delay(2000);
 // DONO AAGE
 digitalWrite( 9, LOW);// RIGHT
digitalWrite( 10, HIGH);
digitalWrite( 11, HIGH); //LEFT
digitalWrite( 12, LOW);  
 
}

}
