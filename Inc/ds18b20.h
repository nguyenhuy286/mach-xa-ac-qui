#ifndef _DS18B20_H
#define _DS18B20_H

#define DS18B20_PORT GPIOA
#define DS18B20_PIN GPIO_PIN_2

#include "stm32f1xx.h"

uint8_t DS18B20_Start1 (void);
void DS18B20_Write1 (uint8_t data);
uint8_t DS18B20_Read1 (void);
float read_temp();

#endif

