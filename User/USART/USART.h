/****************************************************************
 * Copyright (C) 2016, XinLi, all right reserved.
 * File name:    USART.h
 * Date:         2016.03.22
 * Description:  USART driver.
*****************************************************************/

#ifndef __USART_H
#define __USART_H

/****************************************************************
 *                        Header include
*****************************************************************/
#include "stm32f4xx.h"

/****************************************************************
 *                       Macro definition
*****************************************************************/

/********************* USART1 Configuration *********************/

#define USART1_BufferSize_Tx            (4096)
#define USART1_BufferSize_Rx            (4096)

#define USART1_DMA_BufferSize_Tx        (4096)
#define USART1_DMA_BufferSize_Rx        (4096)

#define USART1_IRQ_PreemptionPriority   (0)
#define USART1_IRQ_SubPriority          (0)

#define USART1_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOA
#define USART1_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOA

#define USART1_Tx_GPIO                  GPIOA
#define USART1_Rx_GPIO                  GPIOA

#define USART1_Tx_GPIO_Pin              GPIO_Pin_9
#define USART1_Rx_GPIO_Pin              GPIO_Pin_10

#define USART1_Tx_GPIO_PinSource        GPIO_PinSource9
#define USART1_Rx_GPIO_PinSource        GPIO_PinSource10

/****************************************************************/

/********************* USART2 Configuration *********************/

#define USART2_BufferSize_Tx            (4096)
#define USART2_BufferSize_Rx            (4096)

#define USART2_DMA_BufferSize_Tx        (4096)
#define USART2_DMA_BufferSize_Rx        (4096)

#define USART2_IRQ_PreemptionPriority   (0)
#define USART2_IRQ_SubPriority          (0)

#define USART2_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOA
#define USART2_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOA

#define USART2_Tx_GPIO                  GPIOA
#define USART2_Rx_GPIO                  GPIOA

#define USART2_Tx_GPIO_Pin              GPIO_Pin_2
#define USART2_Rx_GPIO_Pin              GPIO_Pin_3

#define USART2_Tx_GPIO_PinSource        GPIO_PinSource2
#define USART2_Rx_GPIO_PinSource        GPIO_PinSource3

/****************************************************************/

#if defined(STM32F40_41xxx) || defined(STM32F427_437xx) || defined(STM32F429_439xx) || defined(STM32F469_479xx) || defined(STM32F446xx) || defined(STM32F412xG) || defined(STM32F413_423xx)
/********************* USART3 Configuration *********************/

#define USART3_BufferSize_Tx            (4096)
#define USART3_BufferSize_Rx            (4096)

#define USART3_DMA_BufferSize_Tx        (4096)
#define USART3_DMA_BufferSize_Rx        (4096)

#define USART3_IRQ_PreemptionPriority   (0)
#define USART3_IRQ_SubPriority          (0)

#define USART3_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOB
#define USART3_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOB

#define USART3_Tx_GPIO                  GPIOB
#define USART3_Rx_GPIO                  GPIOB

#define USART3_Tx_GPIO_Pin              GPIO_Pin_10
#define USART3_Rx_GPIO_Pin              GPIO_Pin_11

#define USART3_Tx_GPIO_PinSource        GPIO_PinSource10
#define USART3_Rx_GPIO_PinSource        GPIO_PinSource11

/****************************************************************/
#endif /* STM32F40_41xxx || STM32F427_437xx || STM32F429_439xx || STM32F469_479xx || STM32F446xx || STM32F412xG || STM32F413_423xx */

#if defined(STM32F40_41xxx) || defined(STM32F427_437xx) || defined(STM32F429_439xx) || defined(STM32F469_479xx) || defined(STM32F446xx) || defined(STM32F413_423xx)
/********************* USART4 Configuration *********************/

#define USART4_BufferSize_Tx            (4096)
#define USART4_BufferSize_Rx            (4096)

