void setup() {
  Serial.begin(115200);
pinMode(2,OUTPUT);
  pinMode(5,INPUT);
}

void loop() {
int a = digitalRead(5);
if(a==HIGH)
{
  Serial.println("led off");
  digitalWrite(2,LOW);
}
else
{
  Serial.println("led on");
   digitalWrite(2,HIGH);  
} 

}
