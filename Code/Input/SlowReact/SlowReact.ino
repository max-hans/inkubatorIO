int value = 0;
// variable für den gemessenen value

int threshold = 100;
// threshold-value - wenn der unterschied größer als dieser value ist, reagieren wir

int counter = 0;
// variable um zu speichern wie lang der value über dem threshold ist

void setup() {
  Serial.begin(9600);
  // kommunikation mit dem computer
}

void loop() {

  value = analogRead(A4);
  // wir lesen einen neuen value vom sensor ein

  if (value > threshold) {
    // wenn der value über dem threshold ist

    counter = counter + 1;
    // setzen wir den counter um 1 höher
  }

  else {
    // sonst setzen wir ihn auf 0
    counter = 0;
  }

  if (counter > 10) {
    // wenn der counter auf 10 ist

    Serial.println("hello");
    // wird an den computer eine nachricht geschickt

    counter = 0;
    // und wir setzen den counter zurück
  }

  delay(50);
  // für 50 millisekunden warten um den valueen zeit zu geben sich zu ändern (wichtig!)
}

