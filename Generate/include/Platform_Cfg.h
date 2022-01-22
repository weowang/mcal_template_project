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

#ifndef PLATFORM_CFG_H_
#define PLATFORM_CFG_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Platform_TypesDef.h"
#include "Platform_CfgDefines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_CFG_VENDOR_ID                     43
#define PLATFORM_CFG_AR_RELEASE_MAJOR_VERSION      4
#define PLATFORM_CFG_AR_RELEASE_MINOR_VERSION      4
#define PLATFORM_CFG_AR_RELEASE_REVISION_VERSION   0
#define PLATFORM_CFG_SW_MAJOR_VERSION              1
#define PLATFORM_CFG_SW_MINOR_VERSION              0
#define PLATFORM_CFG_SW_PATCH_VERSION              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform_TypesDef header file are of the same vendor */
#if (PLATFORM_CFG_VENDOR_ID != PLATFORM_TYPESDEF_VENDOR_ID)
    #error "Platform_Cfg.h and Platform_TypesDef.h have different vendor ids"
#endif
/* Check if current file and Platform_TypesDef header file are of the same Autosar version */
#if ((PLATFORM_CFG_AR_RELEASE_MAJOR_VERSION    != PLATFORM_TYPESDEF_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_CFG_AR_RELEASE_MINOR_VERSION    != PLATFORM_TYPESDEF_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_CFG_AR_RELEASE_REVISION_VERSION != PLATFORM_TYPESDEF_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform_Cfg.h and Platform_TypesDef.h are different"
#endif
/* Check if current file and Platform_TypesDef header file are of the same Software version */
#if ((PLATFORM_CFG_SW_MAJOR_VERSION != PLATFORM_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_CFG_SW_MINOR_VERSION != PLATFORM_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_CFG_SW_PATCH_VERSION != PLATFORM_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Cfg.h and Platform_TypesDef.h are different"
#endif

/* Check if current file and Platform_CfgDefines header file are of the same vendor */
#if (PLATFORM_CFG_VENDOR_ID != PLATFORM_CFGDEFINES_VENDOR_ID)
    #error "Platform_Cfg.h and Platform_CfgDefines.h have diPlatform_CfgDefinesfferent vendor ids"
#endif
/* Check if current file and Platform_CfgDefines header file are of the same Autosar version */
#if ((PLATFORM_CFG_AR_RELEASE_MAJOR_VERSION    != PLATFORM_CFGDEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (PLATFORM_CFG_AR_RELEASE_MINOR_VERSION    != PLATFORM_CFGDEFINES_AR_RELEASE_MINOR_VERSION) || \
     (PLATFORM_CFG_AR_RELEASE_REVISION_VERSION != PLATFORM_CFGDEFINES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform_Cfg.h and Platform_CfgDefines.h are different"
#endif
/* Check if current file and Platform_CfgDefines header file are of the same Software version */
#if ((PLATFORM_CFG_SW_MAJOR_VERSION != PLATFORM_CFGDEFINES_SW_MAJOR_VERSION) || \
     (PLATFORM_CFG_SW_MINOR_VERSION != PLATFORM_CFGDEFINES_SW_MINOR_VERSION) || \
     (PLATFORM_CFG_SW_PATCH_VERSION != PLATFORM_CFGDEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Platform_Cfg.h and Platform_CfgDefines.h are different"
#endif



/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* TBD */


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/



/*==================================================================================================
                                       DEFINES AND MACROS
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"




#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"
#endif /* PLATFORM_CFG_H_ */

