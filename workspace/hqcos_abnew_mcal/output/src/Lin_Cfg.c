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
*   @file   Lin_Cfg.c
*   @implements Lin_Cfg.c_Artifact
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

#include "StandardTypes.h"
#include "Lin_Cfg.h"

#if (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif /* (LIN_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF) */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define LIN_CFG_VENDOR_ID_C                    43
#define LIN_CFG_AR_RELEASE_MAJOR_VERSION_C     4
#define LIN_CFG_AR_RELEASE_MINOR_VERSION_C     4
#define LIN_CFG_AR_RELEASE_REVISION_VERSION_C  0
#define LIN_CFG_SW_MAJOR_VERSION_C             1
#define LIN_CFG_SW_MINOR_VERSION_C             0
#define LIN_CFG_SW_PATCH_VERSION_C             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#if (LIN_CFG_VENDOR_ID_C != LIN_CFG_VENDOR_ID)
    #error "Lin_Cfg.c and Lin_Cfg.h have different vendor ids"
#endif
/* Check if current file and Lin_Cfg header file are of the same Autosar version */
#if ((LIN_CFG_AR_RELEASE_MAJOR_VERSION_C    != LIN_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (LIN_CFG_AR_RELEASE_MINOR_VERSION_C    != LIN_CFG_AR_RELEASE_MINOR_VERSION) || \
     (LIN_CFG_AR_RELEASE_REVISION_VERSION_C != LIN_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Lin_Cfg.c and Lin_Cfg.h are different"
#endif
/* Check if current file and Lin_Cfg header file are of the same Software version */
#if ((LIN_CFG_SW_MAJOR_VERSION_C != LIN_CFG_SW_MAJOR_VERSION) || \
     (LIN_CFG_SW_MINOR_VERSION_C != LIN_CFG_SW_MINOR_VERSION) || \
     (LIN_CFG_SW_PATCH_VERSION_C != LIN_CFG_SW_PATCH_VERSION) )
    #error "Software Version Numbers of Lin_Cfg.c and Lin_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes.h header file are of the same Autosar version */
    #if ((LIN_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (LIN_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lin_Cfg.c and StandardTypes.h are different"
    #endif

    #if (STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS)
        /* Check if current file and Dem.h header file are of the same Autosar version */
        #if ((LIN_CFG_AR_RELEASE_MAJOR_VERSION_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
             (LIN_CFG_AR_RELEASE_MINOR_VERSION_C != DEM_AR_RELEASE_MINOR_VERSION))
            #error "AutoSar Version Numbers of Lin_Cfg.c and Dem.h are different"
        #endif
    #endif /* STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS */
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define LIN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Lin_MemMap.h"


#if (STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS)
/**
 * @brief   DEM error parameters
 */
const Mcal_DemErrorType  Lin_E_TimeoutCfg =
{

    (uint32)STD_OFF,
    0U

};
#endif /* STD_OFF == LIN_DISABLE_DEM_REPORT_ERROR_STATUS */

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

#ifdef __cplusplus
}
#endif

/** @} */
