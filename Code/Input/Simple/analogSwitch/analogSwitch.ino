#define INPUTPIN A4

int threshold = 400;
// einführen eines vergleichswertes

void setup() {

  Serial.begin(9600);
  // kommunikation mit dem computer starten

}

void loop() {

  int value = analogRead(INPUTPIN);
  // einlesen des wertes an dem pin

  if (value > threshold) {
    // ... wenn der eingelesene wert über unserem vergleichswert liegt ...
    Serial.println("ON");
    // wird die nachricht "ON" an den computer geschickt
  }
  else {
    // ... sonst ...
    Serial.println("OFF");
    // wird die nachricht "OFF" an den computer geschickt
  }

  delay(100);
  // 100 ms warten
}
