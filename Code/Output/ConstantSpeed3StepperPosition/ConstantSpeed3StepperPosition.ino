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

//////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  
  stepper1.setSpeed(stepperSpeed);
  stepper2.setSpeed(stepperSpeed);
  stepper3.setSpeed(stepperSpeed);

}

//////////////////////////////////////////////////////////////////////////////////////////

void loop(){
   
  stepper1.runSpeed();
  stepper2.runSpeed();
  stepper3.runSpeed();

  if (millis() > target) {  
    Serial.println("1: " + stepper1.currentPosition());
    Serial.println("2: " + stepper2.currentPosition());
    Serial.println("3: " + stepper3.currentPosition());
    target = millis() + printInterval;
  }
  
}

//////////////////////////////////////////////////////////////////////////////////////////
