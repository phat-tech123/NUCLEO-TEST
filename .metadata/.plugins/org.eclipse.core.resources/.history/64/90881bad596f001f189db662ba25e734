/*
 * exercise1.c
 *
 *  Created on: Sep 10, 2024
 *      Author: Admin
 */


#include "exercise1.h"


void exercise_init(){

}

//exercise 1
int led_status = LED_OFF;
void led_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
}
void led_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
}
void exercise1_run(){
	switch(led_status){
	case LED_ON:
		led_on();
		if(1){
			led_status = LED_OFF;
		}
		break;
	case LED_OFF:
		led_off();
		if(1){
			led_status = LED_ON;
		}
		break;
	default:
		break;
	}
}


//exercise 2
void turn_red(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void turn_green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void turn_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
int count = 0;
int led2_status = RED;
void exercise2_run(){
	switch(led2_status){
	case RED:
		if(count == 0) turn_red();
		++count;
		if(count == 5) {
			led2_status = GREEN;
			count = 0;
		}
		break;
	case GREEN:
		if(count == 0) turn_green();
		++count;
		if(count == 3){
			led2_status = YELLOW;
			count = 0;
		}
		break;
	case YELLOW:
		if(count == 0) turn_yellow();
		++count;
		if(count == 2){
			led2_status = RED;
			count = 0;
		}
		break;
	default:
		break;
	}
}


//
