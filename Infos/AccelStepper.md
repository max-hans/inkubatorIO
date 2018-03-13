# AccelStepper Funktionen

Die AccelStepper Library ermöglicht es uns, auf einfache Weise mit Schrittmotoren zu arbeiten, ohne uns Sorgen über Timing, Positionierung oder Beschleunigungen machen zu müssen.

Alle Funktionen der Library sind in der Dokumentation aufgeführt. Diese kann hier gefunden werden:

-> [AccelStepper Library](http://www.airspayce.com/mikem/arduino/AccelStepper/classAccelStepper.html)


Die wichtigsten Befehle sind hier aber mal aufgeführt.
Der Wert _100_ ist nur ein Platzhalter und kann durch alle möglichen Ganzzahlen (also bitte keine Komma-Zahlen!) ersetzt werden.

Bei Geschwindigkeiten sind Werte von 0 - 800 ganz gut, bei Positionswerten sollten Werte über 30.000 vermieden werden (mal abgesehen davon, dass das Ganze dann ewig braucht).

## Nützliche Befehle

### Parameter setzen

```C++
stepper.setSpeed(100);`
```
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


