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
*   @addtogroup I2C_DRIVER_CONFIGURATION I2c Driver Configurations
*   @{
*/

#ifndef CDD_I2C_CFG_H
#define CDD_I2C_CFG_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section I2c_h_REF_1
* Violates MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents
* of a header file being included more than once. This comes from the order of includes in the .c file
* and from include dependencies. As a safe approach, any file must include all its dependencies.
* Header files are already protected against double inclusions. The inclusion of I2c_MemMap.h is as
* per AUTOSAR requirement [SWS_MemMap_00003].
*
* @section I2c_h_REF_2
* Violates MISRA 2012 Required Rule 5.4, Macro identifiers shall be distinct.
* This violation is due to the AUTOSAR requirement which mandates to have a file version check.
*
* @section I2c_h_REF_3
* Violates MISRA 2012 Required Rule 5.1, External identifiers shall be distinct.
* This rule does not apply if either identifier is a macro identifier, because this case is covered
* by Rule 5.4 and Rule 5.5.
*
* @section I2c_h_REF_4
* Violates MISRA 2012 Required Rule 5.2, Identifiers declared in the same scope and name space shall be distinct.
* This rule does not apply if either identifier is a macro identifier, because this case is covered
* by Rule 5.4 and Rule 5.5.
*
* @section I2c_h_REF_5
* Violates MISRA 2012 Required Rule 5.5, Identifiers shall be distinct from macro names.
* The identifier clash is between macro identifiers. Therefore, this rule is incorrectly reported by the tool.
*
* @section I2c_h_REF_6
* Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block scope if its identifier only
* appears in a single function.
* This violation is due to the AUTOSAR requirement [SWS_BSW_00160] (a BSW Module operating on post-build
* configuration data shall use a reference to an EXTERNAL configuration instance).
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"

#include "CDD_I2c_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* Inclusion of incompatible header files shall be avoided */

#define I2C_VENDOR_ID_CFG                    43
#define I2C_MODULE_ID_CFG                    255
#define I2C_AR_RELEASE_MAJOR_VERSION_CFG     4
#define I2C_AR_RELEASE_MINOR_VERSION_CFG     4
#define I2C_AR_RELEASE_REVISION_VERSION_CFG  0
#define I2C_SW_MAJOR_VERSION_CFG             1
#define I2C_SW_MINOR_VERSION_CFG             0
#define I2C_SW_PATCH_VERSION_CFG             1

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if current file and I2c_Cfg header file are of the same module */
#if (I2C_MODULE_ID_CFG  != I2C_PBCFG_MODULE_ID)
    #error "CDD_I2c_Cfg.h and CDD_I2c_PBcfg.h have different vendor ids"
#endif
/* Check if current file and I2c_Types header file are of the same vendor */
#if (I2C_VENDOR_ID_CFG != I2C_PBCFG_VENDOR_ID)
    #error "CDD_I2c_Cfg.h and CDD_I2c_PBcfg.h have different vendor ids"
#endif
/* Check if current file and I2c_Types header file are of the same Autosar version */
#if (  (I2C_AR_RELEASE_MAJOR_VERSION_CFG    != I2C_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
       (I2C_AR_RELEASE_MINOR_VERSION_CFG    != I2C_PBCFG_AR_RELEASE_MINOR_VERSION) || \
       (I2C_AR_RELEASE_REVISION_VERSION_CFG != I2C_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of CDD_I2c_Cfg.h and CDD_I2c_PBcfg.h are different"
#endif
/* Check if current file and I2c_Types header file are of the same Software version */
#if ( (I2C_SW_MAJOR_VERSION_CFG != I2C_PBCFG_SW_MAJOR_VERSION) || \
      (I2C_SW_MINOR_VERSION_CFG != I2C_PBCFG_SW_MINOR_VERSION) || \
      (I2C_SW_PATCH_VERSION_CFG != I2C_PBCFG_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of CDD_I2c_Cfg.h and CDD_I2c_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ( (I2C_AR_RELEASE_MAJOR_VERSION_CFG != MCAL_AR_RELEASE_MAJOR_VERSION) || \
          (I2C_AR_RELEASE_MINOR_VERSION_CFG != MCAL_AR_RELEASE_MINOR_VERSION)    \
        )
        #error "AutoSar Version Numbers of CDD_I2c_Cfg.h and Mcal.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/
 /**
* @brief   macro contains all PB configuration macros.
*/
#define I2C_CONFIG_EXT \
 I2C_CONFIG_PB


/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief          Precompile Support On.
* @details        VARIANT-PRE-COMPILE: Only parameters with "Pre-compile time"
*                 configuration are allowed in this variant.
*/
#define I2C_PRECOMPILE_SUPPORT (STD_OFF)

/**
* @brief   Total number of I2c channel configured.
*/
#define I2C_HW_MAX_CONFIG           (1U)


/**
* @brief   Total number of available hardware I2C channels.
*/
#define I2C_HW_MAX_MODULES          (4U)

/**
* @brief   Total number of available hardware LPI2C channels.
*/
#define I2C_LPI2C_MAX_MODULES       (2U)

/**
* @brief            This is the ID of the first FLEXIO channel.
*/
#define I2C_FLEXIO_FIRST_CHANNEL_U8   (I2C_LPI2C_MAX_MODULES)

/**
* @brief   Switches the Development Error Detection and Notification ON or OFF.
*/
#define I2C_DEV_ERROR_DETECT      (STD_ON)  /* Enable Development Error Detection */

/**
* @brief          Support for version info API.
*/
#define I2C_VERSION_INFO_API      (STD_ON)  /* Enable API I2c_GetVersionInfo      */


/**
* @brief          Link I2c channels symbolic names with I2c channel IDs.
*/

#define I2C_LPI2C_0     0U
                


/**
* @brief          spurious coreid.
*/
#define I2C_SPURIOUS_CORE_ID        (0U)

/**
* @brief          Symbolic names for configured channels.
*/
/*
* @violates @ref CDD_I2c_Cfg_h_REF_1 The compiler/linker shall be schecked to
* ensure that 31 character significance and case sensitivity are supported for
* external identifiers.
*/
#define I2cConf_I2cChannel_I2cChannel_0         0

/**
* @brief          FLEXIO Channel Used
*/
#define I2C_FLEXIO_USED   (STD_OFF)


/**
* @brief            Enable/Disable the API for reporting the Dem Error.
*/
#define I2C_DISABLE_DEM_REPORT_ERROR_STATUS    (STD_OFF)

/**
* @brief            Enable/Disable Multi Core Support.
*/
#define I2C_MULTICORE_SUPPORT   (STD_OFF)

/**
* @brief            DMA is used for at least one channel (STD_ON/STD_OFF)
*/
#define I2C_DMA_USED   (STD_OFF)

#if (I2C_MULTICORE_SUPPORT == STD_ON)
    #define I2c_GetCoreID()            OsIf_GetCoreID()
#else
    #define I2c_GetCoreID()            ((uint32)0UL)
#endif /* (I2C_MULTICORE_SUPPORT == STD_ON) */

/**
* @brief            TIMEOUT for sync transmissions
*/
#define I2C_TIMEOUT               65535U










    

/**
* @brief            Pre-Compile structure from CDD_I2c_Cfg.c file.
*/
#define I2C_CONF_PB \
 extern const I2c_ConfigType I2cGlobalConfig;



/**
* @brief        Variable storing number of maximum partitions using in configuration.
*/

#define I2C_MAX_CORE_ID     ((uint8)1U)

/**
* @brief    the value initialization un init for each core.
*/
#define I2C_UNINIT_CORE \
{ I2C_UNINIT}

/**
* @brief    the value initialization null pointer for each core.
*/
#define I2C_NULL_PTR \
{ NULL_PTR}

/**
* @brief        the value initialization Hardware Map.
*/
#define I2C_HW_MAP_INIT \
{ -1, -1, -1, -1}
/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
 * @brief Definition of the type of activation or procession mechanism of an I2C hw unit
 * @implements I2c_DataDirectionType_enum
 */
typedef enum
{
    I2C_SEND_DATA       = 0x0U, /**< @brief Used to send data to a slave */
    I2C_RECEIVE_DATA    = 0x1U  /**< @brief Used to receive data from a slave */
} I2c_DataDirectionType;

/**
 * @brief Definition of the hardware channel type
 *
 */
typedef enum
{
    I2C_LPI2C_CHANNEL       = 0x0U, /**< @brief This is used for LPI2C channels */
    I2C_FLEXIO_CHANNEL      = 0x1U  /**< @brief This is used for FlexIO channels */
} I2c_HwChannelType;

/*==================================================================================================
*                                STRUCTURES AND OTHER S
==================================================================================================*/
/**
* @brief            DEM error reporting configuration.
* @details          This structure contains information DEM error reporting
*/
typedef struct
{
    Mcal_DemErrorType I2c_E_TimeoutFailureCfg;

} I2c_DemConfigType;

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define I2C_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"

extern const I2c_DemConfigType I2c_DemConfig;

#define I2C_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2c_MemMap.h"
/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @}*/

#endif /* CDD_I2C_CFG_H */

