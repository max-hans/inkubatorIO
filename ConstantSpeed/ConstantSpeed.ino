#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper stepper2(8, A1, 3, 2, 4); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper stepper3(8, 9, 11, 10, 12); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

unsigned long int target;

int stepperSpeed = 100;
void setup() {
  pinMode(A1, OUTPUT);
  stepper1.setMaxSpeed(1000);
  stepper1.setSpeed(stepperSpeed);

  stepper2.setMaxSpeed(1000);
  stepper2.setSpeed(stepperSpeed);

  stepper3.setMaxSpeed(1000);
  stepper3.setSpeed(stepperSpeed);
  Serial.begin(9600);
}

void loop()
{ if (millis() > target) {
    stepperSpeed = map(analogRead(A2), 450, 900, 100, 1000);
    stepper1.setSpeed(stepperSpeed);
    stepper2.setSpeed(stepperSpeed);
    stepper3.setSpeed(stepperSpeed);
    Serial.println(stepperSpeed);
    target = millis() + 500;
  }
  stepper1.runSpeed();
  stepper2.runSpeed();
  stepper3.runSpeed();
}
