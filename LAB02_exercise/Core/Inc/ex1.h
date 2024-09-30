/*
 * ex1.h
 *
 *  Created on: Sep 29, 2024
 *      Author: Admin
 */

#ifndef INC_EX1_H_
#define INC_EX1_H_
#include "main.h"

extern int timer1_flag;
extern int timer2_flag;

void display7SEG(int num);
void setTimer1(int duration1);
void setTimer2(int duration2);
void timerRun();
#endif /* INC_EX1_H_ */
