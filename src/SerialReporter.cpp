/*
 * SerialReporter.cpp
 *
 *  Created on: 7.11.2013
 *      Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "Arduino.h"
#include "SerialReporter.h"

SerialReporter::SerialReporter() : count(0) {
}

void SerialReporter::init() {
    Serial.begin(9600);
}

void SerialReporter::next() {
    static const int REPORT_INTERVAL = 1;

    count += 1;

    if(count % REPORT_INTERVAL == 0) {
        Serial.println(count);
    }
}
