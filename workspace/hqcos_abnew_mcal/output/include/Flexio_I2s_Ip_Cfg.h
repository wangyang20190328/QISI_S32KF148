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

#ifndef FLEXIO_I2S_IP_CFG_H
#define FLEXIO_I2S_IP_CFG_H

/**
*   @file
*
*   @addtogroup flexio_i2s_ip_config Flexio_I2s IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
#include "Flexio_I2s_Ip_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_I2S_IP_CFG_VENDOR_ID                       43
#define FLEXIO_I2S_IP_CFG_AR_RELEASE_MAJOR_VERSION        4
#define FLEXIO_I2S_IP_CFG_AR_RELEASE_MINOR_VERSION        4
#define FLEXIO_I2S_IP_CFG_AR_RELEASE_REVISION_VERSION     0
#define FLEXIO_I2S_IP_CFG_SW_MAJOR_VERSION                1
#define FLEXIO_I2S_IP_CFG_SW_MINOR_VERSION                0
#define FLEXIO_I2S_IP_CFG_SW_PATCH_VERSION                1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if current file and StandardTypes header file are of the same Autosar version */
#if ((FLEXIO_I2S_IP_CFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_I2S_IP_CFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Flexio_I2s_Ip_Cfg.h and StandardTypes.h are different"
#endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if current file and Flexio_I2s_Ip_PBcfg.h file are of the same vendor */
#if (FLEXIO_I2S_IP_CFG_VENDOR_ID != FLEXIO_I2S_IP_PBCFG_VENDOR_ID)
    #error "Flexio_I2s_Ip_Cfg.h and Flexio_I2s_Ip_PBcfg.h have different vendor IDs"
#endif

/* Check if current file and Flexio_I2s_Ip_PBcfg.h file are of the same Autosar version */
#if ((FLEXIO_I2S_IP_CFG_AR_RELEASE_MAJOR_VERSION != FLEXIO_I2S_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_I2S_IP_CFG_AR_RELEASE_MINOR_VERSION != FLEXIO_I2S_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_I2S_IP_CFG_AR_RELEASE_REVISION_VERSION != FLEXIO_I2S_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Flexio_I2s_Ip_Cfg.h and Flexio_I2s_Ip_PBcfg.h are different"
#endif

/* Check if current file and Flexio_I2s_Ip_PBcfg.h file are of the same software version */
#if ((FLEXIO_I2S_IP_CFG_SW_MAJOR_VERSION != FLEXIO_I2S_IP_PBCFG_SW_MAJOR_VERSION) || \
     (FLEXIO_I2S_IP_CFG_SW_MINOR_VERSION != FLEXIO_I2S_IP_PBCFG_SW_MINOR_VERSION) || \
     (FLEXIO_I2S_IP_CFG_SW_PATCH_VERSION != FLEXIO_I2S_IP_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Flexio_I2s_Ip_Cfg.h and Flexio_I2s_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

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
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* FLEXIO_I2S_IP_CFG_H */
