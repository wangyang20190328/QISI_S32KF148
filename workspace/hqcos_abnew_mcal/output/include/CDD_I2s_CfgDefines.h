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

#ifndef CDD_I2S_CFGDEFINES_H
#define CDD_I2S_CFGDEFINES_H

/**
*   @file
*
*   @addtogroup i2s_driver_config
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

#include "OsIf.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define I2S_CFGDEFINES_VENDOR_ID                    43
#define I2S_CFGDEFINES_AR_RELEASE_MAJOR_VERSION     4
#define I2S_CFGDEFINES_AR_RELEASE_MINOR_VERSION     4
#define I2S_CFGDEFINES_AR_RELEASE_REVISION_VERSION  0
#define I2S_CFGDEFINES_SW_MAJOR_VERSION             1
#define I2S_CFGDEFINES_SW_MINOR_VERSION             0
#define I2S_CFGDEFINES_SW_PATCH_VERSION             1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if current file and OsIf header file are of the same Autosar version */
#if ((I2S_CFGDEFINES_AR_RELEASE_MAJOR_VERSION != OSIF_AR_RELEASE_MAJOR_VERSION) || \
     (I2S_CFGDEFINES_AR_RELEASE_MINOR_VERSION != OSIF_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of CDD_I2s.h and OsIf.h are different"
#endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/**
* @brief  This define indicate that the I2s Dev Error Detection is enabled or disabled
*/
#define I2S_DEV_ERROR_DETECT           (STD_ON)
/**
* @brief  This define indicate that the I2s Data Masking for transfer is enabled or disabled
*/
#define I2S_SAI_ENABLE_DATA_MASKING    (I2S_IPW_ENABLE_DATA_MASKING)
/**
* @brief  This define indicate that the I2s Clock will be disabled or enabled after transmission completed
*/
#define I2S_SAI_AUTO_DISABLE_CLOCK     (I2S_IPW_AUTO_DISABLE_CLOCK)
/**
* @brief  This define indicate that the I2s Version Information is enabled or disabled
*/
#define I2S_VERSION_INFO_API           (STD_ON)
/**
* @brief  This define indicate that the I2s User Mode Support is enabled or disabled
*/
#define I2S_ENABLE_USER_MODE_SUPPORT   (STD_OFF)
/**
* @brief  This define indicate that the I2s Multicore Support is enabled or disabled
*/
#define I2S_MULTICORE_ENABLED          (STD_OFF)



/**
* @brief        I2S_PRECOMPILE_SUPPORT.
* @details      I2s precompile support.
*/
#define I2S_PRECOMPILE_SUPPORT            (STD_OFF)

#ifdef I2S_ENABLE_USER_MODE_SUPPORT
    #if(STD_ON == I2S_ENABLE_USER_MODE_SUPPORT)
        /**
        * @brief  This define indicate that the ipv I2S is protected by register protection
        */
        #define I2S_SWT_REG_PROT_AVAILABLE
    #endif /* (STD_ON == I2S_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifdef I2S_ENABLE_USER_MODE_SUPPORT */

/**
* @brief  perform checking marco MCAL_ENABLE_USER_MODE_SUPPORT available or not.
*/
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == I2S_ENABLE_USER_MODE_SUPPORT)
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running I2S in user mode, the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
    #endif /* (STD_ON == I2S_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

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

#endif /* CDD_I2S_CFGDEFINES_H */
