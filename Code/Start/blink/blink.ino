int waitTime = 1000;

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  delay(waitTime);
  
  digitalWrite(13,LOW);
  delay(waitTime);
}
