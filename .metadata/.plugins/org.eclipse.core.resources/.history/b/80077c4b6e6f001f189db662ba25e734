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
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
void turn_green(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
}
void turn_yellow(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
}
int count = 0;
int led1_status = RED;
void exercise2_run(){
	switch(led1_status){
	case RED:
		if(count == 0) turn_red();
		++count;
		if(count == 5) {
			led1_status = GREEN;
			count = 0;
		}
		break;
	case GREEN:
		if(count == 0) turn_green();
		++count;
		if(count == 3){
			led1_status = YELLOW;
			count = 0;
		}
		break;
	case YELLOW:
		if(count == 0) turn_yellow();
		++count;
		if(count == 2){
			led1_status = RED;
			count = 0;
		}
		break;
	default:
		break;
	}
}


//exercise 3
void turn_red_2(){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
}
void turn_green_2(){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
}
void turn_yellow_2(){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
}
int light_state = RED1_GREEN;
void exercise3_run(){
	//phase 1
	switch(light_state){
	case RED1_GREEN:
		if(count == 0){
			turn_red();
			turn_green_2();
		}
		++count;
		if(count == 3){
			count = 0;
			light_state = RED1_YELLOW;
		}
		break;
	case RED1_YELLOW:
		if(count == 0){
			turn_yellow_2();
		}
		++count;
		if(count == 2){
			count = 0;
			light_state = RED2_GREEN;
		}
		break;
	case RED2_GREEN:
		if(count == 0){
			turn_red_2();
			turn_green();
		}
		++count;
		if(count == 3){
			count = 0;
			light_state = RED2_YELLOW;
		}
		break;
	case RED2_YELLOW:
		if(count == 0){
			turn_yellow();
		}
		++count;
		if(count == 2){
			count = 0;
			light_state = RED1_GREEN;
		}
		break;
	default:
		break;
	}
}
