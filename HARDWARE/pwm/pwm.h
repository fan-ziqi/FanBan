#ifndef _PWM_H
#define _PWM_H

#include "stm32f10x.h"

#define POWER_M_CLK	 					RCC_APB2Periph_GPIOE
#define POWER_M_CLK_A	 				RCC_APB2Periph_GPIOA
#define POWER_M_PORT					GPIOE
#define POWER_M_PORT_A				GPIOA
#define IN1_PIN								GPIO_Pin_1
#define IN2_PIN								GPIO_Pin_0
#define ENA_PIN								GPIO_Pin_8


//#define ENA_TOGGLE(a)      if(a%2 == 0)\
//													 GPIO_SetBits(POWER_M_PORT,ENA_PIN);\
//													 else\
//													 GPIO_ResetBits(POWER_M_PORT,ENA_PIN);

//void POWER_M(void);
void TIM1_PWM_Init(u16 arr,u16 psc);
void POWER_M(void);
#endif

