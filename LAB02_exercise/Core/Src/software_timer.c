/*
 * software_timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Admin
 */

int timer1_counter = 0;
int timer1_flag = 0;
int timer1_cycle = 10;
void setTimer1(int duration){
	timer1_counter = duration / timer1_cycle;
	timer1_flag = 0;
}

int timer3_counter = 0;
int timer3_flag = 0;
int timer3_cycle = 10;
void setTimer3(int duration){
	timer3_counter = duration / timer3_cycle;
	timer3_flag = 0;
}

void timerRun(){
	if(timer1_counter > 0){
		timer1_counter --;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}

	if(timer3_counter > 0){
		timer3_counter --;
		if(timer3_counter <= 0){
			timer3_flag = 1;
		}
	}
}

