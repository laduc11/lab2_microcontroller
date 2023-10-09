/*
 * led_matrix.h
 *
 *  Created on: Oct 10, 2023
 *      Author: DELL
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

#include "main.h"

void updateLEDMatrix(int index);
int get_index();
void inc_index();
void set_buffer(char input);
void shiftLeft();

#endif /* INC_LED_MATRIX_H_ */
