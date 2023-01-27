#ifndef		INC_STM32103XX_H_
#define		INC_STM32F103XX_H

#include <stdio.h>



/*
 * Memory Base Adresses
 */

#define FLASH_BASE           	0x08000000UL 					/*!< FLASH base address in the alias region */
//#define FLASH_BANK1_END       0x08003FFFUL 					/*!< FLASH END address of bank1 */
#define SRAM_BASE            	0x20000000UL 					/*!< SRAM1 base address in the alias region(112 KB)  */





/*!< Peripheral memory map */
#define PERIPH_BASE           	0x40000000UL 					/*!< Peripheral base address in the alias region */
#define APB1PERIPH_BASE       	PERIPH_BASE						/*!< APB1 BASE ADRESS */
#define APB2PERIPH_BASE       	(PERIPH_BASE + 0x00010000UL)	/*!< APB2 BASE ADRESS */
#define AHBPERIPH_BASE      	(PERIPH_BASE + 0x00018000UL)	/*!< AHB BASE ADRESS */

/*APB1 Peripherals*/
#define USART2_BASE				(APB1PERIPH_BASE+0x4400UL)		/*!< USART2 BASE ADRESS */
#define I2C1_BASE               (APB1PERIPH_BASE+0x5400UL)		/*!< I2C1 BASE ADRESS */
#define I2C2_BASE               (APB1PERIPH_BASE+0x5800UL)		/*!< I2C2 BASE ADRESS */

/*APB2 Peripherals*/
#define GPIOA_BASE				(APB2PERIPH_BASE+0x0800UL)		/*!< GPIOA BASE ADRESS */
#define GPI0B_BASE				(APB2PERIPH_BASE+0x0C00UL)		/*!< GPIOB BASE ADRESS */
#define	GPIOC_BASE				(APB2PERIPH_BASE+0x1000UL)		/*!< GPIOC BASE ADRESS */
#define	GPIOD_BASE				(APB2PERIPH_BASE+0x1400UL)		/*!< GPIOD BASE ADRESS */
#define USART1_BASE				(APB2PERIPH_BASE+0x3800UL)		/*!< USART2 BASE ADRESS */

/*AHB Peripherals*/
#define RCC_BASE				(AHBPERIPH_BASE+0x9000UL)		/*!< RCC BASE ADRESS*/


/*
 * Peripheral Structure Definitions
 */
#define _IO						volatile

#define SET_BIT(REG,BIT)		((REG)|=(BIT))
#define CLEAR_BIT(REG,BIT)		((REG)&=~(BIT))
#define READ_BIT(REG,BIT)		((REG)&(BIT))
#define UNUSED(x)				(void)x
typedef struct
{
	_IO uint32_t CRL[2];				/*<Port configuration register 						Address offset: 0x00		*/
	_IO uint32_t IDR;					/*<Port input data register							Address offset: 0x08		*/
	_IO uint32_t ODR;					/*<Port output data register						Address offset: 0x0C		*/
	_IO uint32_t BSRR;					/*<Port bit set/reset register						Address offset: 0x10		*/
	_IO uint32_t BRR;					/*<Port bit reset register							Address offset: 0x14		*/
	_IO uint32_t LCKR;					/*<Port configuration lock register					Address offset: 0x18		*/
}GPIO_TypeDef_t;

typedef struct
{
	_IO uint32_t CR;			  	/*<RCC clock control register							Address offset: 0x00		*/
	_IO uint32_t CFGR;			  	/*<RCC clock configuration register						Address offset: 0x04		*/
	_IO uint32_t CIR;			 	/*<RCC clock interrupt register							Address offset: 0x08		*/
	_IO uint32_t APB2RSTR;			/*<RCC APB2 peripheral reset register					Address offset: 0x0C		*/
	_IO uint32_t APB1RSTR;			/*<RCC APB1 peripheral reset register					Address offset: 0x10		*/
	_IO uint32_t AHBENR;			/*<RCC AHB peripheral clock enable register				Address offset: 0x14		*/
	_IO uint32_t APB2ENR;			/*<RCC APB2 peripheral clock enable register			Address offset: 0x18		*/
	_IO uint32_t APB1ENR;			/*<RCC APB1 peripheral clock enable register			Address offset: 0x1C		*/
	_IO uint32_t BDCR;				/*<RCC Backup domain control register					Address offset: 0x20		*/
	_IO uint32_t CSR;				/*<RCC clock control & status register					Address offset: 0x24		*/
	_IO uint32_t AHBRSTR;			/*<RCC AHB peripheral clock reset register				Address offset: 0x28		*/
	_IO uint32_t CFGR2;				/*<RCC Clock configuration register2					Address offset: 0x2C		*/
}RCC_TypeDef_t;

#define GPIOA    ((GPIO_TypeDef_t *)(GPIOA_BASE))
#define GPIOB    ((GPIO_TypeDef_t *)(GPIOB_BASE))
#define GPIOC    ((GPIO_TypeDef_t *)(GPIOC_BASE))
#define GPIOD    ((GPIO_TypeDef_t *)(GPIOD_BASE))

#define RCC		 ((RCC_TypeDef_t *)(RCC_BASE))

#define RCC_APB2ENR_GPIOAEN_Pos			(2U)
#define RCC_APB2ENR_GPIOAEN_Msk			(0x1<<RCC_APB2ENR_GPIOAEN_Pos)
#define RCC_APB2ENR_GPIOAEN				RCC_APB2ENR_GPIOAEN_Msk

#define RCC_APB2ENR_GPIOBEN_Pos			(3U)
#define RCC_APB2ENR_GPIOBEN_Msk			(0x1<<RCC_APB2ENR_GPIOBEN_Pos)
#define RCC_APB2ENR_GPIOBEN				RCC_APB2ENR_GPIOBEN_Msk

#define RCC_APB2ENR_GPIOCEN_Pos			(4U)
#define RCC_APB2ENR_GPIOCEN_Msk			(0x1<<RCC_APB2ENR_GPIOCEN_Pos)
#define RCC_APB2ENR_GPIOCEN				RCC_APB2ENR_GPIOCEN_Msk

#define RCC_APB2ENR_GPIODEN_Pos			(5U)
#define RCC_APB2ENR_GPIODEN_Msk			(0x1<<RCC_APB2ENR_GPIODEN_Pos)
#define RCC_APB2ENR_GPIODEN				RCC_APB2ENR_GPIODEN_Msk



#include "RCC.h"

#endif

