/**
  ******************************************************************************
  * @file    main.c
  * @author  XinLi
  * @version v1.0
  * @date    24-October-2017
  * @brief   Main program body.
  ******************************************************************************
  * @attention
  *
  * <h2><center>Copyright &copy; 2017 XinLi</center></h2>
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <https://www.gnu.org/licenses/>.
  *
  ******************************************************************************
  */

/* Header includes -----------------------------------------------------------*/
#include "main.h"
#include "USART.h"

/* Macro definitions ---------------------------------------------------------*/
/* Type definitions ----------------------------------------------------------*/
/* Variable declarations -----------------------------------------------------*/
/* Variable definitions ------------------------------------------------------*/
/* Function declarations -----------------------------------------------------*/
static void System_Init(void);
static void USART1_ReceiveDataFinishCallback(void);

/* Function definitions ------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None.
  * @return None.
  */
int main(void)
{
  System_Init();
  
  for(;;)
  {
    
  }
}

/**
  * @brief  System initialization.
  * @param  None.
  * @return None.
  */
static void System_Init(void)
{
  USART_Configure(USART1, USART_BaudRate115200, USART_DataBits8, USART_StopBits1, USART_ParityNo);
  USART_SetReceiveDataFinishCallback(USART1, USART1_ReceiveDataFinishCallback);
}

/**
  * @brief  USART1 receive data finish callback.
  * @param  None.
  * @return None.
  */
static void USART1_ReceiveDataFinishCallback(void)
{
  uint8_t buff[100] = {0};
  
  uint32_t num = USART_GetReceiveData(USART1, buff, sizeof(buff));
  USART_SetSendData(USART1, buff, num);
}
