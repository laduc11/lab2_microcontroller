/*
 * clock.h
 *
 *  Created on: Oct 5, 2023
 *      Author: DELL
 */

#ifndef INC_CLOCK_H_
#define INC_CLOCK_H_

#include "main.h"
#include "led7seg.h"

extern int hour, min, sec;

void updateClockBuffrer();

#endif /* INC_CLOCK_H_ */
