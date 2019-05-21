void setup() {
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   delay(1000);
   digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
     delay(1000);

}
