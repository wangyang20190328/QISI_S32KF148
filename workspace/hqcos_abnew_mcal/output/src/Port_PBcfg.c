/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : PORT_CI
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
*   @file    Port_PBcfg.c
*
*   @implements Port_PBcfg.c_Artifact
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port.h"


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_VENDOR_ID_PBCFG_C                       43
#define PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C        4
#define PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C        4
#define PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C     0
#define PORT_SW_MAJOR_VERSION_PBCFG_C                1
#define PORT_SW_MINOR_VERSION_PBCFG_C                0
#define PORT_SW_PATCH_VERSION_PBCFG_C                1

/*=================================================================================================
*                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if the files Port_PBcfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_PBCFG_C != PORT_VENDOR_ID)
    #error "Port_PBcfg.c and Port.h have different vendor ids"
#endif
/* Check if the files Port_PBcfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MAJOR_VERSION)  || \
     (PORT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != PORT_AR_RELEASE_MINOR_VERSION)  || \
     (PORT_AR_RELEASE_REVISION_VERSION_PBCFG_C != PORT_AR_RELEASE_REVISION_VERSION)  \
    )
    #error "AutoSar Version Numbers of Port_PBcfg.c and Port.h are different"
#endif
/* Check if the files Port_PBcfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_PBCFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_PBCFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_PBCFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_PBcfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/
/**
* @brief The number of configured Digital Filter Ports
*/
#define PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8         (0U)

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define PORT_START_SEC_CONFIG_DATA_8
#include "Port_MemMap.h"
/**
* @brief Array containing list of partition which used in driver
*/
static const uint8 au8Port_PartitionList[PORT_MAX_PARTITION] =
{
    (uint8)1
};
#define PORT_STOP_SEC_CONFIG_DATA_8
#include "Port_MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_32
#include "Port_MemMap.h"
/**
* @brief Array containing list of mapping information for mappable elements
*/
static const uint32 au32Port_PinToPartitionMap[PORT_MAX_CONFIGURED_PADS_U16] =
{
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001
};
#define PORT_STOP_SEC_CONFIG_DATA_32
#include "Port_MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_16
#include "Port_MemMap.h"

#if (0UL != PORT_MAX_UNUSED_PADS_U16)
/**
* @brief NoDefaultPadsArray is an array containing Unimplemented pads and User pads
*/
static const uint16 Port_au16NoUnUsedPadsArrayDefault[PORT_MAX_UNUSED_PADS_U16]=
{
    (uint16)11,
    (uint16)12,
    (uint16)13,
    (uint16)26,
    (uint16)27,
    (uint16)28,
    (uint16)29,
    (uint16)30,
    (uint16)31,
    (uint16)32,
    (uint16)33,
    (uint16)34,
    (uint16)35,
    (uint16)37,
    (uint16)50,
    (uint16)57,
    (uint16)59,
    (uint16)60,
    (uint16)61,
    (uint16)67,
    (uint16)78,
    (uint16)79,
    (uint16)80,
    (uint16)83,
    (uint16)87,
    (uint16)100,
    (uint16)111,
    (uint16)112,
    (uint16)114,
    (uint16)115,
    (uint16)134,
    (uint16)137,
    (uint16)142,
    (uint16)146,
    (uint16)153
};
#endif

#define PORT_STOP_SEC_CONFIG_DATA_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"
/**
 * @brief Default Configuration for Pins not initialized
 */
static const Port_UnUsedPinConfigType Port_UnUsedPin =
{
    /* @note: Configuration of Default pin */
    (uint32)0x00000100, (Port_PinDirectionType)1, (uint8)0
};

/**
* @brief Pin default configuration data for configPB
*/
static const Port_PinConfigType Port_aPinConfigDefault[PORT_MAX_CONFIGURED_PADS_U16]=
{
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)0, (uint32)0x00000303, (uint8)1, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)1, (uint32)0x00000303, (uint8)1, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)2, (uint32)0x00000603, (uint8)1, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)3, (uint32)0x00000603, (uint8)1, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)6, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)7, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)8, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)9, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)14, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)15, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)16, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)17, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)18, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)19, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)20, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)21, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)22, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)23, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)24, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)25, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)36, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)40, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)41, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)42, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)43, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)44, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)45, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)46, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)47, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)48, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)49, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)51, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)52, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)53, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)54, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)55, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)56, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)58, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)62, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)63, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)64, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)65, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)66, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)70, (uint32)0x00000303, (uint8)1, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)71, (uint32)0x00000303, (uint8)1, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)72, (uint32)0x00000200, (uint8)0, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)73, (uint32)0x00000200, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)74, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)75, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)76, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)77, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)81, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)82, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)84, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)85, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)86, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)88, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)89, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)90, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)91, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)92, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)93, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)94, (uint32)0x00000200, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)95, (uint32)0x00000200, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)96, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)97, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)98, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)99, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)101, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)102, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)103, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)104, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)105, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)106, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)107, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)108, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)3, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)109, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)110, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)113, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)116, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)117, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)118, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)119, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)120, (uint32)0x00000000, (uint8)2, (Port_PinDirectionType)0, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)121, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)122, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)123, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)124, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)125, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)126, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)127, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)128, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)129, (uint32)0x00000400, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)130, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)131, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)132, (uint32)0x00000503, (uint8)1, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)133, (uint32)0x00000503, (uint8)1, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)135, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)136, (uint32)0x00000500, (uint8)0, (Port_PinDirectionType)3, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)138, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)139, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)140, (uint32)0x00000100, (uint8)1, (Port_PinDirectionType)2, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)141, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)143, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)1, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)144, (uint32)0x00000300, (uint8)0, (Port_PinDirectionType)2, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)145, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)147, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)148, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)149, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)150, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)151, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)152, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)154, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE},
    /* PCR Id, PCR Value, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable */
    {(uint16)155, (uint32)0x00000100, (uint8)0, (Port_PinDirectionType)1, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE}

};

#if (0UL != PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8)
static const Port_Ci_Port_Ip_DigitalFilterConfigType Port_aDigitalFilter[PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8]=
{

};
#endif /* (0UL != PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8) */

/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the post-build mode
* that will be used by the upper layers.
*/
const Port_ConfigType Port_Config =
{
    PORT_MAX_CONFIGURED_PADS_U16,
    PORT_MAX_UNUSED_PADS_U16,
#if (0UL != PORT_MAX_UNUSED_PADS_U16)
    Port_au16NoUnUsedPadsArrayDefault,
#else
    NULL_PTR,
#endif
    &Port_UnUsedPin,
    Port_aPinConfigDefault,
    PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8,
#if (0UL != PORT_MAX_CONFIGURED_DIGITAL_FILTER_PORTS_U8)
    Port_aDigitalFilter,
#else
    NULL_PTR,
#endif
    au32Port_PinToPartitionMap,
    au8Port_PartitionList,
    g_pin_mux_InitConfigArr
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"
/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/


#ifdef __cplusplus
}
#endif
/** @} */

/* End of File */
