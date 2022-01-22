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

#ifndef INTM_IP_CFG_DEFINES_H_
#define INTM_IP_CFG_DEFINES_H_

/**
*   @file
*
*   @addtogroup Intm_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"


#ifdef S32K344
        #include "S32K344_INTM.h"
#endif
#ifdef S32K324
        #include "S32K324_INTM.h"
#endif
#ifdef S32K314
        #include "S32K314_INTM.h"
#endif
#ifdef S32K312
        #include "S32K312_INTM.h"
#endif
        

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTM_IP_CFG_DEFINES_VENDOR_ID                          43
#define PLATFORM_INTM_IP_CFG_DEFINES_SW_MAJOR_VERSION                   1
#define PLATFORM_INTM_IP_CFG_DEFINES_SW_MINOR_VERSION                   0
#define PLATFORM_INTM_IP_CFG_DEFINES_SW_PATCH_VERSION                   0

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/**
* @brief          Enumeration exposing the available interrupt monitors.
* @implements     Intm_Ip_MonitorType_Class
*/
typedef enum
{
    /** @brief Interrupt monitor 0 */
    INTM_IP_MONITOR0,
    /** @brief Interrupt monitor 1 */
    INTM_IP_MONITOR1,
    /** @brief Interrupt monitor 2 */
    INTM_IP_MONITOR2,
    /** @brief Interrupt monitor 3 */
    INTM_IP_MONITOR3
}Intm_Ip_MonitorType;


#endif /* INTM_IP_CFG_DEFINES_H_ */

/** @} */
