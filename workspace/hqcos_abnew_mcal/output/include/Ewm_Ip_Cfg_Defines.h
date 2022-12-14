/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Wdog,Ewm
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

#ifndef EWM_IP_CFG_DEFINES_H
#define EWM_IP_CFG_DEFINES_H

/**
*   @file
*
*   @addtogroup Ewm_Ip
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "StandardTypes.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EWM_IP_CFG_DEFINES_VENDOR_ID                    43
#define EWM_IP_CFG_DEFINES_MODULE_ID                    102
#define EWM_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define EWM_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define EWM_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define EWM_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define EWM_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define EWM_IP_CFG_DEFINES_SW_PATCH_VERSION             1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and StandardTypes header file are of the same Autosar version */
    #if ((EWM_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION    != STD_AR_RELEASE_MAJOR_VERSION) || \
        (EWM_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Ewm_Ip_Cfg_Defines.h and StandardTypes.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/**
* @brief  Compile switch to enable development error detection
*/
#define EWM_IP_DEV_ERROR_DETECT (STD_ON)
/**
* @brief  This constant specifies if the instance of the EWM is selected or not
*/
#define EWM_IP_ENABLE           (STD_ON)




/**
* @brief  This variable will indicate if the ISR for EWM instances is used
*/
#define EWM_IP_ISR0_USED (STD_ON)


/**
* @brief  This variable will indicate RAM/ROM execution
*/
#define WDG_ROM (1U)

/**
 * @brief First byte of the EWM Service key
 */
#define EWM_IP_FEATURE_KEY_FIRST_BYTE_U8 (0xB4U)

/**
 * @brief Second byte of the EWM Service key
 */
#define EWM_IP_FEATURE_KEY_SECOND_BYTE_U8 (0x2CU)

/**
 * @brief EWM Compare High register maximum value
 */
#define EWM_IP_FEATURE_CMPH_MAX_VALUE_U8 (0xFEU)


/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* EWM_IP_CFG_DEFINES_H */
