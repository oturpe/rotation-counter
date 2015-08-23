/*
 * RotationCounter.cpp
 *
 * Created on: 23.8.2015
 *     Author: Otto Urpelainen
 */

#include "RotationCounter.h"
#include "SensorReader.h"
#include "LinearSensorReader.h"
#include "LatchSensorReader.h"

SensorReader * RotationCounter::initializeSensor() {
    int sensorPin = 7;
    return new LatchSensorReader(sensorPin);
}