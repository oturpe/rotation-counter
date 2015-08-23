/*
 * LatchSensorReader.h
 *
 *  Created on: 23.8.2015
 *      Author: Otto Urpelainen
 */

#include "SensorReader.h"

#ifndef LATCHSENSORREADER_H_
#define LATCHSENSORREADER_H_

/**
 * Sensor reader that reads values from Hall effect latch type sensors.
 * This sensor needs to pass both north and south pole during a rotation to
 * read the value correctly. Sensor is connected to a digital input pin which
 * will get pullup enabled.
 */
class LatchSensorReader : public SensorReader {
public:
    /*'
     * Creates and initializes a new latch sensor reader.
     *
     * @param sensorPin digital pin to read
     */
    LatchSensorReader(int sensorPin);

    /**
     * Polls sensor for passes. For each full cycle, this method must be called
     * at least once while the magnet in under the north pole and once while
     * it is under the south pole.
     *
     * @return true once for each full rotation
     */
    virtual bool read();

private:
    /** Digital pin to read. */
    int sensorPin;

    /** If the last read output value was high. */
    bool outputHigh;
};

#endif /* LATCHSENSORREADER_H_ */