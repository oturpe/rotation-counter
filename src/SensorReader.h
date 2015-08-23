/*
 * SensorReader.h
 *
 *  Created on: 23.8.2015
 *      Author: Otto Urpelainen
 */

#ifndef SENSORREADER_H_
#define SENSORREADER_H_

/**
 * Interface for diffirent types of sensor readers.
 *
 * Created on: 23.8.2015
 *     Author: Otto Urpelainen
 */
class SensorReader {
public:
    /**
     * Creates and initializes a new sensor reader.
     */
    SensorReader() {}
    virtual ~SensorReader() {}

    /**
     * Polls sensor for passes. For each full cycle, this method must be called
     * at least once while the magnet in under the sensor and once while it is
     * away.
     *
     * @return true once for each full rotation
     */
    virtual bool read() = 0;
};

#endif /* SENSORREADER_H_ */