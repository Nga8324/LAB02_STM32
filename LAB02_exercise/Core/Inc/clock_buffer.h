/*
 * control_buffer.h
 *
 *  Created on: Oct 11, 2022
 *      Author: Welcome
 */

#ifndef INC_CLOCK_BUFFER_H_
#define INC_CLOCK_BUFFER_H_
#include "main.h"

extern const int MAX_LED;
extern int index_led;
extern int led_buffer [];

extern int hour;
extern int minute;
extern int second;
void updateClockBuffer();
void display_clock();

#endif /* INC_CLOCK_BUFFER_H_ */
