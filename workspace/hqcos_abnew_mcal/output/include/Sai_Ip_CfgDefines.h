/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : I2S
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

#ifndef SAI_IP_CFGDEFINES_H
#define SAI_IP_CFGDEFINES_H

/**
*   @file
*
*   @addtogroup sai_ip_config Sai IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "OsIf.h"
#include "S32K148_SAI.h"


/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SAI_IP_CFGDEFINES_VENDOR_ID                    43
#define SAI_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION     4
#define SAI_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION     4
#define SAI_IP_CFGDEFINES_AR_RELEASE_REVISION_VERSION  0
#define SAI_IP_CFGDEFINES_SW_MAJOR_VERSION             1
#define SAI_IP_CFGDEFINES_SW_MINOR_VERSION             0
#define SAI_IP_CFGDEFINES_SW_PATCH_VERSION             1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if current file and StandardTypes header file are of the same Autosar version */
#if ((SAI_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION     != STD_AR_RELEASE_MAJOR_VERSION) || \
     (SAI_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION     != STD_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Sai_Ip_CfgDefines.h and StandardTypes.h are different"
#endif

/* Check if current file and OsIf header file are of the same Autosar version */
#if ((SAI_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION     != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (SAI_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION     != OSIF_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Sai_Ip_CfgDefines.h and OsIf.h are different"
#endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */


/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

#define SAI_IP_ENABLE                     (STD_ON)
#define SAI_IP_DEV_ERROR_DETECT           (STD_ON)
#define SAI_IP_TIMEOUT_TYPE               (OSIF_COUNTER_DUMMY)
#define SAI_IP_INTERNAL_TIMEOUT_VALUE     (50000U)
#define SAI_IP_DMA_FEATURE_AVAILABLE      (STD_OFF)
#define SAI_IP_FPACK_FEATURE_AVAILABLE    (STD_OFF)
#define SAI_IP_BCS_FEATURE_AVAILABLE      (STD_OFF)
#define SAI_IP_ENABLE_DATA_MASKING        (STD_OFF)
#define SAI_IP_AUTO_DISABLE_CLOCK         (STD_ON)
#define SAI_IP_TX_ISR1_USED



/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SAI_IP_CFGDEFINES_H */
