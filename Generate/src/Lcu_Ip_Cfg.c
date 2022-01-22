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

#ifdef __cplusplus
extern "C"
{
#endif

#include "Lcu_Ip_Cfg.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LCU_IP_CFG_VENDOR_ID_C                       43
#define LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define LCU_IP_CFG_AR_RELEASE_MINOR_VERSION_C        4
#define LCU_IP_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define LCU_IP_CFG_SW_MAJOR_VERSION_C                1
#define LCU_IP_CFG_SW_MINOR_VERSION_C                0
#define LCU_IP_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same vendor */
#if (LCU_IP_CFG_VENDOR_ID_C != LCU_IP_CFG_VENDOR_ID)
    #error "Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same Autosar version */
#if ((LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LCU_IP_CFG_AR_RELEASE_MINOR_VERSION_C != LCU_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LCU_IP_CFG_AR_RELEASE_REVISION_VERSION_C != LCU_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h are different"
#endif

/* Check if Lcu_Ip_Cfg.c file and Lcu_Ip_Cfg.h file are of the same Software version */
#if ((LCU_IP_CFG_SW_MAJOR_VERSION_C != LCU_IP_CFG_SW_MAJOR_VERSION) || \
     (LCU_IP_CFG_SW_MINOR_VERSION_C != LCU_IP_CFG_SW_MINOR_VERSION) || \
     (LCU_IP_CFG_SW_PATCH_VERSION_C != LCU_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lcu_Ip_Cfg.c and Lcu_Ip_Cfg.h are different"
#endif

/**
* @page misra_violations MISRA-C:2012 violations
**/

#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
