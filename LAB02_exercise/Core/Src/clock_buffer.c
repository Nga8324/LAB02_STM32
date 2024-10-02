/*
 * clock_buffer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */
#include "clock_buffer.h"
int hour;
int minute;
int second;
void updateClockBuffer (){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

void display_clock(){
	 second ++;
	 if (second >= 60)
	 {
		 second = 0;
	  	 minute++;
	 }
	 if(minute >= 60)
	 {
		 minute = 0;
	  	 hour++;
	 }
	 if(hour >= 24)
	 {
		 hour = 0;
	 }
}


