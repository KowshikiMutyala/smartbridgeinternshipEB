const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup() {
  pinMode(15,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
   if(distance<=100)
   {
    digitalWrite(15,HIGH);
      digitalWrite(19,LOW);
   Serial.print("LED1 ON");  
   }
   else if(distance>101)
   {
    digitalWrite(15,LOW);
    digitalWrite(19,HIGH);
    Serial.print("LED2 ON");
   }
   

}
