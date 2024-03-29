/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 23/02/2024 13:50:37
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            8000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_SYSCLKFreq_VALUE                     72000000
#define MX_HCLKFreq_Value                       72000000
#define MX_FCLKCortexFreq_Value                 72000000
#define MX_CortexFreq_Value                     72000000
#define MX_AHBFreq_Value                        72000000
#define MX_APB1Freq_Value                       36000000
#define MX_APB2Freq_Value                       72000000
#define MX_APB1TimFreq_Value                    72000000
#define MX_APB2TimFreq_Value                    72000000
#define MX_EthernetFreq_Value                   72000000
#define MX_CECFreq_Value                        32786
#define MX_LCDTFToutputFreq_Value               96000000
#define MX_I2C1Freq_Value                       36000000
#define MX_I2C2Freq_Value                       36000000
#define MX_I2C3Freq_Value                       36000000
#define MX_I2C4Freq_Value                       36000000
#define MX_I2SFreq_Value                        192000000
#define MX_SAI1Freq_Value                       192000000
#define MX_SAI2Freq_Value                       192000000
#define MX_SDMMCFreq_Value                      72000000
#define MX_RTCFreq_Value                        32000
#define MX_USART1Freq_Value                     72000000
#define MX_USART2Freq_Value                     36000000
#define MX_USART3Freq_Value                     36000000
#define MX_UART4Freq_Value                      36000000
#define MX_UART5Freq_Value                      36000000
#define MX_UART8Freq_Value                      36000000
#define MX_UART7Freq_Value                      36000000
#define MX_USART6Freq_Value                     72000000
#define MX_USBFreq_Value                        72000000
#define MX_WatchDogFreq_Value                   32000
#define MX_LPTIM1Freq_Value                     36000000
#define MX_SPDIFRXFreq_Value                    192000000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    72000000

/*-------------------------------- CORTEX_M7  --------------------------------*/

#define MX_CORTEX_M7                            1

/* GPIO Configuration */

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- USART3     --------------------------------*/

#define MX_USART3                               1

#define MX_USART3_VM                            VM_ASYNC

/* GPIO Configuration */

/* Pin PD8 */
#define MX_USART3_TX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_Pin                        PD8
#define MX_USART3_TX_GPIOx                      GPIOD
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/* Pin PD9 */
#define MX_USART3_RX_GPIO_ModeDefaultPP         GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_Pin                        PD9
#define MX_USART3_RX_GPIOx                      GPIOD
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

#endif  /* __MX_DEVICE_H */

