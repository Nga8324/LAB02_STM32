/*
 * software_timer.h
 *
 *  Created on: Oct 1, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include "main.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration1);
void setTimer2(int duraton2);
void setTimer3(int duration3);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
