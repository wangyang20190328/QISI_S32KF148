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
#include "Lpi2c_Ip_PBCfg.h"
#include "Mcal.h"

#if (STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE)
#include "Dma_Ip.h"
#endif

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPI2C_IP_PBCFG_VENDOR_ID_C                     43
#define LPI2C_IP_PBCFG_MODULE_ID_C                     255
#define LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C      4
#define LPI2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define LPI2C_IP_PBCFG_SW_MAJOR_VERSION_C              1
#define LPI2C_IP_PBCFG_SW_MINOR_VERSION_C              0
#define LPI2C_IP_PBCFG_SW_PATCH_VERSION_C              1


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and I2c header file are of the same vendor */
#if (LPI2C_IP_PBCFG_VENDOR_ID_C != LPI2C_IP_PBCFG_VENDOR_ID)
    #error "Lpi2c_Ip_PBcfg.c and Lpi2c_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if current file and I2c header file are of the same Autosar version */
#if ((LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (LPI2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != LPI2C_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lpi2c_Ip_PBCfg.c and Lpi2c_Ip_PBcfg.h are different"
#endif
/* Check if current file and I2c header file are of the same Software version */
#if ((LPI2C_IP_PBCFG_SW_MAJOR_VERSION_C != LPI2C_IP_PBCFG_SW_MAJOR_VERSION) || \
     (LPI2C_IP_PBCFG_SW_MINOR_VERSION_C != LPI2C_IP_PBCFG_SW_MINOR_VERSION) || \
     (LPI2C_IP_PBCFG_SW_PATCH_VERSION_C != LPI2C_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lpi2c_Ip_PBcfg.c and Lpi2c_Ip_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ( (LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != MCAL_AR_RELEASE_MAJOR_VERSION) || \
          (LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != MCAL_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of Lpi2c_Ip_PBcfg.h and Mcal.h are different"
    #endif

    #if(STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE)
        /* Check if current file and Dma_Ip.h header file are of the same Autosar version */
        #if ( (LPI2C_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
              (LPI2C_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION)    \
             )
            #error "AutoSar Version Numbers of Lpi2c_Ip_PBcfg.c and Dma_Ip.h are different"
        #endif
    #endif /* (STD_ON == LPI2C_IP_DMA_FEATURE_AVAILABLE) */
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


/* Baud rate structure for channel LPI2C_0 */
const Lpi2c_Ip_BaudRateType baudrateParams0 =
{
    LPI2C_MASTER_PRESC_DIV_1,    /* Prescaler */
    38U,    /* ClkHI */
    38U,    /* ClkLO */
    38U,    /* Set Hold */
    1U,    /* Data Valid */
    1U,    /* ClkHI HS */
    3U,    /* ClkLO HS */
    2U,    /* Set Hold HS */
    1U    /* Data Valid HS */
};

/* Channel configuration for channel LPI2C_0 - configured as master */
const Lpi2c_Ip_MasterConfigType I2c_Lpi2cMasterChannel0 =
{
    /* Slave address */
     0U,

    /*10-bit address */
    (boolean)FALSE,

    /* Operating Mode */
    LPI2C_STANDARD_MODE,

    /* Baudrate parameters */
    &baudrateParams0,

    /* Pin Low Timeout */
    0U,

    /* Bus Idle Timeout */
    0U,

    /* Glitch Filter SDA */
    0U,

    /* Glitch Filter SDA */
    0U,

    /* Master code */
    0U,

    /* Transfer Type */
    LPI2C_USING_INTERRUPTS,

    /* Dma Tx Channel */
    
    0U,
    
    /* Dma Rx Channel */
    
    0U,
    

    /* Master Callback */
    NULL_PTR,

    /* Master Callback Parameter */
    0U,

    &Lpi2c_Ip_MasterState[0]
};
    


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

