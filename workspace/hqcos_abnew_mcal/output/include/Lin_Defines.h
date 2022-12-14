/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LPUART_FLEXIO
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.1
*   Build Version        : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
*   (c) Copyright 2020-2022 NXP Semiconductors
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

#ifndef LIN_DEFINES_H
#define LIN_DEFINES_H

/**
*   @file
*
*   @defgroup lin_driver LIN Driver
*   @addtogroup  lin_driver LIN Driver
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
#include "Mcal.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LIN_DEFINES_VENDOR_ID                     43
#define LIN_DEFINES_AR_RELEASE_MAJOR_VERSION      4
#define LIN_DEFINES_AR_RELEASE_MINOR_VERSION      4
#define LIN_DEFINES_AR_RELEASE_REVISION_VERSION   0
#define LIN_DEFINES_SW_MAJOR_VERSION              1
#define LIN_DEFINES_SW_MINOR_VERSION              0
#define LIN_DEFINES_SW_PATCH_VERSION              1
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((LIN_DEFINES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LIN_DEFINES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION) \
        )
        #error "AUTOSAR Version Numbers of Lin_Defines.h and Mcal.h are different"
    #endif
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
/**
* @brief          Pre-compile Support.
*
*
*/
#define LIN_PRECOMPILE_SUPPORT  (STD_OFF) 

/**
* @brief   No of Channels configured.
*
*
*/
#define LIN_HW_MAX_MODULES (2U)

/**
* @brief   Total number of available hardware lin channels.
*
*
*/
#define LIN_HW_MAX_AVAILABLE_MODULES (5U)

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*
*
*/
#define LIN_DEV_ERROR_DETECT (STD_OFF)   /* Disable Development Error Detection */

/**
* @brief   Switches the Production Error Detection and Notification OFF
*
*
*/
#define LIN_DISABLE_DEM_REPORT_ERROR_STATUS  (STD_ON) /* Disable Production Error Detection */ 

/**
* @brief          Lin Master Node Used
* @details        When LinGlobalConfig/LinChannel/LinNodeType contains at least one MASTER channel.
*
*
*/
#define LIN_MASTER_NODE_USED  (STD_ON) /* Used Master Node */

/**
* @brief          Support for version info API.
* @details        Switches the Lin_GetVersionInfo() API ON or OFF.
*
*
*/
#define LIN_VERSION_INFO_API (STD_OFF) /* Disable API Lin_GetVersionInfo     */

/**
* @brief        All CoreIDs are supported by LIN driver.
*/

#define LIN_MAX_PARTITIONS     ((uint32)1U)

/**
* @brief          Multicore is enabled or not
*/
#define LIN_MULTICORE_SUPPORT   (STD_OFF) /* Multicore is disabled */

/**
* @brief          Enable Non-Autosar API for Dual-Clock support.
* @details        Enable/Disable API Lin_SetClockMode() to set the
*                 clock to be used by the LIN driver (Normal clock: default mode;
*                 Alternate clock: when the driver is in Low-Power mode).
*                 This can be set to STD_ON only if it is activated from xdm file:
*                 LinClockRef_Alternate is enable.
*
* @api
*/

#define LIN_DUAL_CLOCK_MODE  (STD_OFF) /* Disable API Lin_SetClockMode */ 

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define LIN_UNALLOCATEDPAR_CORE_ID  ((uint32)0x0U)

#if (STD_ON == LIN_MULTICORE_SUPPORT)
    #define Lin_GetCoreID() (OsIf_GetCoreID())
#else
    #define Lin_GetCoreID() (LIN_UNALLOCATEDPAR_CORE_ID)
#endif /* (STD_ON == LIN_MULTICORE_SUPPORT) */

/**
* @brief          LIN driver status initialization variable.
*/
#define LIN_UNINIT_ARRAY  {LIN_UNINIT}

/**
*
* @internal
* @brief          Lin FlexIO Used
* @details        When LinGlobalConfig/LinChannel/LinHwChannel contains FLEXIO.
*
*
*/
#define LIN_FLEXIO_USED (STD_OFF) /* No Used Flexio */
/**
*
* @internal
* @brief          Lin Wakeup detection feature 
* @details        It is set to STD_ON when LinGlobalConfig/LinChannel/WakeupDetectionSupport is enabled.
*
*
*/
#define LIN_WAKEUP_DETECTION (STD_OFF) /* Support wakeup detection */
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

/*==================================================================================================
*                                  EXTERNAL CONSTANTS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LIN_DEFINES_H */
