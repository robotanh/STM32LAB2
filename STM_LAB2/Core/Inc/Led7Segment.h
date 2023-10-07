/*
 * Led7Segment.h
 *
 *  Created on: Oct 2, 2023
 *      Author: Admin
 */

#ifndef INC_LED7SEGMENT_H_
#define INC_LED7SEGMENT_H_

#include "main.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8]={
		0x01,
		0x02,
		0x03,
		0x04,
		0x05,
		0x06,
		0x07,
		0x08
};
void updateLEDmatrix(int index)
{
	switch (index){
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			break;

	}
}
void display7SEG (int flag,int counter)
{	if(flag ==0)
	{
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
	}
else if(flag ==1)
	{if(counter == 9)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 8)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 7)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
	}
	else if (counter == 6)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 5)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 4)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 3)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 2)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	}
	else if (counter == 1)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
	}
	else if (counter == 0)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
	}
	}
}

#endif /* INC_LED7SEGMENT_H_ */
