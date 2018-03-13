int oldVal = 0;
// variable für den alten wert

int newVal = 0;
// variable für den neuen wert

int threshold = 100;
// threshold-wert - wenn der unterschied größer als dieser wert ist, reagieren wir

void setup() {
  Serial.begin(9600);
  // kommunikation mit dem computer
}

void loop() {
  oldVal = newVal;
  // wir speichern den aktuellen wert aus dem letzten durchgang als alten wert ab
  
  newVal = analogRead(A4);
  // wir lesen einen neuen wert vom sensor ein
  
  if((oldVal - newVal) > threshold){
    // wenn der unterschied der beiden werte über unserem threshold ist
    
    Serial.println("hello");
    // wird an den computer eine nachricht geschickt
  }
  
  delay(50);
  // für 50 millisekunden warten um den werten zeit zu geben sich zu ändern (wichtig!)
}

