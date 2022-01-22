/*
*   (c) Copyright 2020 NXP
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
*
*   This file contains sample code only. It is not part of the production code deliverables.
*/

/*!
**  @addtogroup main_module main module documentation
**  @{
*/
/* MODULE main */


/* Including necessary configuration files. */
#include "Mcal.h"
#include "Mcu.h"
#include "OsIf.h"
#include "Port.h"
#include "Dio.h"
#include "Platform.h"
#include "Mcl.h"
#include "Gpt.h"
#include "Det.h"


/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

void delayTest(uint32_t nMsec){
	for(uint32_t i=0; i<nMsec; i++){
		for(uint32_t j=0; j<20000; j++);
	}
}

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/**
* @brief        Gpt notification called by the configured channel periodically
* @details      Used to blink a led
*/
void Gpt_Pit0Ch0Notification(void)
{
  static uint32 led1ChangeCounter = 0;

  led1ChangeCounter++;
  if (1 == led1ChangeCounter)
  {
    Dio_WriteChannel(DioConf_DioChannel_PTA29_RGBLED_RED, STD_HIGH);
  }
  else if (2 == led1ChangeCounter)
  {
    led1ChangeCounter = 0;
    Dio_WriteChannel(DioConf_DioChannel_PTA29_RGBLED_RED, STD_LOW);
  }
}

/**
* @brief        Gpt notification called by the configured channel periodically
* @details      Used to blink a led
*/
void Gpt_Stm0Ch0Notification(void){
  static uint32 led2ChangeCounter = 0;

  led2ChangeCounter++;
  if (1 == led2ChangeCounter)
  {
	Dio_WriteChannel(DioConf_DioChannel_PTA29_RGBLED_RED, STD_HIGH);
  }
  else if (2 == led2ChangeCounter)
  {
	led2ChangeCounter = 0;
	Dio_WriteChannel(DioConf_DioChannel_PTA29_RGBLED_RED, STD_LOW);
  }
}

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
//	uint32_t groupLedValue = 0x00U;

	OsIf_Init(NULL_PTR);
#if (MCU_PRECOMPILE_SUPPORT == STD_ON)
  Mcu_Init(NULL_PTR);
#elif (MCU_PRECOMPILE_SUPPORT == STD_OFF)
  Mcu_Init(&Mcu_Config);
#endif /* (MCU_PRECOMPILE_SUPPORT == STD_ON) */
  Mcu_InitClock(McuClockSettingConfig_A_HighPerf);
  while (MCU_PLL_LOCKED != Mcu_GetPllStatus())
  {
    /* Busy wait until the System PLL is locked */
  }
  Mcu_DistributePllClock();
  Mcu_SetMode(McuModeSettingConf_Run);

  /* Initialize Platform driver */
  Platform_Init(NULL_PTR);
  /* Initialize all pins using the Port driver */
  Port_Init(&Port_Config);

  /* Gpt initialization */
  Gpt_Init(&Gpt_Config);

  /* Start the Gpt timer PIT0_CH0 40MHz */
  Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_0, 4000000U);
  /* Enable the Gpt notification to get the event for toggling the LED periodically */
  Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_0);

  /* Start the Gpt timer STM0_CH0 1MHz (after prescaler) */
  Gpt_StartTimer(GptConf_GptChannelConfiguration_GptChannelConfiguration_1, 100000U);
  /* Enable the Gpt notification to get the event for toggling the LED periodically */
  Gpt_EnableNotification(GptConf_GptChannelConfiguration_GptChannelConfiguration_1);

  /* Write 1 to PTD0 and PTD1 output buffer, and write 0 to PTD2~PTD15 output buffer */
  Dio_WritePort(DioConf_DioPort_A_H, 0x0003);

  /* change PTF8 input/output direction during runtime */
  Port_SetPinDirection(PortConfigSet_PortContainer_GPIO_PTA29_RGBLED0_RED, PORT_PIN_OUT);
  Port_SetPinDirection(PortConfigSet_PortContainer_GPIO_PTA29_RGBLED0_RED, PORT_PIN_IN);
  Port_SetPinDirection(PortConfigSet_PortContainer_GPIO_PTA29_RGBLED0_RED, PORT_PIN_INOUT);

  return(0);
}

/* END main */
/*!
** @}
*/
