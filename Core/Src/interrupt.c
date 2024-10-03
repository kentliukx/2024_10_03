//
// Created by kentl on 2024/10/2.
//
#include "main.h"
#include "tim.h"
#include "main.h"
#include "tim.h"
#include "usart.h"

extern char buffer[20];

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
  if (htim->Instance == TIM6){
    HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
  }
}