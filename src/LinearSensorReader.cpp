/*
 * LinearSensorReader.cpp
 *
 *  Created on: 6.11.2013
 *      Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "Arduino.h"
#include "LinearSensorReader.h"

LinearSensorReader::LinearSensorReader(int sensorPin) :
        sensorPin(sensorPin),passing(false) {
}

bool LinearSensorReader::read() {
    static const int THRESHOLD_HIGH = 520;
    static const int THRESHOLD_LOW = 490;

    int value = analogRead(sensorPin);
    bool found =  value > THRESHOLD_HIGH;
    bool lost =  value < THRESHOLD_LOW;

   #ifdef __DEBUG
        Serial.print("DEBUG read:");
        Serial.println(value);
   #endif

    // In grey zone.
    if(!found && !lost)
        return false;

    if(found) {
      bool newlyFound = !passing;
      passing=true;
      return newlyFound;
    }

    // Now lost==true
    passing=false;
    return false;
}
