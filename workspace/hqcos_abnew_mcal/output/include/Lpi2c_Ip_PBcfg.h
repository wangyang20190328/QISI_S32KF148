/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : LPI2C
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.1
* Build Version : S32K1_RTD_1_0_1_D2202_ASR_REL_4_4_REV_0000_20220224
*
* (c) Copyright 2020-2022 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef LPI2C_IP_PBCFG_H
#define LPI2C_IP_PBCFG_H

/**
*   @file
*
*   @addtogroup LPI2C_DRIVER_CONFIGURATION Lpi2c Driver Configurations
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
#include "Lpi2c_Ip.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPI2C_IP_PBCFG_VENDOR_ID                     43
#define LPI2C_IP_PBCFG_MODULE_ID                     255
#define LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION      4
#define LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION      4
#define LPI2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION   0
#define LPI2C_IP_PBCFG_SW_MAJOR_VERSION              1
#define LPI2C_IP_PBCFG_SW_MINOR_VERSION              0
#define LPI2C_IP_PBCFG_SW_PATCH_VERSION              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and Lpi2c_Ip.h header file are of the same vendor */
#if (LPI2C_IP_PBCFG_VENDOR_ID != LPI2C_IP_VENDOR_ID)
    #error "Lpi2c_Ip_PBcfg.c and Lpi2c_Ip.h have different vendor ids"
#endif
/* Check if current file and Lpi2c_Ip.h header file are of the same Autosar version */
#if ((LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION != LPI2C_IP_AR_RELEASE_MAJOR_VERSION) || \
     (LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION != LPI2C_IP_AR_RELEASE_MINOR_VERSION) || \
     (LPI2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION != LPI2C_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lpi2c_Ip_PBcfg.c and Lpi2c_Ip.h are different"
#endif
/* Check if current file and Lpi2c_Ip.h header file are of the same Software version */
#if ((LPI2C_IP_PBCFG_SW_MAJOR_VERSION != LPI2C_IP_SW_MAJOR_VERSION) || \
     (LPI2C_IP_PBCFG_SW_MINOR_VERSION != LPI2C_IP_SW_MINOR_VERSION) || \
     (LPI2C_IP_PBCFG_SW_PATCH_VERSION != LPI2C_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lpi2c_Ip_PBcfg.c and Lpi2c_Ip.h are different"
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



/* Channel configuration for channel LPI2C_0 - configured as master */
extern const Lpi2c_Ip_MasterConfigType I2c_Lpi2cMasterChannel0;


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

#endif /* LPI2C_IP_PBCFG_H */
