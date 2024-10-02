/*
 * ex7.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

#ifndef INC_EX7_H_
#define INC_EX7_H_
#include "main.h"

extern const int MAX_LED;
extern int index_led;
extern int hour;
extern int minute;
extern int second;


void display7SEG(int num);
void update7SEG(int index);
void updateClockBuffer();



#endif /* INC_EX7_H_ */
