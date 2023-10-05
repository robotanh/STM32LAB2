/*
 * software_timer.h
 *
 *  Created on: Oct 2, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void set_Timer1(int duration);
void set_Timer2(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
