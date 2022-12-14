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

#ifndef FLEXIO_LIN_IP_CFG_H
#define FLEXIO_LIN_IP_CFG_H

/**
*   @file
*
*   @addtogroup FLEXIO_IP
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
* 4) user callback header files
==================================================================================================*/
#include "Flexio_Lin_Ip_PBcfg.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FLEXIO_LIN_IP_CFG_VENDOR_ID                    43
#define FLEXIO_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define FLEXIO_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION     4
#define FLEXIO_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define FLEXIO_LIN_IP_CFG_SW_MAJOR_VERSION             1
#define FLEXIO_LIN_IP_CFG_SW_MINOR_VERSION             0
#define FLEXIO_LIN_IP_CFG_SW_PATCH_VERSION             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Checks against Flexio_Lin_Ip_PBcfg.h */
#if (FLEXIO_LIN_IP_CFG_VENDOR_ID != FLEXIO_LIN_IP_PBCFG_VENDOR_ID)
    #error "Flexio_Lin_Ip_Cfg.h and Flexio_Lin_Ip_PBcfg.h have different vendor ids"
#endif
#if ((FLEXIO_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION    != FLEXIO_LIN_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXIO_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION    != FLEXIO_LIN_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (FLEXIO_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION != FLEXIO_LIN_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Flexio_Lin_Ip_Cfg.h and Flexio_Lin_Ip_PBcfg.h are different"
#endif
#if ((FLEXIO_LIN_IP_CFG_SW_MAJOR_VERSION != FLEXIO_LIN_IP_PBCFG_SW_MAJOR_VERSION) || \
     (FLEXIO_LIN_IP_CFG_SW_MINOR_VERSION != FLEXIO_LIN_IP_PBCFG_SW_MINOR_VERSION) || \
     (FLEXIO_LIN_IP_CFG_SW_PATCH_VERSION != FLEXIO_LIN_IP_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Flexio_Lin_Ip_Cfg.h and Flexio_Lin_Ip_PBcfg.h are different"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define FLEXIO_LIN_IP_CONFIG_EXT \
    FLEXIO_LIN_IP_CONFIG_PB
/*==================================================================================================
*                                            ENUMS
==================================================================================================*/

/*==================================================================================================
*                               STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/
#define LIN_START_SEC_CODE
#include "Lin_MemMap.h"

extern void Flexio_Lin_Ipw_Callback(const uint8 Instance, const Flexio_Lin_Ip_StateStructType * FlexioStateStruct);



#define LIN_STOP_SEC_CODE
#include "Lin_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* FLEXIO_LIN_IP_CFG_H */
