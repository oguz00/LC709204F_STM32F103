#ifndef	INC_RCC_H_
#define	INC_RCC_H_



#define RCC_GPIOA_CLK_ENABLE			do{	uint32_t tempValue=0;\
										SET_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOAEN);\
										tempValue=READ_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOAEN);\
										UNUSED(tempValue);\
									}while(0)

#define RCC_GPIOB_CLK_ENABLE			do{	uint32_t tempValue=0;\
										SET_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOBEN);\
										tempValue=READ_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOBEN);\
										UNUSED(tempValue);\
									}while(0)

#define RCC_GPIOC_CLK_ENABLE			do{	uint32_t tempValue=0;\
										SET_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOCEN);\
										tempValue=READ_BIT(RCC->APB2ENR,APB2ENR_GPIOCEN);\
										UNUSED(tempValue);\
									}while(0)

#define RCC_GPIOD_CLK_ENABLE			do{	uint32_t tempValue=0;\
										SET_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIODEN);\
										tempValue=READ_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIODEN);\
										UNUSED(tempValue);\
									}while(0)

#define RCC_GPIOA_CLK_DISABLE		CLEAR_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOAEN)
#define RCC_GPIOB_CLK_DISABLE		CLEAR_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOBEN)
#define RCC_GPIOC_CLK_DISABLE		CLEAR_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIOCEN)
#define RCC_GPIOD_CLK_DISABLE		CLEAR_BIT(RCC->APB2ENR,RCC_APB2ENR_GPIODEN)


#endif
