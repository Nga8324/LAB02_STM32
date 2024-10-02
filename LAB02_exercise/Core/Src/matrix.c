/*
 * control_matrix.c
 *
 *  Created on: Oct 1, 2024
 *      Author: Admin
 */
#include "matrix.h"

int index_led_matrix = 0;
uint8_t matrix_buffer [8] = {0x18, 0x24, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42};
void displayLedMatrix(int row, int colData) {
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_SET);

    switch(row) {
        case 0:
        	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, GPIO_PIN_RESET);
        	break;
        case 1:
        	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, GPIO_PIN_RESET);
        	break;
        case 2:
        	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, GPIO_PIN_RESET);
        	break;
        case 3:
        	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, GPIO_PIN_RESET);
        	break;
        case 4:
        	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, GPIO_PIN_RESET);
        	break;
        case 5:
        	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, GPIO_PIN_RESET);
        	break;
        case 6:
        	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, GPIO_PIN_RESET);
        	break;
        case 7:
        	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, GPIO_PIN_RESET);
        	break;
        default:
        	break;
    }
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1 - ((colData >> 7) & 0x01));
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1 - ((colData >> 6) & 0x01));
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1 - ((colData >> 5) & 0x01));
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1 - ((colData >> 4) & 0x01));
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1 - ((colData >> 3) & 0x01));
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1 - ((colData >> 2) & 0x01));
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1 - ((colData >> 1) & 0x01));
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1 - ((colData >> 0) & 0x01));
}
void updateLedMatrix(int index){
	switch(index){
	case 0:// display row 0 of led matrix
		displayLedMatrix(0, matrix_buffer[0]);
		break;
	case 1:// display row 1 of led matrix
		displayLedMatrix(1, matrix_buffer[1]);
		break;
	case 2:// display row 2 of led matrix
		displayLedMatrix(2, matrix_buffer[2]);
		break;
	case 3:// display row 3 of led matrix
		displayLedMatrix(3, matrix_buffer[3]);
		break;
	case 4:// display row 4 of led matrix
		displayLedMatrix(4, matrix_buffer[4]);
		break;
	case 5:// display row 5 of led matrix
		displayLedMatrix(5, matrix_buffer[5]);
		break;
	case 6:// display row 6 of led matrix
		displayLedMatrix(6, matrix_buffer[6]);
		break;
	case 7:// display row 7 of led matrix
		displayLedMatrix(7, matrix_buffer[7]);
		break;
	default:
		break;
	}
}


