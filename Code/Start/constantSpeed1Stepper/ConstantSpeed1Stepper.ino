#include <AccelStepper.h>

AccelStepper stepper1(8, 10,12,11,A1);

// schema : name(8 <- bezeichnet den steppertyp , pin1 , pin 3 , pin 2 , pin 4)
// ! achtung ! pin 2 und pin 3 müssen vertauscht werden !

int stepperSpeed = 800;

void setup() {
  stepper1.setMaxSpeed(stepperSpeed);
  stepper1.setSpeed(stepperSpeed);  
  
}

void loop()
{
  stepper1.runSpeed();
}
