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

/**
*   @file   Lin_Ipw_PBcfg.c
*   @implements Lin_Ipw_PBcfg.c_Artifact
*
*   @internal
*   @addtogroup LIN_IPW
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
#include "Lin_Ipw_Cfg.h"
#include "Lpuart_Lin_Ip_Cfg.h"
#if (STD_ON == LIN_FLEXIO_USED)
#include "Flexio_Lin_Ip_Cfg.h"
#endif


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LIN_IPW_PBCFG_VENDOR_ID_C                     43
#define LIN_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LIN_IPW_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LIN_IPW_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LIN_IPW_PBCFG_SW_MAJOR_VERSION_C              1
#define LIN_IPW_PBCFG_SW_MINOR_VERSION_C              0
#define LIN_IPW_PBCFG_SW_PATCH_VERSION_C              1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Lin_Ipw_Cfg.h */
#if (LIN_IPW_PBCFG_VENDOR_ID_C != LIN_IPW_CFG_VENDOR_ID)
    #error "Lin_Ipw_PBcfg.c and Lin_Ipw_Cfg.h have different vendor ids"
#endif
#if ((LIN_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LIN_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_REVISION_VERSION_C != LIN_IPW_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Lin_Ipw_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif
#if ((LIN_IPW_PBCFG_SW_MAJOR_VERSION_C != LIN_IPW_CFG_SW_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_MINOR_VERSION_C != LIN_IPW_CFG_SW_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_PATCH_VERSION_C != LIN_IPW_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_PBcfg.c and Lin_Ipw_Cfg.h are different"
#endif

/* Checks against Lpuart_Lin_Ip_Cfg.h */
#if (LIN_IPW_PBCFG_VENDOR_ID_C != LPUART_LIN_IP_CFG_VENDOR_ID)
    #error "Lin_Ipw_PBcfg.c and Lpuart_Lin_Ip_Cfg.h have different vendor ids"
#endif
#if ((LIN_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != LPUART_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_MINOR_VERSION_C    != LPUART_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_REVISION_VERSION_C != LPUART_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Lin_Ipw_PBcfg.c and Lpuart_Lin_Ip_Cfg.h are different"
#endif
#if ((LIN_IPW_PBCFG_SW_MAJOR_VERSION_C != LPUART_LIN_IP_CFG_SW_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_MINOR_VERSION_C != LPUART_LIN_IP_CFG_SW_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_PATCH_VERSION_C != LPUART_LIN_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_PBcfg.c and Lpuart_Lin_Ip_Cfg.h are different"
#endif

#if (STD_ON == LIN_FLEXIO_USED)
/* Checks against Flexio_Lin_Ip_Cfg.h */
#if (LIN_IPW_PBCFG_VENDOR_ID_C != FLEXIO_LIN_IP_CFG_VENDOR_ID)
    #error "Lin_Ipw_PBcfg.c and Flexio_Lin_Ip_Cfg.h have different vendor ids"
#endif
#if ((LIN_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != FLEXIO_LIN_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_MINOR_VERSION_C    != FLEXIO_LIN_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_AR_RELEASE_REVISION_VERSION_C != FLEXIO_LIN_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Lin_Ipw_PBcfg.c and Flexio_Lin_Ip_Cfg.h are different"
#endif
#if ((LIN_IPW_PBCFG_SW_MAJOR_VERSION_C != FLEXIO_LIN_IP_CFG_SW_MAJOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_MINOR_VERSION_C != FLEXIO_LIN_IP_CFG_SW_MINOR_VERSION) || \
     (LIN_IPW_PBCFG_SW_PATCH_VERSION_C != FLEXIO_LIN_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lin_Ipw_PBcfg.c and Flexio_Lin_Ip_Cfg.h are different"
#endif
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"

/**
* @brief   Export LPUART_LIN configurations.
*/
LPUART_LIN_IP_CONFIG_EXT

#if (STD_ON == LIN_FLEXIO_USED)
/**
* @brief   Export FLEXIO_LIN configurations.
*/
FLEXIO_LIN_IP_CONFIG_EXT
#endif
/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
/**
*
* @brief          Hardware configuration for Lin Hardware Instance LPUART_IP_2 - Configuration:
*
*
*/
const Lin_HwConfigType Lin_Ipw_pHwConfigPB_0 =
{
    LPUART_IP_2,
#if (LIN_WAKEUP_DETECTION == STD_ON)
    (boolean)FALSE, /* Wakeup support disabled */
    (EcuM_WakeupSourceType)LIN_NONE_ECUM_WAKEUP_SOURCE_REF, /* None Wakeup Source was referred */

#endif
    LIN_MASTER_NODE, /* Lin Node Type */
    
    LIN_LPUART_CHANNEL, /*Hardware type*/
    {
        &Lpuart_Lin_Ip_pHwConfigPB_0
    #if (STD_ON == LIN_FLEXIO_USED)
        ,
        NULL_PTR
    #endif
    }
    


};
/**
*
* @brief          Hardware configuration for Lin Hardware Instance LPUART_IP_1 - Configuration:
*
*
*/
const Lin_HwConfigType Lin_Ipw_pHwConfigPB_1 =
{
    LPUART_IP_1,
#if (LIN_WAKEUP_DETECTION == STD_ON)
    (boolean)FALSE, /* Wakeup support disabled */
    (EcuM_WakeupSourceType)LIN_NONE_ECUM_WAKEUP_SOURCE_REF, /* None Wakeup Source was referred */

#endif
    LIN_MASTER_NODE, /* Lin Node Type */
    
    LIN_LPUART_CHANNEL, /*Hardware type*/
    {
        &Lpuart_Lin_Ip_pHwConfigPB_1
    #if (STD_ON == LIN_FLEXIO_USED)
        ,
        NULL_PTR
    #endif
    }
    


};


#define LIN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"
/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
