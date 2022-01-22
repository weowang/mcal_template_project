/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : Stm_Pit_Rtc_Emios
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K3_RTD_1_0_0_D2110_ASR_REL_4_4_REV_0000_20211007
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
#ifndef STM_IP_PBCFG_H
#define STM_IP_PBCFG_H

/**   
*   @file          Stm_Ip_PBcfg.h
*  
*   @addtogroup    stm_ip Stm IPL
*
*   @{
*/


#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Stm_Ip_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define STM_IP_VENDOR_ID_PBCFG_H                    43
#define STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H     4
#define STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H     4
#define STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H  0
#define STM_IP_SW_MAJOR_VERSION_PBCFG_H             1
#define STM_IP_SW_MINOR_VERSION_PBCFG_H             0
#define STM_IP_SW_PATCH_VERSION_PBCFG_H             0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#if (STM_IP_VENDOR_ID_PBCFG_H != STM_IP_TYPES_VENDOR_ID)
    #error "Stm_Ip_PBcfg.h and Stm_Ip_Types.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((STM_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H != STM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (STM_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H != STM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (STM_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H != STM_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Stm_Ip_PBcfg.h and Stm_Ip_Types.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((STM_IP_SW_MAJOR_VERSION_PBCFG_H != STM_IP_TYPES_SW_MAJOR_VERSION) || \
     (STM_IP_SW_MINOR_VERSION_PBCFG_H != STM_IP_TYPES_SW_MINOR_VERSION) || \
     (STM_IP_SW_PATCH_VERSION_PBCFG_H != STM_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Stm_Ip_PBcfg.h and Stm_Ip_Types.h are different"
#endif
/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

extern const Stm_Ip_InstanceConfigType STM_0_InitConfig_PB;
extern const Stm_Ip_ChannelConfigType STM_0_ChannelConfig_PB[1U];


#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"


/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif
/** @} */

#endif  /* STM_IP_CFG_H */
