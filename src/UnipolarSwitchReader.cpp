/*
 * UnipolarSwitchReader.cpp
 *
 *  Created on: 2015-11-05
 *      Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "Arduino.h"
#include "UnipolarSwitchReader.h"

UnipolarSwitchReader::UnipolarSwitchReader(int sensorPin) :
        sensorPin(sensorPin),outputHigh(false) {
    pinMode(sensorPin, INPUT_PULLUP);
}

bool UnipolarSwitchReader::read() {
    bool outputWasHigh = outputHigh;
    outputHigh = digitalRead(sensorPin);

    #ifdef __DEBUG
        //Debug code here
    #endif

    // Return true on falling edge
    return outputWasHigh && !outputHigh;
}
