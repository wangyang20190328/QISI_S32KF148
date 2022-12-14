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
#ifndef FLEXIO_I2C_IP_CFG_H
#define FLEXIO_I2C_IP_CFG_H

/**
*   @file
*
*   @addtogroup FLEXIO_I2C_DRIVER_CONFIGURATION Flexio_I2c Driver Configurations
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXIO_I2C_IP_CFG_VENDOR_ID                     43
#define FLEXIO_I2C_IP_CFG_MODULE_ID                     255
#define FLEXIO_I2C_IP_CFG_AR_RELEASE_MAJOR_VERSION      4
#define FLEXIO_I2C_IP_CFG_AR_RELEASE_MINOR_VERSION      4
#define FLEXIO_I2C_IP_CFG_AR_RELEASE_REVISION_VERSION   0
#define FLEXIO_I2C_IP_CFG_SW_MAJOR_VERSION              1
#define FLEXIO_I2C_IP_CFG_SW_MINOR_VERSION              0
#define FLEXIO_I2C_IP_CFG_SW_PATCH_VERSION              1

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


/**
* @brief          FLEXIO Channel Used
*/
#define FLEXIO_I2C_IP_ENABLE   (STD_OFF)

#if(FLEXIO_I2C_IP_ENABLE == STD_ON)
    
#define FLEXIO_I2C_IP_NUMBER_OF_MASTER_CHANNEL 0U





/**
* @brief            Error detection for IP layer 
*/
#define FLEXIO_I2C_IP_DEV_ERROR_DETECT   (STD_ON)  /* Enable Development Error Detection for IP */

/**
* @brief            Error events of the i2c module enable/disabled
*/
#define FLEXIO_I2C_IP_EVENT_ERROR_DETECT   (STD_OFF) /* Disable Development Error Detection for IP */
/**
* @brief            Dma support enable/disabled
*/
#define FLEXIO_I2C_IP_DMA_FEATURE_AVAILABLE (STD_OFF) /* Disable DMA support for IP */

/**
* @brief            Dma transfer error of the i2c module enable/disabled
*/
#define FLEXIO_I2C_IP_DMA_TRANSFER_ERROR_DETECT   (STD_OFF) /* Disable Dma Transfer Error Detection for IP */

/**
* @brief            FLEXIO timeout type
*/
#define FLEXIO_I2C_IP_TIMEOUT_TYPE                (OSIF_COUNTER_DUMMY)
/**
* @brief            Enable User Mode Support.
*/
#define FLEXIO_I2C_IP_ENABLE_USER_MODE_SUPPORT   (STD_OFF) /* Disable User Mode support for IP */
/** Check the driver user mode is enabled only when the MCAL_ENABLE_USER_MODE_SUPPORT is enabled */
#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == FLEXIO_I2C_IP_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running I2C in user mode, the MCAL_ENABLE_USER_MODE_SUPPORT macro needs to be defined.
  #endif /* (STD_ON == FLEXIO_I2C_IP_ENABLE_USER_MODE_SUPPORT) */
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

#endif /* FLEXIO_I2C_IP_ENABLE == STD_OFF */

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

#endif /* FLEXIO_I2C_IP_CFG_H */

