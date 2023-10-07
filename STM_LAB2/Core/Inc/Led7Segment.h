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
uint8_t matrix_buffer[8] = {
		0x00, 0x3E, 0x48, 0x88, 0x48, 0x3E, 0x00, 0x00
};
void clearCols(){
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
}
void clearRows(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 0);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 0);
}
void setRow(uint8_t code){
	  if((code >> 0) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	  if((code >> 1) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	  if((code >> 2) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	  if((code >> 3) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	  if((code >> 4) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
	  if((code >> 5) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, 1);
	  if((code >> 6) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, 1);
	  if((code >> 7) & 0x01)
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, 1);
  }

  void updateLEDMatrix(int index_led_matrix){
	  	clearCols();
  		clearRows();
  	switch(index_led_matrix){
  		case 0:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
  			index_led_matrix =1;
  			break;
  		case 1:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
  			index_led_matrix =2;
  			break;
  		case 2:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
  			index_led_matrix =3;
  			break;
  		case 3:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
  			index_led_matrix =4;
  			break;
  		case 4:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
  			index_led_matrix =5;
  			break;
  		case 5:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
  			index_led_matrix =6;
  			break;
  		case 6:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
  			index_led_matrix =7;
  			break;
  		case 7:
  			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
  			index_led_matrix =0;
  			break;
  		default:
  			break;
  	}
  	setRow(matrix_buffer[index_led_matrix]);
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
