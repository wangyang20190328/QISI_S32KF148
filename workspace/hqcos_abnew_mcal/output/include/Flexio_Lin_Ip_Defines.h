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

#ifndef FLEXIO_LIN_IP_DEFINES_H
#define FLEXIO_LIN_IP_DEFINES_H

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
#include "Mcal.h"

#include "S32K148_FLEXIO.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FLEXIO_LIN_IP_DEFINES_VENDOR_ID                    43
#define FLEXIO_LIN_IP_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define FLEXIO_LIN_IP_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define FLEXIO_LIN_IP_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define FLEXIO_LIN_IP_DEFINES_SW_MAJOR_VERSION             1
#define FLEXIO_LIN_IP_DEFINES_SW_MINOR_VERSION             0
#define FLEXIO_LIN_IP_DEFINES_SW_PATCH_VERSION             1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ((FLEXIO_LIN_IP_DEFINES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (FLEXIO_LIN_IP_DEFINES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Flexio_Lin_Ip_Defines.h and Mcal.h are different"
    #endif
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @ brief   Switches the Development Error Detection and Notification ON or OFF.
*
*
*/
#define FLEXIO_LIN_IP_DEV_ERROR_DETECT               (STD_OFF) /*!< Development error detection */

/**
* @brief          Lin Osif source counter
* @details        This parameter is used to select between different OsIf counter implementation
*
*
*/
#define  FLEXIO_LIN_IP_TIMEOUT_TYPE      (OSIF_COUNTER_DUMMY)

/**
* @brief   Number of loops before returning FLEXIO_STATUS_TIMEOUT.
*
*
*/
#define FLEXIO_LIN_IP_TIMEOUT_VALUE_US    (1000U)

/**
* @brief   Total number of flexio channels
*
*/
#define FLEXIO_LIN_IP_NUMBER_OF_CHANNELS (2U)


/**
* @brief   Total number of flexio shifters
*
*/
#define FLEXIO_LIN_IP_NUMBER_OF_FLEXIO_SHIFTERS    (4U)

#if (FLEXIO_LIN_IP_DEV_ERROR_DETECT == STD_ON)
    #define FLEXIO_LIN_IP_DEV_ASSERT(x)      DevAssert(x)
#endif /* (FLEXIO_LIN_IP_DEV_ERROR_DETECT == STD_ON) */

/**
*
* @internal
* @brief          Lin FlexIO Used
* @details        When LinGlobalConfig/LinChannel/LinHwChannel contains FLEXIO.
*
*
*/
#define LIN_FLEXIO_IP_USED (STD_OFF) /* No Used Flexio */

/**
* @brief   Enable/Disable timeout feature.
*
*
*/
#define FLEXIO_LIN_IP_FRAME_TIMEOUT_DISABLE        (STD_ON)


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

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* FLEXIO_LIN_IP_CFG_H */
