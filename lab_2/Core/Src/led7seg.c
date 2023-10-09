/*
 * led7seg.c
 *
 *  Created on: Oct 5, 2023
 *      Author: DELL
 */

#include "led7seg.h"

int led_buffer[MAX_LED] = {2, 2, 0, 6};

/*
 * Display number on 7 segment led
 * Input: number
 * Output: none
 * */
void display7SEG(int num)
{
	switch (num)
	{
	case 0:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, RESET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, RESET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, RESET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, RESET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, RESET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, RESET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, SET);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, SET);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, SET);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, SET);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, SET);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, SET);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, SET);
		break;
	}
}
/*
 * Enable 7 segment led
 * Input: index of led
 * Output: turn on this led
 * */
void set_led7seg(int idx)
{
	switch(idx)
	{
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		break;
	}
}
/*
 * Display led buffer on 7 segment led
 * Input: index of 7 segment led
 * Output: none
 * */
void update7SEG(int idx)
{
	if (idx >= MAX_LED || idx < 0)
		return;
	set_led7seg(-1);
	set_led7seg(idx);
	display7SEG(led_buffer[idx]);
}
/*
 * Update buffer of 7 segment led
 * Input: hour, second
 * Output: none
 * */
void update_led_buffer(int hour, int min)
{
	led_buffer[0] = hour/10;
	led_buffer[1] = hour%10;
	led_buffer[2] = min/10;
	led_buffer[3] = min%10;
}
