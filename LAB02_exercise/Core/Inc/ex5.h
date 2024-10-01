/*
 * ex5.h
 *
 *  Created on: Oct 1, 2024
 *      Author: Admin
 */

#ifndef INC_EX5_H_
#define INC_EX5_H_
#include "main.h"

extern int timer1_flag;
extern int timer2_flag;
extern int index_led;
extern const int MAX_LED;
extern int hour;
extern int minute;
extern int second;

void display7SEG();
void update7SEG (int index);
void updateClockBuffer();
void setTimer1(int duration1);
void setTimer2(int duraton2);
void timerRun();
void display();

#endif /* INC_EX5_H_ */
