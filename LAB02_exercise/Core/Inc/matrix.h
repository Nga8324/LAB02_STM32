/*
 * control_matrix.h
 *
 *  Created on: Oct 1, 2024
 *      Author: Admin
 */

#ifndef INC_MATRIX_H_
#define INC_MATRIX_H_
#include "main.h"

#define MAX_LED_MATRIX 8
extern int index_led_matrix;
extern uint8_t matrix_buffer [];

void updateLedMatrix(int index);
void displayLedMatrix(int row, int col);
void displayAnimation();

#endif /* INC_MATRIX_H_ */

