/*
 * software_timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_C_
#define INC_SOFTWARE_TIMER_C_
extern int timer1_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer3(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_C_ */
