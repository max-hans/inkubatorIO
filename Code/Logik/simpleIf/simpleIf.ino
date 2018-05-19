#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup() {
  stepper1.setMaxSpeed(1000);
  stepper1.setSpeed(500);
}

void loop() {
  int value = analogRead(A0);
  if(value > 500){
    stepper1.runSpeed();
  }
}
