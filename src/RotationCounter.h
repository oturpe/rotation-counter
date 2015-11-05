/*
 * RotationCounter.h
 *
 *  Created on: 2013-11-11
 *      Author: Otto Urpelainen
 */

#ifndef ROTATIONCOUNTER_H_
#define ROTATIONCOUNTER_H_

#include "SensorReader.h"

#define __DEBUG

namespace RotationCounter {
    /**
     * Initializes a sensor reader of desired type. Rewrite this function
     * according to sensor type used. All pins must be configured at the
     * same time.
     *
     * @return New sensor reader
     */
    SensorReader * initializeSensor();
}

#endif /* ROTATIONCOUNTER_H_ */
