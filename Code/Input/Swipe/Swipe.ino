#define SENSOR0 A4
#define SENSOR1 A5
#define SENSOR2 A6
#define SENSOR3 A7

// statt immer den speziellen pin-namen zu schreiben, können wir ihnen auch
// universellere bezeichnungen geben

const int sensorCount = 4;
// hier legen wir fest, wieviele sensoren wir benutzen

int oldVals[sensorCount];
int newVals[sensorCount];
// statt alle werte in einzelne variablen zu schreiben, können wir auch "arrays" nutzen.
// das sind im endeffekt wert-sammlungen, in denen mehrere werte gespeichert werden können.

int statusByte = 0;
// hier speichern wir den pin, den wir momentan beobachten müssen um die swipe-bewegung zu erkennen.
// dafür müssen die sensoren nacheinander getriggert werden.

int threshold = 20;
// threshold-wert, der bestimmt, wie empfindlich die erkennung ist

int actionSpeed = 200;
// bestimmt, wieviel zeit maximal zwischen den auslösungen liegen darf

unsigned long lastAction;
// hier speichern wir die letzte auslösung um zu vergleichen ob sie schnell genug passieren

//////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(9600);
}

//////////////////////////////////////////////////////////////////////////////////////////

void loop() {
  oldVals[0] = newVals[0];
  oldVals[1] = newVals[1];
  oldVals[2] = newVals[2];
  oldVals[3] = newVals[3];
  // zuerst speichern wir alle neuen werte aus dem letzten durchgang als alte werte ab
  
  newVals[0] = analogRead(SENSOR0);
  newVals[1] = analogRead(SENSOR1);
  newVals[2] = analogRead(SENSOR2);
  newVals[3] = analogRead(SENSOR3);
  // dann lesen wir die neuen werte ein

  if (oldVals[statusByte] - newVals[statusByte] > threshold) {
    // wenn der alte wert des zu beobachtenden wertes sich stark genug von dem zuvorigen unterscheidet:
    
    statusByte = statusByte + 1;
    // gehen wir einen schritt weiter und beobachten beim nächsten durchgang den nächsten pin
    
    lastAction = millis();
    // außerdem speichern wir den zeitpunkt dieser aktion, um überprüfen zu können, ob die nächste aktion schnell genug erfolgt
    
    if (statusByte > sensorCount) {
      // wenn wir beim letzten sensor angekommen sind, wurde eine erfolgreiche swipe-geste durchgeführt
      
      Serial.println("swipe");
      // das geben wir an den computer weiter
      
      statusByte = 0;
      // und wir resetten den counter, um die nächste geste aufnehmen zu können.
    }
    
  }

  delay(50);
  // für 50 millisekunden warten um den werten zeit zu geben sich zu ändern (wichtig!)

  if(lastAction + actionSpeed < millis()){
    // wenn die letzte aktion zu lang her ist...
    
    statusByte = 0;
    // setzen wir den counter wieder zurück
  }
}


