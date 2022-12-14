/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : LPI2C
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
#ifndef I2C_IPW_PBCFG_H
#define I2C_IPW_PBCFG_H

/**
*   @file
*
*   @addtogroup I2C_DRIVER_CONFIGURATION I2c Driver Configurations
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "I2c_Ipw_Types.h"
#if (STD_ON == I2C_FLEXIO_USED)
#include "Flexio_I2c_Ip_PBcfg.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define I2C_IPW_PBCFG_VENDOR_ID                     43
#define I2C_IPW_PBCFG_MODULE_ID                     255
#define I2C_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define I2C_IPW_PBCFG_AR_RELEASE_MINOR_VERSION      4
#define I2C_IPW_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define I2C_IPW_PBCFG_SW_MAJOR_VERSION              1
#define I2C_IPW_PBCFG_SW_MINOR_VERSION              0
#define I2C_IPW_PBCFG_SW_PATCH_VERSION              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and I2c_Cfg header file are of the same module */
#if (I2C_IPW_PBCFG_MODULE_ID   != I2C_IPW_TYPES_MODULE_ID)
    #error "I2c_Ipw_Types.h and I2c_Ipw_PBcfg.h have different vendor ids"
#endif
/* Check if current file and I2c_Types header file are of the same vendor */
#if (I2C_IPW_PBCFG_VENDOR_ID  != I2C_IPW_TYPES_VENDOR_ID)
    #error "I2c_Ipw_Types.h and I2c_Ipw_PBcfg.h have different vendor ids"
#endif
/* Check if current file and I2c_Types header file are of the same Autosar version */
#if (  (I2C_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION    != I2C_IPW_TYPES_AR_RELEASE_MAJOR_VERSION) || \
       (I2C_IPW_PBCFG_AR_RELEASE_MINOR_VERSION    != I2C_IPW_TYPES_AR_RELEASE_MINOR_VERSION) || \
       (I2C_IPW_PBCFG_AR_RELEASE_REVISION_VERSION != I2C_IPW_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of I2c_Ipw_PBcfg.h and I2c_Ipw_Types.h are different"
#endif
/* Check if current file and I2c_Types header file are of the same Software version */
#if ( (I2C_IPW_PBCFG_SW_MAJOR_VERSION != I2C_IPW_TYPES_SW_MAJOR_VERSION) || \
      (I2C_IPW_PBCFG_SW_MINOR_VERSION != I2C_IPW_TYPES_SW_MINOR_VERSION) || \
      (I2C_IPW_PBCFG_SW_PATCH_VERSION != I2C_IPW_TYPES_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of I2c_Ipw_PBcfg.h and I2c_Ipw_Types.h are different"
#endif

#if (STD_ON == I2C_FLEXIO_USED)
#include "Flexio_I2c_Ip_PBcfg.h"

/* Check if current file and Flexio_I2c_Ip_PBcfg header file are of the same module */
#if (I2C_IPW_PBCFG_MODULE_ID   != FLEXIO_I2C_IP_PBCFG_MODULE_ID)
    #error "Flexio_I2c_Ip_PBcfg.h and I2c_Ipw_PBcfg.h have different vendor ids"
#endif
/* Check if current file and Flexio_I2c_Ip_PBcfg header file are of the same vendor */
#if (I2C_IPW_PBCFG_VENDOR_ID  != FLEXIO_I2C_IP_PBCFG_VENDOR_ID)
    #error "Flexio_I2c_Ip_PBcfg.h and I2c_Ipw_PBcfg.h have different vendor ids"
#endif
/* Check if current file and Flexio_I2c_Ip_PBcfg header file are of the same Autosar version */
#if (  (I2C_IPW_PBCFG_AR_RELEASE_MAJOR_VERSION    != FLEXIO_I2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
       (I2C_IPW_PBCFG_AR_RELEASE_MINOR_VERSION    != FLEXIO_I2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
       (I2C_IPW_PBCFG_AR_RELEASE_REVISION_VERSION != FLEXIO_I2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of I2c_Ipw_PBcfg.h and Flexio_I2c_Ip_PBcfg.h are different"
#endif
/* Check if current file and Flexio_I2c_Ip_PBcfg header file are of the same Software version */
#if ( (I2C_IPW_PBCFG_SW_MAJOR_VERSION != FLEXIO_I2C_IP_PBCFG_SW_MAJOR_VERSION) || \
      (I2C_IPW_PBCFG_SW_MINOR_VERSION != FLEXIO_I2C_IP_PBCFG_SW_MINOR_VERSION) || \
      (I2C_IPW_PBCFG_SW_PATCH_VERSION != FLEXIO_I2C_IP_PBCFG_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of I2c_Ipw_PBcfg.h and Flexio_I2c_Ip_PBcfg.h are different"
#endif
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"



extern const Lpi2c_Ipw_HwChannelConfigType I2c_Ipw_ChannelConfig0;


#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* #ifndef I2C_IPW_PBCFG_H */


