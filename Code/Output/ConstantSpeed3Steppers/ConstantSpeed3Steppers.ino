#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper stepper2(8, A1, 3, 2, 4); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper stepper3(8, 9, 11, 10, 12); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

int stepperSpeed1 = 100;
int stepperSpeed2 = 100;
int stepperSpeed3 = 100;

unsigned long int target;

void setup() {
  pinMode(A1, OUTPUT);

  stepper1.setSpeed(stepperSpeed1);
  stepper2.setSpeed(stepperSpeed2);
  stepper3.setSpeed(stepperSpeed3);
  
  Serial.begin(9600);
}

void loop()
{ if (millis() > target) {
    
    
    stepperSpeed1 = map(analogRead(A2), 450, 900, 100, 1000);
    stepperSpeed2 = map(analogRead(A3), 450, 900, 100, 1000);
    stepperSpeed3 = map(analogRead(A4), 450, 900, 100, 1000);
    
    Serial.print("stepperSpeed1: ");
    Serial.println(stepperSpeed1);
    Serial.print("stepperSpeed2: ");
    Serial.println(stepperSpeed2);
    Serial.print("stepperSpeed3: ");
    Serial.println(stepperSpeed3);
    Serial.println("---");
    
    stepper1.setSpeed(stepperSpeed1);
    stepper2.setSpeed(stepperSpeed2);
    stepper3.setSpeed(stepperSpeed3);
    
    target = millis() + 500;
  }
  stepper1.runSpeed();
  stepper2.runSpeed();
  stepper3.runSpeed();
}
