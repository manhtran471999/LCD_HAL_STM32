#ifndef _LCD_HAL_CONFIG_H
#define _LCD_HAL_CONFIG_H

#define USING_RW_PIN 		1
#define USING_4_BIT 		0
#define USING_FREERTOS	0

#define LCD_RS_PORT 		RS_GPIO_Port
#define LCD_RS_PIN			RS_Pin

#define LCD_EN_PORT			EN_GPIO_Port
#define LCD_EN_PIN 			EN_Pin

#define LCD_D7_PORT			D7_GPIO_Port
#define LCD_D7_PIN 			D7_Pin

#define LCD_D6_PORT			D6_GPIO_Port
#define LCD_D6_PIN 			D6_Pin

#define LCD_D5_PORT			D5_GPIO_Port
#define LCD_D5_PIN			D5_Pin

#define LCD_D4_PORT			D4_GPIO_Port			
#define LCD_D4_PIN			D4_Pin

#if(USING_4_BIT==0)

#define LCD_D3_PORT			D3_GPIO_Port
#define LCD_D3_PIN			D3_Pin

#define LCD_D2_PORT			D2_GPIO_Port
#define LCD_D2_PIN			D2_Pin

#define LCD_D1_PORT			D1_GPIO_Port
#define LCD_D1_PIN			D1_Pin

#define LCD_D0_PORT     D0_GPIO_Port
#define LCD_D0_PIN			D0_Pin

#endif

#if (USING_RW_PIN==1)

#define LCD_RW_PORT			RW_GPIO_Port
#define LCD_RW_PIN			RW_Pin


#endif

#if (USING_FREERTOS == 1)
#define Delay(delay) osDelay(delay)
#include "cmsis_os.h"
#else
#define Delay(delay) HAL_Delay(delay)
#endif

#endif

