/*
 * ex4.h
 *
 *  Created on: Sep 30, 2024
 *      Author: Admin
 */

#ifndef INC_EX4_H_
#define INC_EX4_H_
#include "main.h"

extern int timer1_flag;
extern int timer2_flag;
extern int index_led;
extern const int MAX_LED;

void display7SEG();
void update7SEG (int index);
void setTimer1(int duration1);
void setTimer2(int duraton2);
void timerRun();

#endif /* INC_EX4_H_ */
