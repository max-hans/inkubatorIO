#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup() {
}

void loop() {
  int value = analogRead(A0);
  // Wert einlesen
  
  int newValue = map(value,500,700,0,800);
  // Wert auf anderen Wertebereich mappen
  // Struktur : map ( zu mappender Wert , min alter Wertebereich , max alter Wertebereich , min neuer Wertebereich , max neuer Wertebereich) 
  stepper1.setSpeed(newValue);
  
  stepper1.runSpeed();
}
