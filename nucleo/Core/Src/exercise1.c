/*
 * exercise1.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise1.h"

#define RED 0
#define YELLOW 1
#define GREEN 2

void init_exercise1(){

}
void RED_on(){
	HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(YELLOW_GPIO_Port,YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_GPIO_Port,GREEN_Pin, GPIO_PIN_RESET);
}
void YELLOW_on(){
	HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOW_GPIO_Port,YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GREEN_GPIO_Port,GREEN_Pin, GPIO_PIN_RESET);
}
void GREEN_on(){
	HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YELLOW_GPIO_Port,YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GREEN_GPIO_Port,GREEN_Pin, GPIO_PIN_SET);
}

int led_status = RED;
int count = 0;
void exercise1_run(){
	switch(led_status){
	case RED:
		if(count == 0){
			RED_on();
		}
		++count;
		if(count >= 5){
			led_status = GREEN;
			count = 0;
		}
		break;
	case GREEN:
		if(count == 0){
			GREEN_on();
		}
		++count;
		if(count >= 3){
			led_status = YELLOW;
			count = 0;
		}
		break;
	case YELLOW:
		if(count == 0){
			YELLOW_on();
		}
		++count;
		if(count >= 2){
			led_status = RED;
			count = 0;
		}
		break;
	default:
		break;
	}
}


