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

#ifndef INTCTRL_IP_CFG_H_
#define INTCTRL_IP_CFG_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_TypesDef.h"

#ifdef S32K116
    #include "S32K116_COMMON.h"
#endif
#ifdef S32K118
    #include "S32K118_COMMON.h"
#endif
#ifdef S32K142
    #include "S32K142_COMMON.h"
#endif
#ifdef S32K142W
    #include "S32K142W_COMMON.h"
#endif
#ifdef S32K144
    #include "S32K144_COMMON.h"
#endif
#ifdef S32K144W
    #include "S32K144W_COMMON.h"
#endif
#ifdef S32K146
    #include "S32K146_COMMON.h"
#endif
#ifdef S32K148
    #include "S32K148_COMMON.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_CFG_VENDOR_ID                          43
#define PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION                   0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_TypesDef header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_CFG_VENDOR_ID != PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID)
    #error "IntCtrl_Ip_Cfg.h and IntCtrl_Ip_TypesDef.h have different vendor ids"
#endif

/* Check if current file and Fls header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION != PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_Cfg.h and IntCtrl_Ip_TypesDef.h are different"
#endif

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* Definition of the configuration structure for Platform IPW */
extern const IntCtrl_Ip_CtrlConfigType intCtrlConfig;


/* Definition of the configuration structure for non core Platform IPW */
extern const IntCtrl_Ip_GlobalRouteConfigType intRouteConfig;

/* Declaration of interrupt handlers 
 * NOTE: For application specific handlers, these functions must be implemented in the application code!
 */
extern void undefined_handler(void);
extern void STM_0_ISR(void);
extern void PIT_0_ISR(void);



#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#endif /* INTCTRL_IP_CFG_H_ */

