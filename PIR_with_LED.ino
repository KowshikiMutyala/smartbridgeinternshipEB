void setup() {
  
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(115200);

}

void loop() {
  int a=digitalRead(5);
  if(a==HIGH)
  {
    Serial.println("Person Detected");
    digitalWrite(2,HIGH);
  }
  else 
  {
    Serial.println("Person  Not Detected");
    digitalWrite(2,LOW);
  }

}
