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

#ifndef RTC_IP_CFG_DEFINES_H
#define RTC_IP_CFG_DEFINES_H

/**
*   @file           Rtc_Ip_Cfg_Defines.h
*
*   @addtogroup     rtc_ip Rtc IPL
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "S32K344_RTC.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RTC_IP_DEFINES_VENDOR_ID_CFG                    43
#define RTC_IP_DEFINES_AR_RELEASE_MAJOR_VERSION_CFG     4
#define RTC_IP_DEFINES_AR_RELEASE_MINOR_VERSION_CFG     4
#define RTC_IP_DEFINES_AR_RELEASE_REVISION_VERSION_CFG  0
#define RTC_IP_DEFINES_SW_MAJOR_VERSION_CFG             1
#define RTC_IP_DEFINES_SW_MINOR_VERSION_CFG             0
#define RTC_IP_DEFINES_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and StandardTypes.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((RTC_IP_DEFINES_AR_RELEASE_MAJOR_VERSION_CFG != STD_AR_RELEASE_MAJOR_VERSION) || \
         (RTC_IP_DEFINES_AR_RELEASE_MINOR_VERSION_CFG != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Rtc_Ip_Cfg_Defines.h and StandardTypes.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief These defines indicate that at least one channel from each module is used in all configurations.
*/
#define RTC_IP_USED (STD_OFF)

/**
* @brief IRQ Defines for each channel used
*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
#endif  /* RTC_IP_CFG_DEFINES_H */
