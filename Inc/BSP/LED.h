#ifndef _LED_H
#define _LED_H


#define LED0(n)     (n?HAL_GPIO_WritePin(GPIOF,GPIO_PIN_9,GPIO_PIN_SET):HAL_GPIO_WritePin(GPIOF,GPIO_PIN_9,GPIO_PIN_RESET))
#define LED0_Toggle (HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_9))
#define LED1(n)	    (n?HAL_GPIO_WritePin(GPIOF,GPIO_PIN_10,GPIO_PIN_SET):HAL_GPIO_WritePin(GPIOF,GPIO_PIN_10,GPIO_PIN_RESET))
#define LED1_Toggle (HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_10))


#endif
