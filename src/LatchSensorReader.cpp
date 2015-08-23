/*
 * LatchSensorReader.cpp
 *
 *  Created on: 23.8.2015
 *      Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "Arduino.h"
#include "LatchSensorReader.h"

LatchSensorReader::LatchSensorReader(int sensorPin) :
        sensorPin(sensorPin),outputHigh(false) {
    pinMode(sensorPin, INPUT_PULLUP);
}

bool LatchSensorReader::read() {
    bool outputWasHigh = outputHigh;
    outputHigh = digitalRead(sensorPin);

    #ifdef __DEBUG
        //Debug code here
    #endif

    // Return true on falling edge
    return outputWasHigh && !outputHigh;
}