#define USART4_DMA_BufferSize_Tx        (4096)
#define USART4_DMA_BufferSize_Rx        (4096)

#define USART4_IRQ_PreemptionPriority   (0)
#define USART4_IRQ_SubPriority          (0)

#define USART4_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOC
#define USART4_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOC

#define USART4_Tx_GPIO                  GPIOC
#define USART4_Rx_GPIO                  GPIOC

#define USART4_Tx_GPIO_Pin              GPIO_Pin_10
#define USART4_Rx_GPIO_Pin              GPIO_Pin_11

#define USART4_Tx_GPIO_PinSource        GPIO_PinSource10
#define USART4_Rx_GPIO_PinSource        GPIO_PinSource11

/****************************************************************/

/********************* USART5 Configuration *********************/

#define USART5_BufferSize_Tx            (4096)
#define USART5_BufferSize_Rx            (4096)

#define USART5_DMA_BufferSize_Tx        (4096)
#define USART5_DMA_BufferSize_Rx        (4096)

#define USART5_IRQ_PreemptionPriority   (0)
#define USART5_IRQ_SubPriority          (0)

#define USART5_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOC
#define USART5_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOD

#define USART5_Tx_GPIO                  GPIOC
#define USART5_Rx_GPIO                  GPIOD

#define USART5_Tx_GPIO_Pin              GPIO_Pin_12
#define USART5_Rx_GPIO_Pin              GPIO_Pin_2

#define USART5_Tx_GPIO_PinSource        GPIO_PinSource12
#define USART5_Rx_GPIO_PinSource        GPIO_PinSource2

/****************************************************************/
#endif /* STM32F40_41xxx || STM32F427_437xx || STM32F429_439xx || STM32F469_479xx || STM32F446xx || STM32F413_423xx */

/********************* USART6 Configuration *********************/

#define USART6_BufferSize_Tx            (4096)
#define USART6_BufferSize_Rx            (4096)

#define USART6_DMA_BufferSize_Tx        (4096)
#define USART6_DMA_BufferSize_Rx        (4096)

#define USART6_IRQ_PreemptionPriority   (0)
#define USART6_IRQ_SubPriority          (0)

#define USART6_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOC
#define USART6_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOC

#define USART6_Tx_GPIO                  GPIOC
#define USART6_Rx_GPIO                  GPIOC

#define USART6_Tx_GPIO_Pin              GPIO_Pin_6
#define USART6_Rx_GPIO_Pin              GPIO_Pin_7

#define USART6_Tx_GPIO_PinSource        GPIO_PinSource6
#define USART6_Rx_GPIO_PinSource        GPIO_PinSource7

/****************************************************************/

#if defined(STM32F427_437xx) || defined(STM32F429_439xx) || defined(STM32F469_479xx) || defined(STM32F413_423xx)
/********************* USART7 Configuration *********************/

#define USART7_BufferSize_Tx            (4096)
#define USART7_BufferSize_Rx            (4096)

#define USART7_DMA_BufferSize_Tx        (4096)
#define USART7_DMA_BufferSize_Rx        (4096)

#define USART7_IRQ_PreemptionPriority   (0)
#define USART7_IRQ_SubPriority          (0)

#define USART7_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOE
#define USART7_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOE

#define USART7_Tx_GPIO                  GPIOE
#define USART7_Rx_GPIO                  GPIOE

#define USART7_Tx_GPIO_Pin              GPIO_Pin_8
#define USART7_Rx_GPIO_Pin              GPIO_Pin_7

#define USART7_Tx_GPIO_PinSource        GPIO_PinSource8
#define USART7_Rx_GPIO_PinSource        GPIO_PinSource7

/****************************************************************/

/********************* USART8 Configuration *********************/

#define USART8_BufferSize_Tx            (4096)
#define USART8_BufferSize_Rx            (4096)

#define USART8_DMA_BufferSize_Tx        (4096)
#define USART8_DMA_BufferSize_Rx        (4096)

