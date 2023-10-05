/*
 * Led7Segment.h
 *
 *  Created on: Oct 2, 2023
 *      Author: Admin
 */

#ifndef INC_LED7SEGMENT_H_
#define INC_LED7SEGMENT_H_

#include "main.h"
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
