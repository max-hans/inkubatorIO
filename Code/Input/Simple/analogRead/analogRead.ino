#define INPUTPIN A4

void setup() {

  Serial.begin(9600);
  // kommunikation mit dem computer starten

}

void loop() {

  int value = analogRead(INPUTPIN);
  // einlesen des wertes an dem pin

  Serial.println(value);
  // übertragen des wertes an den computer

  delay(100);
  // 100 ms warten

}
