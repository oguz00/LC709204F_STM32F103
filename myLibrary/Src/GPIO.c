#include "GPIO.h"

void GPIO_WritePin(GPIO_TypeDef_t *GPIO_x, uint16_t pinNumber,GPIO_PinState_t pinState)
{
	if (pinState!= GPIO_Pin_Reset)
	  {
	    GPIO_x->BSRR = pinNumber;
	  }
	  else
	  {
	    GPIO_x->BSRR = (uint32_t)pinNumber << 16u;
	  }
}
