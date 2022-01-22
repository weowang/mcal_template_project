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

#ifndef RAM_IP_CFG_DEFINES_H
#define RAM_IP_CFG_DEFINES_H

/**
*   @file       Ram_Ip_Cfg_Defines.h
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup RAM_DRIVER_CONFIGURATION Ram Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "S32K344_MC_ME.h"
#include "S32K344_STCU.h"
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RAM_IP_CFG_DEFINES_VENDOR_ID                       43
#define RAM_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define RAM_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define RAM_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define RAM_IP_CFG_DEFINES_SW_MAJOR_VERSION                1
#define RAM_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define RAM_IP_CFG_DEFINES_SW_PATCH_VERSION                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            HW sseries used.
*/
#define RAM_IP_S32K3

/**
* @brief            Pre-processor switch to enable/disable the API Ram_Ip_GetRamState.
*/
#define RAM_IP_GET_RAM_STATE_API        (STD_OFF)

/*==================================================================================================
                                             ENUMS
==================================================================================================*/


/*==================================================================================================
                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/



#ifdef __cplusplus
}
#endif

/** @} */
#endif /* #ifndef RAM_IP_CFG_DEFINES_H */

