/*
 * main.h
 *
 *  Created on: Jun 30, 2026
 *      Author: ilyes
 */

#ifndef MAIN_H_
#define MAIN_H_
#include<stdint.h>
//1-creating the abstraction for the clock enabler register RCC_AHB1ENR using bitfields
typedef struct
{
	volatile uint32_t GPIOAEN:1;
	volatile uint32_t GPIOBEN:1;
	volatile uint32_t GPIOCEN:1;
	volatile uint32_t GPIODEN:1;
	volatile uint32_t GPIOEEN:1;
	volatile uint32_t GPIOFEN:1;
	volatile uint32_t GPIOGEN:1;
	volatile uint32_t GPIOHEN:1;
	volatile uint32_t RESERVED_0:4;
	volatile uint32_t CRCEN :1;
	volatile uint32_t RESERVED_1:5;
	volatile uint32_t BKPSRAMEN:1;
	volatile uint32_t RESERVED_2:2;
	volatile uint32_t DMA1EN:1;
	volatile uint32_t DMA2EN:1;
	volatile uint32_t RESERVED_3:6;
	volatile uint32_t OTGHSEN:1;
	volatile uint32_t OTGHSULPIEN:1;
	volatile uint32_t RESERVED_4:1;
}RCC_AHB1ENR_t;
//2-creating the abstraction for the GPIOx_MODER register to control the specific 2 bits of the pin
typedef struct
{
	volatile uint32_t pin_0:2;
	volatile uint32_t pin_1:2;
	volatile uint32_t pin_2:2;
	volatile uint32_t pin_3:2;
	volatile uint32_t pin_4:2;
	volatile uint32_t pin_5:2;
	volatile uint32_t pin_6:2;
	volatile uint32_t pin_7:2;
	volatile uint32_t pin_8:2;
	volatile uint32_t pin_9:2;
	volatile uint32_t pin_10:2;
	volatile uint32_t pin_11:2;
	volatile uint32_t pin_12:2;
	volatile uint32_t pin_13:2;
	volatile uint32_t pin_14:2;
	volatile uint32_t pin_15:2;

}GPIOx_MODER_t;
//3-creating the abstraction for the GPIOx_ODR register to set the pins high/low
typedef struct
{
		volatile uint32_t pin_0:1;
		volatile uint32_t pin_1:1;
		volatile uint32_t pin_2:1;
		volatile uint32_t pin_3:1;
		volatile uint32_t pin_4:1;
		volatile uint32_t pin_5:1;
		volatile uint32_t pin_6:1;
		volatile uint32_t pin_7:1;
		volatile uint32_t pin_8:1;
		volatile uint32_t pin_9:1;
		volatile uint32_t pin_10:1;
		volatile uint32_t pin_11:1;
		volatile uint32_t pin_12:1;
		volatile uint32_t pin_13:1;
		volatile uint32_t pin_14:1;
		volatile uint32_t pin_15:1;
	volatile uint32_t reserved:16;

}GPIOx_ODR_t;

#endif /* MAIN_H_ */
