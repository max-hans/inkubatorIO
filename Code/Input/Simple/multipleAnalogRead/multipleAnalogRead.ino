 void setup() {

  Serial.begin(9600);
  // kommunikation mit dem computer starten

}

void loop() {

  int value0 = analogRead(A4);
  int value1 = analogRead(A5);
  // einlesen der werte an den pins in einzelne variablen
  
  Serial.print("0: ");
  // ein label, das die werte für uns unterscheidbar macht.

  Serial.println(value0);
  // der erste wert - "println" bedeutet, dass danach eine neue zeile anfängt
  
  Serial.print("1: ");
  Serial.println(value1);
  // übertragen der werte an den computer
  
  delay(100);
  // 100 ms warten
}
