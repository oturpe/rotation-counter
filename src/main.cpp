#include "RotationCounter.h"
#include "Arduino.h"
#include "SerialReporter.h"

SensorReader * sensorReader = RotationCounter::initializeSensor();
SerialReporter reporter;

// The setup() method runs once, when the sketch starts
void setup() {
   reporter.init();
}

// the loop() method runs over and over again, as long as the Arduino has power.
void loop() {
    if(sensorReader->read()) {
        reporter.next();
    }
}

int main(void) {

    init();
    setup();

    while (true) {
        loop();
    }
}
