/*
 * LinearSensorReader.h
 *
 *  Created on: 2013-11-06
 *      Author: Otto Urpelainen
 */

#ifndef LINEARSENSORREADER_H_
#define LINEARSENSORREADER_H_

#include "SensorReader.h"

class LinearSensorReader : public SensorReader {
public:
    /*'
     * Creates and initializes a new linear sensor reader.
     *
     * @param sensorPin analog in pin to read
     */
    LinearSensorReader(int sensorPin);

    /**
     * Polls sensor for passes. For each full cycle, this method must be called
     * at least once while the magnet in under the sensor and once while it is
     * away.
     *
     * @return true once for each full rotation
     */
    virtual bool read();

private:
    /** Analog input pin to read. */
    int sensorPin;

    /** If magnet is under the sensor right now and has been already read. */
    bool passing;
};

#endif /* LINEARSENSORREADER_H_ */
