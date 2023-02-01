#include "GPIO.h"


 /**
 *  @brief   GPIO READ AND WRITE FUNC
 *
 ===============================================================================
                       ##### IO operation functions #####
 ===============================================================================
  [..]
    This subsection provides a set of functions allowing to manage the GPIOs.

  * @brief  Reads the specified input port pin.
  * @param  GPIOx: where x can be (A..G depending on device used) to select the GPIO peripheral
  * @param  pinNumber: specifies the port bit to read.
  *         This parameter can be GPIO_PIN_x where x can be (0..15).
  * @retval GPIO_PinState_t (The input port pin value.)
  */
GPIO_PinState_t GPIO_ReadPin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber)
{
	GPIO_PinState_t bitStatus=GPIO_PIN_RESET;
	if((GPIOx->IDR & pinNumber)!= GPIO_PIN_RESET)
	{
		bitStatus=GPIO_PIN_SET;
	}
	return bitStatus;
}

/**
  * @brief  GPIO_WritePin, sets or clears the selected data port bit.
  *
  * @note   This function uses GPIO_x_BSRR register to allow atomic read/modify
  *         accesses. In this way, there is no risk of an IRQ occurring between
  *         the read and the modify access.
  *
  * @param  GPIOx: where x can be (A..G depending on device used) to select the GPIO peripheral
  * @param  pinNumber: specifies the port bit to be written.
  *          This parameter can be one of GPIO_PIN_x where x can be (0..15).
  * @param  pinState: specifies the value to be written to the selected bit.
  *          This parameter can be one of the GPIO_PinState_t enum values:
  *            @arg GPIO_PIN_RESET: to clear the port pin
  *            @arg GPIO_PIN_SET: to set the port pin
  * @retval None
  */
void GPIO_WritePin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber,GPIO_PinState_t pinState)
{
	if (pinState!= GPIO_PIN_RESET)
	  {
	    GPIOx->BSRR = pinNumber;
	  }
	  else
	  {
	    GPIOx->BSRR = (uint32_t)pinNumber << 16u;
	  }
}

/**
  * @brief  Toggles the specified GPIO pin
  * @param  GPIOx: where x can be (A..G depending on device used) to select the GPIO peripheral
  * @param  GPIO_Pin: Specifies the pins to be toggled.
  * @retval None
  */
void HAL_GPIO_TogglePin(GPIO_TypeDef_t *GPIOx, uint16_t GPIO_Pin)
{






}

GPIO_Init(GPIO_TypeDef_t *GPIOx,GPIO_InitTypeDef_t *GPIO_ConfigStruct)
{







}






