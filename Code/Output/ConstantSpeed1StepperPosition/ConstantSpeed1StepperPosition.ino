#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8);
AccelStepper stepper2(8, A1, 3, 2, 4);
AccelStepper stepper3(8, 9, 11, 10, 12);

// schema : name(8 <- bezeichnet den steppertyp , pin1 , pin 3 , pin 2 , pin 4)
// ! achtung ! pin 2 und pin 3 müssen vertauscht werden !

//////////////////////////////////////////////////////////////////////////////////////////

// Variablen

int stepperSpeed = 100;
int printInverval = 500;

unsigned long target;

// Spezielles Datenformat um die Zeit in Millisekunden zu speichern.
// Im Endeffekt einfach eine sehr große Zahl - nicht weiter drüber nachdenken.

//////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  
  stepper1.setSpeed(stepperSpeed);
  stepper2.setSpeed(stepperSpeed);
  stepper3.setSpeed(stepperSpeed);
  
  // Definieren einer Geschwindigkeit für jeden Stepper.
  // Statt "stepperSpeed" könnt ihr hier auch unterschiedliche Werte eingeben.
  // Werte zwischen 100 und 800 sind optimal.

  Serial.begin(9600);
  
  // Starten der Kommunikation mit dem Computer (kann über den Serial Monitor ausgelesen werden)

}

//////////////////////////////////////////////////////////////////////////////////////////

void loop(){
  // Der loop läuft unendlich, mehrere tausende Male in der Sekunde.
     
  stepper1.runSpeed();
  stepper2.runSpeed();
  stepper3.runSpeed();
  
  // Bei jedem Durchgang müssen wir schauen, ob es an der Zeit ist, die Stepper ein Stück weiterzubewegen.

  
  if (millis() > target) {  
    Serial.println("1: " + stepper1.currentPosition());
    Serial.println("2: " + stepper2.currentPosition());
    Serial.println("3: " + stepper3.currentPosition());

    // Wir schicken die aktuelle Position der einzelnen Stepper an den Computer
    // "1: " usw sind Text, den wir nur für uns als Anmerkung mitschicken. Durch das + wird dieser Text
    // zusammen mit dem Wert des Steppers geschickt.
    // println bedeutet, dass nach dem, was wir durchschicken eine neue Zeile beginnt.
    
    target = target + printInterval;
    
    // Wir setzen uns eine neue "Zielzeit", die das aktuelle Ziel plus unser Intervall ist
  }

  // millis() gibt die aktuelle Zeit seit Start in Millisekunden aus. Wenn dieser Wert über einer "Zielzeit"
  // ist wird das, was in den geschweiften Klammern {} steht ausgeführt.
  
}

//////////////////////////////////////////////////////////////////////////////////////////
