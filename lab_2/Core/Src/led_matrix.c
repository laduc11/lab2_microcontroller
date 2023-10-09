/*
 * led_matrix.c
 *
 *  Created on: Oct 10, 2023
 *      Author: DELL
 */

#include "led_matrix.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};

/*
 * Select index of bit 0 in matrix buffer
 * Input: index of matrix buffer
 * Output: ROW_pin which have to RESET
 * */
uint16_t select_pin_0(int index)
{
	uint16_t pin_0 = 0x0000;

	if (!((uint8_t)(matrix_buffer[index] << 7) >> 7))
		pin_0 |= ROW0_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 6) >> 7))
		pin_0 |= ROW1_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 5) >> 7))
		pin_0 |= ROW2_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 4) >> 7))
		pin_0 |= ROW3_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 3) >> 7))
		pin_0 |= ROW4_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 2) >> 7))
		pin_0 |= ROW5_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 1) >> 7))
		pin_0 |= ROW6_Pin;
	if (!((uint8_t)(matrix_buffer[index] << 0) >> 7))
		pin_0 |= ROW7_Pin;
	return pin_0;
}
/*
 * Update column-index from matrix-buffer
 * Input: index of column
 * Output: turn on led base on buffer
 * */
void updateLEDMatrix(int index){
	uint16_t  pin_0;

    switch (index){
        case 0:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL0_Pin, RESET);
        	pin_0 = select_pin_0(0);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 1:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL1_Pin, RESET);
        	pin_0 = select_pin_0(1);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 2:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL2_Pin, RESET);
        	pin_0 = select_pin_0(2);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 3:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL3_Pin, RESET);
        	pin_0 = select_pin_0(3);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 4:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL4_Pin, RESET);
        	pin_0 = select_pin_0(4);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 5:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL5_Pin, RESET);
        	pin_0 = select_pin_0(5);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 6:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL6_Pin, RESET);
        	pin_0 = select_pin_0(6);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        case 7:
        	HAL_GPIO_WritePin(COL0_GPIO_Port, COL7_Pin, RESET);
        	pin_0 = select_pin_0(7);
        	HAL_GPIO_WritePin(GPIOB, pin_0, RESET);
            break;
        default:
        	HAL_GPIO_WritePin(GPIOA, COL0_Pin|COL1_Pin|COL2_Pin|COL3_Pin|COL4_Pin|COL5_Pin|COL6_Pin|COL7_Pin, SET);
        	HAL_GPIO_WritePin(GPIOB, ROW0_Pin|ROW1_Pin|ROW2_Pin|ROW3_Pin|ROW4_Pin|ROW5_Pin|ROW6_Pin|ROW7_Pin, SET);
            break;
    }
}
/*
 * Get index of led matrix
 * Input: none
 * Ouput: current index of led matrix
 * */
int get_index()
{
	return index_led_matrix;
}
/*
 * Increase index of led matrix
 * Input: none
 * Output: none
 * */
void inc_index()
{
	index_led_matrix++;
	if (index_led_matrix > 7)
		index_led_matrix = 0;
}
/*
 * Set matrix buffer
 * Input: Character you want to display on led matrix
 * Output: none
 * */
void set_buffer(char input)
{
	switch (input)
	{
	case 'A':
		matrix_buffer[0] = 0xFF;
		matrix_buffer[1] = 0x03;
		matrix_buffer[2] = 0x01;
		matrix_buffer[3] = 0xCC;
		matrix_buffer[4] = 0xCC;
		matrix_buffer[5] = 0x01;
		matrix_buffer[6] = 0x03;
		matrix_buffer[7] = 0xFF;
		break;
	default:
		break;
	}
}
