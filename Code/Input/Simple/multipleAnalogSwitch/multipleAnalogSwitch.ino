#define INPUTPIN0 A4
#define INPUTPIN0 A5
#define INPUTPIN0 A6

int threshold = 400;
// einführen eines vergleichswertes

void setup() {

  Serial.begin(9600);
  // kommunikation mit dem computer starten

}

void loop() {

  int value0 = analogRead(INPUTPIN0);
  int value1 = analogRead(INPUTPIN1);
  int value2 = analogRead(INPUTPIN2);
  // einlesen der werte an den pins in einzelne variablen

  if (value0 > threshold) {
    // ... wenn der wert von value0 über unserem vergleichswert liegt ...

    if (value1 > threshold) {
      // ... wenn der wert von value1 über unserem vergleichswert liegt ...
      
      if (value2 > threshold) {
        // ... wenn der wert von value2 über unserem vergleichswert liegt ...
        
        Serial.println("ON");
        // ... wird die nachricht "ON" an den computer geschickt
        
      }
    }
  }

  delay(100);
  // 100 ms warten
}
