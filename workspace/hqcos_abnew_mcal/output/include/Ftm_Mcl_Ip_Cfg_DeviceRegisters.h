/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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

#ifndef FTM_MCL_IP_CFG_DEVICEREGISTERS
#define FTM_MCL_IP_CFG_DEVICEREGISTERS

/**
 *   @file        Ftm_Mcl_Ip_Cfg_DeviceRegisters.h
 *
 *   @addtogroup     
 *   @brief       MCL IPL Precompile defines header file.
 *   @details     Precompile defines.
 *
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
#include "StandardTypes.h"
#include "S32K148_FTM.h"

/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_VENDOR_ID                   43
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION    4
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION    4
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION 0
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION            1
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION            0
#define FTM_MCL_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION            1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if this header file and StandardTypes.h file are of the same Autosar version */
    #if ((FTM_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (FTM_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Ftm_Mcl_Ip_Cfg_DeviceRegisters.h and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** @brief Get FTM type. */
#define Ftm_Mcl_Ip_BaseType                          FTM_Type


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FTM_MCL_IP_CFG_DEVICEREGISTERS */
