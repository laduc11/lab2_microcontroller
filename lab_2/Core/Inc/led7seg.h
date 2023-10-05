/*
 * led7seg.h
 *
 *  Created on: Oct 5, 2023
 *      Author: DELL
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#include "main.h"

#define MAX_LED 4

int led_buffer[MAX_LED];

void display7SEG(int num);
void set_led7seg(int idx);
void update7SEG(int idx);

#endif /* INC_LED7SEG_H_ */
