/*
 * RCC_API.h
 *
 *  Created on: 9 Eyl 2021
 *      Author: Kortak
 */

#ifndef INC_RCC_API_H_
#define INC_RCC_API_H_

#include "my_stm32f407xx.h"

#define RCC_GPIOA_CLK_ENABLE()			do{ uint32_t tempValue = 0;                  				    \
                                            SET_BIT( RCC->RCC_AHB1ENR, RCC_AHB1ENR_GPIOAEN);             \
                                            tempValue = READ_BIT( RCC->RCC_AHB1ENR, RCC_AHB1ENR_GPIOAEN); \
                                            UNUSED(tempValue);										       \
											}while(0)



#endif /* INC_RCC_API_H_ */
