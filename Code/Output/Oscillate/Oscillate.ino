#include <AccelStepper.h>

AccelStepper stepper1(8, 5, 7, 6, 8); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

boolean dir = true;

void setup() {
  stepper1.setMaxSpeed(800);
  stepper1.setAcceleration(1000);
  stepper1.moveTo(1000);
  Serial.begin(9600);
}

void loop()

{ if (stepper1.distanceToGo() == 0) {

    int target = map(analogRead(A2), 450, 900, 100, 1000);
    stepper1.setMaxSpeed(800);
    stepper1.setAcceleration(1000);
    if (dir) {
      target *= -1;
      dir = false;
    }
    else {
      dir = true;
    }

    stepper1.moveTo(target);
    Serial.println(target);
  }
  stepper1.run();
}
