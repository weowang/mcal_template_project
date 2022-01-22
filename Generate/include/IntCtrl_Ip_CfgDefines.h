/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K3_RTD_1_0_0_D2110_ASR_REL_4_4_REV_0000_20211007
*
*   (c) Copyright 2020 - 2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef INTCTRL_IP_CFG_DEFINES_H_
#define INTCTRL_IP_CFG_DEFINES_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_VENDOR_ID                          43
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_PATCH_VERSION                   0
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/* CPU to CPU interrupt (MSI) routing through MSCM */
#define INT_CTRL_IP_MSI_AVAILABLE                 (STD_OFF)


#ifdef S32K344
        #include "S32K344_NVIC.h"
        #include "S32K344_MSCM.h"
        #include "S32K344_SCB.h"
#endif
#ifdef S32K324
        #include "S32K324_NVIC.h"
        #include "S32K324_MSCM.h"
        #include "S32K324_SCB.h"
#endif 
#ifdef S32K314
        #include "S32K314_NVIC.h"
        #include "S32K314_MSCM.h"
        #include "S32K314_SCB.h"
#endif
#ifdef S32K312
        #include "S32K312_NVIC.h"
        #include "S32K312_MSCM.h"
        #include "S32K312_SCB.h"
#endif    

#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
        typedef struct {
            __IO uint32_t IntStatusR;  /**< Interrupt Router CPn Interruptx Status Register, array offset: 0x200, index*0x20, index2*0x8 */
            __O  uint32_t IGR;  /**< Interrupt Router CPn Interruptx Generation Register, array offset: 0x204, index*0x20, index2*0x8 */
        } MSCM_IRCP_IR_Type;

        typedef struct {
            MSCM_IRCP_IR_Type IRCPnIRx[2][4];
        } MSCM_IRCPnIRx_Type;
        
        #define MSCM_IRCPnIRx ((volatile MSCM_IRCPnIRx_Type*)&IP_MSCM->IRCP0ISR0)
#endif        
        


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/* Development error detection */
#define INT_CTRL_IP_DEV_ERROR_DETECT              (STD_OFF)


/* MSI target core count */
#define INTCTRL_IP_MSI_CORE_CNT                   (1U)

/* MSI vector min */
#define INTCTRL_IP_DIRECTED_CPU_INT_MIN           (INT0_IRQn)

/* MSI vector max */
#define INTCTRL_IP_DIRECTED_CPU_INT_MAX           (INT3_IRQn)
/* Core count */
#define INTCTRL_IP_CORE_MASK                      (1U)

/* System interrupt routing through MSCM */
#define INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER  (STD_ON)

/* INCT CTRL IP standalone APIs */
#define INT_CTRL_IP_STANDALONE_APIS               (STD_OFF)
    /* First implemented interrupt vector */
    #define INT_CTRL_IP_IRQ_MIN                       (INT0_IRQn)
    
    /* Last implemented interrupt vector */
    #define INT_CTRL_IP_IRQ_MAX                       (SoC_PLL_IRQn)  
    /* The interrupt counter value*/
    #define INT_CTRL_IP_IRQ_COUNT                     (146U)
    /* Arm Cortex M4 */
    #define INT_CTRL_IP_CORTEXM4                      (STD_ON)
    #define INT_CTRL_IP_CORTEXR      STD_OFF


 
/* Number of priority bits implemented */
#define INT_CTRL_IP_NVIC_PRIO_BITS                (4U)

/*Interrupt Router Shared Peripheral Routing Control Register*/
#define INT_CTRL_IP_ROUTING_CONTROL_REGISTER      (STD_ON)

/* This instruction invalidates the entire instruction cache or caches */
#define INT_CTRL_IP_INVALIDATE_CACHE              (STD_OFF)


/**
* @brief Support for User mode.
*        If this parameter has been configured to 'STD_ON', the Int Ctrl PLATFORM driver code can be executed from both supervisor and user mode.
*/

#define INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


#endif /* INTCTRL_IP_CFG_DEFINES_H_ */

