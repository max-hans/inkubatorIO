// wichtigste befehle
//
// dieser code funktioniert nicht!


// läuft zu beginn einmal
void setup() {
}


// läuft in endlosschleife
void loop() {
}

// starten der kommunikation mit dem rechner
Serial.begin(9600);

// senden eines wertes an den rechner
Serial.println();

// warten (zeit in millisekunden)
delay(1000);

// analogen wert einlesen (in klammern den Pin angeben!)
analogRead(A1);

// einen digitalen Pin als Input oder Output definieren
pinMode(13,INPUT);
pinMode(13,OUTPUT);

// einen digitalen Pin an- oder ausschalten
digitalWrite(13,HIGH);
digitalWrite(13,LOW);

// matheoperationen
a = a + b;
a = a - b;
a = a * b;
a = a / b;

// umrechnen von einem wert von einem wertebereich auf einen anderen
a = map(analogRead(A1),0,1024,0,100);

// variable deklarieren
int neueVariable = 100;

// neuen wert in variable schreiben
neueVariable = 200;
