# AccelStepper Funktionen

### Parameter setzen

`stepper.setSpeed(100)`
Konstante Geschwindigkeit


`stepper.setMaxSpeed(100);`
Maximalgeschwindigkeit wenn der Stepper mit Beschleunigung genutzt wird


`stepper.setAcceleration(100);`
Beschleunigungsrate des Motors


`stepper.setCurrentPosition(100);`
Überschreibt die aktuell gespeicherte Motorposition mit dem eingesetzten Wert


### Ziele setzen

`stepper.moveTo(100)`
Definieren eines neuen Ziels für den Motor


### Motor bewegen

`stepper.run()`
Fährt an das Ziel, das mit "moveTo()" gesetzt wurde und benutzt dabei Beschleunigung

`stepper.runSpeed()`
Motor fährt stur mit der Geschwindigkeit, die man ihm vorgegeben hat


### Informationen vom Motor

`stepper.getCurrentPosition()`
Gibt die aktuelle Position des Motors aus


