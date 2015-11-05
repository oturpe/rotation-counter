/*
 * SerialReporter.h
 *
 *  Created on: 2013-11-07
 *      Author: Otto Urpelainen
 */

#ifndef SERIALREPORTER_H_
#define SERIALREPORTER_H_

class SerialReporter {
public:
    /**
     * Creates new serial reporter.
     */
    SerialReporter();

    /**
     * Initializes the reporter by beginning serial communication.
     */
    void init();

    /**
     * Reports new rotation. This method prints the amount of accumulated
     * rotations to serial output. Interval of prints is customisable, see
     * implementation.
     */
    void next();

private:
    /** Accumulated rotations. */
    int count;
};

#endif /* SERIALREPORTER_H_ */
