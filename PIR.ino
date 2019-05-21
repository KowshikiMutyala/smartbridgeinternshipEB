void setup() {
  
  pinMode(5,INPUT);
  Serial.begin(115200);

}

void loop() {
  int a=digitalRead(5);
  if(a==HIGH)
  {
    Serial.println("Person Detected");
  }
  else 
  {
    Serial.println("Person  Not Detected");
  }
  

}