#define USART8_IRQ_PreemptionPriority   (0)
#define USART8_IRQ_SubPriority          (0)

#define USART8_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOE
#define USART8_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOE

#define USART8_Tx_GPIO                  GPIOE
#define USART8_Rx_GPIO                  GPIOE

#define USART8_Tx_GPIO_Pin              GPIO_Pin_1
#define USART8_Rx_GPIO_Pin              GPIO_Pin_0

#define USART8_Tx_GPIO_PinSource        GPIO_PinSource1
#define USART8_Rx_GPIO_PinSource        GPIO_PinSource0

/****************************************************************/
#endif /* STM32F427_437xx || STM32F429_439xx || STM32F469_479xx || STM32F413_423xx */

#if defined(STM32F413_423xx)
/********************* USART9 Configuration *********************/

#define USART9_BufferSize_Tx            (4096)
#define USART9_BufferSize_Rx            (4096)

#define USART9_DMA_BufferSize_Tx        (4096)
#define USART9_DMA_BufferSize_Rx        (4096)

#define USART9_IRQ_PreemptionPriority   (0)
#define USART9_IRQ_SubPriority          (0)

#define USART9_Tx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOG
#define USART9_Rx_RCC_AHB1Periph_GPIO   RCC_AHB1Periph_GPIOG

#define USART9_Tx_GPIO                  GPIOG
#define USART9_Rx_GPIO                  GPIOG

#define USART9_Tx_GPIO_Pin              GPIO_Pin_1
#define USART9_Rx_GPIO_Pin              GPIO_Pin_0

#define USART9_Tx_GPIO_PinSource        GPIO_PinSource1
#define USART9_Rx_GPIO_PinSource        GPIO_PinSource0

/****************************************************************/

/******************** USART10 Configuration *********************/

#define USART10_BufferSize_Tx           (4096)
#define USART10_BufferSize_Rx           (4096)

#define USART10_DMA_BufferSize_Tx       (4096)
#define USART10_DMA_BufferSize_Rx       (4096)

#define USART10_IRQ_PreemptionPriority  (0)
#define USART10_IRQ_SubPriority         (0)

#define USART10_Tx_RCC_AHB1Periph_GPIO  RCC_AHB1Periph_GPIOE
#define USART10_Rx_RCC_AHB1Periph_GPIO  RCC_AHB1Periph_GPIOE

#define USART10_Tx_GPIO                 GPIOE
#define USART10_Rx_GPIO                 GPIOE

#define USART10_Tx_GPIO_Pin             GPIO_Pin_3
#define USART10_Rx_GPIO_Pin             GPIO_Pin_2

#define USART10_Tx_GPIO_PinSource       GPIO_PinSource3
#define USART10_Rx_GPIO_PinSource       GPIO_PinSource2

/****************************************************************/
#endif /* STM32F413_423xx */

/****************************************************************
 *                       Type definition
*****************************************************************/


/****************************************************************
 *                     Structure definition
*****************************************************************/



#ifdef __cplusplus
 extern "C" {
#endif  /* __cplusplus */

/****************************************************************
 *                     Variable declaration
*****************************************************************/


/****************************************************************
 *                     Function declaration
*****************************************************************/
void USART_Configure(USART_TypeDef* USARTx, uint32_t BaudRate);
void USART_Unconfigure(USART_TypeDef* USARTx);
uint32_t USART_SetSendData(USART_TypeDef* USARTx, void* Data, uint32_t Length);
uint32_t USART_GetReceiveData(USART_TypeDef* USARTx, void* Data, uint32_t Length);
void USART_SetSendDataFinishCallback(USART_TypeDef* USARTx, void (*Function)(void));
void USART_SetReceiveDataFinishCallback(USART_TypeDef* USARTx, void (*Function)(void));
void USART_ClearSendDataFinishCallback(USART_TypeDef* USARTx);
void USART_ClearReceiveDataFinishCallback(USART_TypeDef* USARTx);

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif 	/* __USART_H */
