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

#ifndef POWER_IP_CFG_DEFINES_H
#define POWER_IP_CFG_DEFINES_H

/**
*   @file       Power_Ip_Cfg_Defines.h
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup POWER_DRIVER_CONFIGURATION Power Ip Driver
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
#include "StandardTypes.h"
#include "S32K344_MC_ME.h"
#include "S32K344_MC_RGM.h"
#include "S32K344_PMC.h"
#include "S32K344_FLASH.h"
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_CFG_DEFINES_VENDOR_ID                       43
#define POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        4
#define POWER_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define POWER_IP_CFG_DEFINES_SW_MAJOR_VERSION                1
#define POWER_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define POWER_IP_CFG_DEFINES_SW_PATCH_VERSION                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Power_Ip_Cfg_Defines.h file and StandardTypes.h file are of the same Autosar version */
#if ((POWER_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_Cfg_Defines.h and StandardTypes.h are different"
#endif
#endif
/*==================================================================================================
                                           DEFINES AND MACROS
==================================================================================================*/
/**
* @brief            Derivative used.
*/
#define POWER_IP_S32K344


/**
* @brief            If this parameter is set to TRUE, the Reset Generation Module (RGM) initialization has to be disabled from the MCU driver.
*/
#define POWER_IP_DISABLE_RGM_INIT      (STD_OFF)


/**
* @brief            If this parameter is set to TRUE, the Power Management Controller (PMC) initialization has to be disabled from the MCU driver.
*/
#define POWER_IP_DISABLE_PMC_INIT      (STD_ON)

/**
* @brief            Support for Low Power mode.
*/
#define POWER_IP_ENTER_LOW_POWER_MODE   (STD_ON)


/**
* @brief
*/
#define POWER_IP_PERFORM_RESET_API   (STD_ON)


/**
* @brief            Configure PRTNm_COREn_ADDR registers
*/
#define POWER_IP_CONFIGURE_CADDRN    (STD_OFF)


/**
* @brief            Support for Functional Reset Disable (FERD regiter present).
*/
#define POWER_IP_FUNCTIONAL_RESET_DISABLE_SUPPORT         (STD_ON)


/**
* @brief            Max number of MC_ME partitions.
*/
#define POWER_IP_MAX_NUMBER_OF_PARTITIONS       ((uint8)3U)

/**
* @brief            ISR Mcu_ResetAlternate_ISR is/isn't available (STD_ON/STD_OFF)
*/
#define POWER_IP_RESET_ALTERNATE_ISR_USED            (STD_OFF)


#define POWER_IP_HAS_OUTPUT_SAFE_STATE     (STD_OFF)


#define POWER_IP_RESET_DURING_STANDBY_SUPPORTED  (STD_ON)


#define POWER_IP_RESET_DOMAINS_SUPPORTED             (STD_OFF)

/**
* @brief            ISR Mcu_PMC_UnderOverVoltage_ISR is/isn't available (STD_ON/STD_OFF)
*/
#define POWER_IP_VOLTAGE_ERROR_ISR_USED              (STD_OFF)
/**
* @brief            Create defines with the values assigned to Mcu Reset Reason configurations.
*                   These values can be  retrieved from Mcu_GetResetReason Api.
*/


#define McuConf_McuResetReasonConf_MCU_POWER_ON_RESET   ((uint8)0U)


#define McuConf_McuResetReasonConf_MCU_FCCU_FTR_RESET   ((uint8)1U)


#define McuConf_McuResetReasonConf_MCU_STCU_URF_RESET   ((uint8)2U)


#define McuConf_McuResetReasonConf_MCU_MC_RGM_FRE_RESET   ((uint8)3U)


#define McuConf_McuResetReasonConf_MCU_FXOSC_FAIL_RESET   ((uint8)4U)


#define McuConf_McuResetReasonConf_MCU_PLL_LOL_RESET   ((uint8)5U)


#define McuConf_McuResetReasonConf_MCU_CORE_CLK_FAIL_RESET   ((uint8)6U)


#define McuConf_McuResetReasonConf_MCU_AIPS_PLAT_CLK_FAIL_RESET   ((uint8)7U)


#define McuConf_McuResetReasonConf_MCU_HSE_CLK_FAIL_RESET   ((uint8)8U)


#define McuConf_McuResetReasonConf_MCU_SYS_DIV_FAIL_RESET   ((uint8)9U)


#define McuConf_McuResetReasonConf_MCU_HSE_TMPR_RST_RESET   ((uint8)10U)


#define McuConf_McuResetReasonConf_MCU_HSE_SNVS_RST_RESET   ((uint8)11U)


#define McuConf_McuResetReasonConf_MCU_SW_DEST_RESET   ((uint8)12U)


#define McuConf_McuResetReasonConf_MCU_DEBUG_DEST_RESET   ((uint8)13U)


#define McuConf_McuResetReasonConf_MCU_F_EXR_RESET   ((uint8)14U)


#define McuConf_McuResetReasonConf_MCU_FCCU_RST_RESET   ((uint8)15U)


#define McuConf_McuResetReasonConf_MCU_ST_DONE_RESET   ((uint8)16U)


#define McuConf_McuResetReasonConf_MCU_SWT0_RST_RESET   ((uint8)17U)


#define McuConf_McuResetReasonConf_MCU_SWT1_RST_RESET   ((uint8)18U)


#define McuConf_McuResetReasonConf_MCU_JTAG_RST_RESET   ((uint8)19U)


#define McuConf_McuResetReasonConf_MCU_HSE_SWT_RST_RESET   ((uint8)20U)


#define McuConf_McuResetReasonConf_MCU_HSE_BOOT_RST_RESET   ((uint8)21U)


#define McuConf_McuResetReasonConf_MCU_SW_FUNC_RESET   ((uint8)22U)


#define McuConf_McuResetReasonConf_MCU_DEBUG_FUNC_RESET   ((uint8)23U)


#define McuConf_McuResetReasonConf_MCU_WAKEUP_REASON   ((uint8)24U)


#define McuConf_McuResetReasonConf_MCU_NO_RESET_REASON   ((uint8)25U)


#define McuConf_McuResetReasonConf_MCU_MULTIPLE_RESET_REASON   ((uint8)26U)


#define McuConf_McuResetReasonConf_MCU_RESET_UNDEFINED   ((uint8)27U)



/**
* @brief           This define controls the availability of function Mcu_SleepOnExit
*/
#define POWER_IP_SLEEPONEXIT_SUPPORT    (STD_ON)


/**
* @brief            Support Mc_Me COFB (COFB regiter present).
*/
#define POWER_IP_MC_ME_COFB_SUPPORT         (STD_ON)

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
#endif /* #ifndef POWER_IP_CFG_DEFINES_H */


