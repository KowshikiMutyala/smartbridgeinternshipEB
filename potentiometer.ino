int potpin=2;
int ledpin=13;
int val=0;
void setup() {

  pinMode(ledpin,OUTPUT);
  
  

}

void loop() {
  val=analogRead(potpin);
  digitalWrite(ledpin,HIGH);
  delay(val);
    digitalWrite(ledpin,LOW);
    delay(val);
}
