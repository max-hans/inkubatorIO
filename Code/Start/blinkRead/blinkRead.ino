int waitTime;

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  waitTime = analogRead(A0);
  
  digitalWrite(13,HIGH);
  delay(waitTime);
  
  digitalWrite(13,LOW);
  delay(waitTime);
}
