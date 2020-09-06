#ifndef		__LCDTXT_H
#define		__LCDTXT_H

#include "stm32f1xx.h"


/*------------- Define LCD Use -----------------*/

/*Note: Comment which not use */

#define LCD16xN //For lcd16x2 or lcd16x4
//#define LCD20xN //For lcd20x4

/*------------- Define For Connection -----------------*/

#define RS_PORT		GPIOB
#define RS_PIN		GPIO_PIN_5

#define EN_PORT		GPIOB
#define EN_PIN		GPIO_PIN_4

#define D7_PORT		GPIOC
#define D7_PIN		GPIO_PIN_10

#define D6_PORT		GPIOC
#define D6_PIN		GPIO_PIN_11

#define D5_PORT		GPIOC
#define D5_PIN		GPIO_PIN_12

#define D4_PORT		GPIOD
#define D4_PIN		GPIO_PIN_2


/*------------ Declaring Private Macro -----------------*/

#define PIN_LOW(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_RESET);
#define PIN_HIGH(PORT,PIN)	HAL_GPIO_WritePin(PORT,PIN,GPIO_PIN_SET);

/*------------ Declaring Function Prototype -------------*/
void LCD_Init(void);
void LCD_Send4Bit(unsigned char Data);
void LCD_Enable();
void LCD_Clear(void);
void LCD_Gotoxy(unsigned char x, unsigned char y);
void LCD_PutChar(unsigned char Data);
void LCD_Puts(char *s);
#endif