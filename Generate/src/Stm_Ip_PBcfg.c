/*==================================================================================================
* Project :             RTD AUTOSAR 4.4
* Platform :            CORTEXM
* Peripheral :          Stm_Pit_Rtc_Emios
* Dependencies :        none
*
* Autosar Version :     4.4.0
* Autosar Revision :    ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version :          1.0.0
* Build Version :       S32K3_RTD_1_0_0_D2110_ASR_REL_4_4_REV_0000_20211007
*
* (c) Copyright 2020 - 2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/
/**
 *   @file          Stm_Ip_PBcfg.c
 *
 *   @addtogroup    stm_ip Stm IPL
 *
 *   @{
 */



#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "Stm_Ip_PBcfg.h"
#include "Gpt_Irq.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define STM_IP_VENDOR_ID_PBCFG_C                    43
#define STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C     4
#define STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C     4
#define STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C  0
#define STM_IP_SW_MAJOR_VERSION_PBCFG_C             1
#define STM_IP_SW_MINOR_VERSION_PBCFG_C             0
#define STM_IP_SW_PATCH_VERSION_PBCFG_C             0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#if (STM_IP_VENDOR_ID_PBCFG_C != STM_IP_VENDOR_ID_PBCFG_H)
    #error "Stm_Ip_PBcfg.c and Stm_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C != STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H) || \
     (STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C != STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H) || \
     (STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Stm_Ip_PBcfg.c and Stm_Ip_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((STM_IP_SW_MAJOR_VERSION_PBCFG_C != STM_IP_SW_MAJOR_VERSION_PBCFG_H) || \
     (STM_IP_SW_MINOR_VERSION_PBCFG_C != STM_IP_SW_MINOR_VERSION_PBCFG_H) || \
     (STM_IP_SW_PATCH_VERSION_PBCFG_C != STM_IP_SW_PATCH_VERSION_PBCFG_H) \
    )
    #error "Software Version Numbers of Stm_Ip_PBcfg.c and Stm_Ip_PBcfg.h are different"
#endif

#if (STM_IP_VENDOR_ID_PBCFG_C != GPT_IRQ_VENDOR_ID)
    #error "Stm_Ip_PBcfg.c and Gpt_Irq.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Stm_Ip_PBcfg.c and Gpt_Irq.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((STM_IP_SW_MAJOR_VERSION_PBCFG_C != GPT_IRQ_SW_MAJOR_VERSION) || \
     (STM_IP_SW_MINOR_VERSION_PBCFG_C != GPT_IRQ_SW_MINOR_VERSION) || \
     (STM_IP_SW_PATCH_VERSION_PBCFG_C != GPT_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Stm_Ip_PBcfg.c and Gpt_Irq.h are different"
#endif
/*================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/
 #define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
const Stm_Ip_InstanceConfigType STM_0_InitConfig_PB = 
{
    /* Freeze bit */
    (boolean)TRUE, /* Freeze Enable */
    #if(STM_IP_SET_CLOCK_MODE == STD_ON)
    /* Prescaler Value */
    0U,
    #endif
    /* Prescaler Value */
    39U
};

const Stm_Ip_ChannelConfigType STM_0_ChannelConfig_PB[1U] = 
{
    /** @brief GptStmChannels_0 */
    {
        /** @brief STM Channel Id */
        0U,
        /** @brief STM callback name */
        &Gpt_ProcessCommonInterrupt,
        /** @brief STM callbackparam */
        (uint8)1U
    }
};

#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
