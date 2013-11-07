/*
 * LinearSensor.h
 *
 *  Created on: 6.11.2013
 *      Author: Otto Urpelainen
 */

#ifndef LINEARSENSOR_H_
#define LINEARSENSOR_H_

class LinearSensorReader {
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
    bool read();

private:
    /** Analog input pin to read. */
    int sensorPin;

    /** If magnet is under the sensor right now and has been already read. */
    bool passing;
};

#endif /* LINEARSENSOR_H_ */
