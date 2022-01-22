/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,LCU,EMIOS,FLEXIO
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
/**
*   @file Emios_Mcl_Ip_PBcfg.c
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - MCL driver source file.
*   @details 
*
*   @addtogroup MCL_DRIVER MCL Driver
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
#include "Emios_Mcl_Ip_PBcfg.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMIOS_MCL_IP_PBCFG_VENDOR_ID_C                       43
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C        4
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C        4
#define EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C     0
#define EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION_C                1
#define EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION_C                0
#define EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION_C                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (EMIOS_MCL_IP_PBCFG_VENDOR_ID_C != EMIOS_MCL_IP_PBCFG_VENDOR_ID)
    #error "Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if  source file and Emios_Mcl_Ip_PBcfg.h file are of the same Autosar version */
#if ((EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != EMIOS_MCL_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h are different"
#endif

/* Check if source file and Emios_Mcl_Ip_PBcfg.h file are of the same Software version */
#if ((EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_MAJOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_MINOR_VERSION) || \
     (EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION_C != EMIOS_MCL_IP_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Emios_Mcl_Ip_PBcfg.c and Emios_Mcl_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

