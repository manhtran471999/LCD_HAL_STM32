#ifndef _LCD_HAL_H
#define _LCD_HAL_H
#ifdef __cplusplus
extern "C"
{
#endif
#include <stdbool.h>
#include "main.h"
	typedef struct
	{
		uint8_t row;
		uint8_t column;
		uint8_t sendbit;
	}lcdXXxXX_t;
	void LCD_Init(void);
	void LCD_Enable(void);
	void LCD_Send(uint8_t data);
	void LCD_Sendcommand(uint8_t command);
	void LCD_Gotoxy(uint8_t x,uint8_t y);
	void LCD_Putchar(uint8_t data);
	void LCD_Putstring(uint8_t * const data);
#ifdef __cplusplus
}
#endif
#endif