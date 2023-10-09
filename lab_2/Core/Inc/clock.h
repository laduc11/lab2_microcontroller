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

void updateClockBuffrer(int h, int m, int s);
int get_hour();
int get_min();
int get_sec();

#endif /* INC_CLOCK_H_ */
