#include "RotationCounter.h"
#include "Arduino.h"
#include "new.h"
#include "LinearSensorReader.h"
#include "SerialReporter.h"

#define SENSOR_PIN 5
LinearSensorReader sensor(SENSOR_PIN);
SerialReporter reporter;

// The setup() method runs once, when the sketch starts
void setup() {
   reporter.init();
}

// the loop() method runs over and over again, as long as the Arduino has power.
void loop() {
    if(sensor.read()) {
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
