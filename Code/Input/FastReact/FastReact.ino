int oldValue = 0;
// variable für den alten wert

int newValue = 0;
// variable für den neuen wert

int threshold = 100;
// threshold-wert - wenn der unterschied größer als dieser wert ist, reagieren wir

void setup() {
  Serial.begin(9600);
  // kommunikation mit dem computer
}

void loop() {
  oldValue = newValue;
  // wir speichern den aktuellen wert aus dem letzten durchgang als alten wert ab
  
  newValue = analogRead(A4);
  // wir lesen einen neuen wert vom sensor ein
  
  if((oldValue - newValue) > threshold){
    // wenn der unterschied der beiden werte über unserem threshold ist
    
    Serial.println("hello");
    // wird an den computer eine nachricht geschickt
  }
  
  delay(50);
  // für 50 millisekunden warten um den werten zeit zu geben sich zu ändern (wichtig!)
}

