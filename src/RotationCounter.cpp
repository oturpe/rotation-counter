/*
 * RotationCounter.cpp
 *
 * Created on: 23.8.2015
 *     Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "LinearSensorReader.h"
#include "LatchSensorReader.h"
#include "UnipolarSwitchReader.h"

SensorReader * RotationCounter::initializeSensor() {
    int sensorPin = 7;
    return new LatchSensorReader(sensorPin);

    // TODO: Add example for LinearSensorReader use
}