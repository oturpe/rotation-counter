/*
 * UnipolarSwitchReader.h
 *
 *  Created on: 2015-11-05
 *      Author: Otto Urpelainen
 */

#ifndef UNIPOLARSWITCHREADER_H_
#define UNIPOLARSWITCHREADER_H_

#include "SensorReader.h"

/**
 * Sensor reader that reads values from Hall effect unipolar switch type
 * sensors. This sensor reads a value every time it passes a magnetic pole of
 * appropriate polarity, which depends on the sensor. Sensor is connected to a
 *  digital input pin which will get pullup enabled.
 *
 * @note
 *    This clas has not been tested. It might not work or have some bugs.
 */
class UnipolarSwitchReader : public SensorReader {
public:
    /*'
     * Creates and initializes a new unipolar switch reader.
     *
     * @param sensorPin digital pin to read
     */
    UnipolarSwitchReader(int sensorPin);

    /**
     * Polls sensor for passes. For each full cycle, this method must be called
     * at least once while the magnet in under the pole that triggers the
     *  sensor.
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

#endif /* UNIPOLARSWITCHREADER_H_ */