/*
 * clock.c
 *
 *  Created on: Oct 5, 2023
 *      Author: DELL
 */

#include "clock.h"
#include "led7seg.h"

int hour = 0, min = 0, sec = 0;

void updateClockBuffrer()
{
	update_led_buffer(hour, min);
}
/*
 * Set time for clock
 * Input: hour, minute, second
 * Output: none
 */
void set_clock(int h, int m, int s)
{
	hour = h;
	min = m;
	sec = s;
}
/*
 * Get hour
 * Input: none
 * Output: hour at the moment
 */
int get_hour()
{
	return hour;
}
/*
 * Get minutue
 * Input: none
 * Output: minute at the moment
 */
int get_min()
{
	return min;
}
/*
 * Get second
 * Input: none
 * Output: second at the moment
 */
int get_sec()
{
	return sec;
}
