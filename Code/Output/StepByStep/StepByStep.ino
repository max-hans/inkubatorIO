#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup() {
  stepper1.setMaxSpeed(800);
  stepper1.setAcceleration(1600);
  Serial.begin(9600);
}

void loop()
{ Serial.println("GO");
  stepper1.setCurrentPosition(0);
  stepper1.moveTo(200);
  while (stepper1.distanceToGo() > 0) {
    stepper1.run();
  }
  delay(300);
}
