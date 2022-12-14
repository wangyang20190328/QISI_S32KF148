/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FTFC_FLS_IP IPV_QSPI
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
*   @file Fls_PBcfg.c
*
*   @addtogroup FLS
*   @{
*/

/* implements Fls_PBcfg.c_Artifact */

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fls.h"
#include "Qspi_Ip_Features.h"
#include "Qspi_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLS_VENDOR_ID_CFG_C                      43
#define FLS_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define FLS_AR_RELEASE_MINOR_VERSION_CFG_C       4
#define FLS_AR_RELEASE_REVISION_VERSION_CFG_C    0
#define FLS_SW_MAJOR_VERSION_CFG_C               1
#define FLS_SW_MINOR_VERSION_CFG_C               0
#define FLS_SW_PATCH_VERSION_CFG_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Fls header file are of the same vendor */
#if (FLS_VENDOR_ID_CFG_C != FLS_VENDOR_ID)
    #error "Fls_PBcfg.c and Fls.h have different vendor ids"
#endif
/* Check if current file and Fls header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != FLS_AR_RELEASE_MAJOR_VERSION) || \
     (FLS_AR_RELEASE_MINOR_VERSION_CFG_C    != FLS_AR_RELEASE_MINOR_VERSION) || \
     (FLS_AR_RELEASE_REVISION_VERSION_CFG_C != FLS_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fls_PBcfg.c and Fls.h are different"
#endif
/* Check if current file and Fls header file are of the same Software version */
#if ((FLS_SW_MAJOR_VERSION_CFG_C != FLS_SW_MAJOR_VERSION) || \
     (FLS_SW_MINOR_VERSION_CFG_C != FLS_SW_MINOR_VERSION) || \
     (FLS_SW_PATCH_VERSION_CFG_C != FLS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fls_PBcfg.c and Fls.h are different"
#endif

/* Check if current file and Qspi_Ip_Features header file are of the same vendor */
#if (FLS_VENDOR_ID_CFG_C != QSPI_IP_FEATURES_VENDOR_ID_CFG)
    #error "Fls_PBcfg.c and Qspi_Ip_Features.h have different vendor ids"
#endif
/* Check if current file and Qspi_Ip_Features header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != QSPI_IP_FEATURES_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_MINOR_VERSION_CFG_C    != QSPI_IP_FEATURES_AR_RELEASE_MINOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_REVISION_VERSION_CFG_C != QSPI_IP_FEATURES_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Fls_PBcfg.c and Qspi_Ip_Features.h are different"
#endif
/* Check if current file and Qspi_Ip_Features header file are of the same Software version */
#if ((FLS_SW_MAJOR_VERSION_CFG_C != QSPI_IP_FEATURES_SW_MAJOR_VERSION_CFG) || \
     (FLS_SW_MINOR_VERSION_CFG_C != QSPI_IP_FEATURES_SW_MINOR_VERSION_CFG) || \
     (FLS_SW_PATCH_VERSION_CFG_C != QSPI_IP_FEATURES_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Fls_PBcfg.c and Qspi_Ip_Features.h are different"
#endif

/* Check if current file and Qspi_Ip_Cfg header file are of the same vendor */
#if (FLS_VENDOR_ID_CFG_C != QSPI_IP_VENDOR_ID_CFG)
    #error "Fls_PBcfg.c and Qspi_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and Qspi_Ip_Cfg header file are of the same Autosar version */
#if ((FLS_AR_RELEASE_MAJOR_VERSION_CFG_C    != QSPI_IP_AR_RELEASE_MAJOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_MINOR_VERSION_CFG_C    != QSPI_IP_AR_RELEASE_MINOR_VERSION_CFG) || \
     (FLS_AR_RELEASE_REVISION_VERSION_CFG_C != QSPI_IP_AR_RELEASE_REVISION_VERSION_CFG) \
    )
    #error "AutoSar Version Numbers of Fls_PBcfg.c and Qspi_Ip_Cfg.h are different"
#endif
/* Check if current file and Qspi_Ip_Cfg header file are of the same Software version */
#if ((FLS_SW_MAJOR_VERSION_CFG_C != QSPI_IP_SW_MAJOR_VERSION_CFG) || \
     (FLS_SW_MINOR_VERSION_CFG_C != QSPI_IP_SW_MINOR_VERSION_CFG) || \
     (FLS_SW_PATCH_VERSION_CFG_C != QSPI_IP_SW_PATCH_VERSION_CFG) \
    )
    #error "Software Version Numbers of Fls_PBcfg.c and Qspi_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                                     FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           CONSTANTS
==================================================================================================*/
#define FLS_START_SEC_CONFIG_DATA_8
#include "Fls_MemMap.h"

/* aFlsSectorFlags */
static const uint8 FlsConfigSet_aFlsSectorFlags[16U] =
{
    0U,  /* FlsSector_0 */
    0U,  /* FlsSector_1 */
    0U,  /* FlsSector_2 */
    0U,  /* FlsSector_3 */
    0U,  /* FlsSector_4 */
    0U,  /* FlsSector_5 */
    0U,  /* FlsSector_6 */
    0U,  /* FlsSector_7 */
    0U,  /* FlsSector_8 */
    0U,  /* FlsSector_9 */
    0U,  /* FlsSector_10 */
    0U,  /* FlsSector_11 */
    0U,  /* FlsSector_12 */
    0U,  /* FlsSector_13 */
    0U,  /* FlsSector_14 */
    0U   /* FlsSector_15 */
};

#define FLS_STOP_SEC_CONFIG_DATA_8
#include "Fls_MemMap.h"



#define FLS_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"

/* aFlsSectorEndAddr */
static const Fls_AddressType FlsConfigSet_aFlsSectorEndAddr[16U] =
{
    (Fls_AddressType)4095U,  /* FlsSector_0 */
    (Fls_AddressType)8191U,  /* FlsSector_1 */
    (Fls_AddressType)12287U,  /* FlsSector_2 */
    (Fls_AddressType)16383U,  /* FlsSector_3 */
    (Fls_AddressType)20479U,  /* FlsSector_4 */
    (Fls_AddressType)24575U,  /* FlsSector_5 */
    (Fls_AddressType)28671U,  /* FlsSector_6 */
    (Fls_AddressType)32767U,  /* FlsSector_7 */
    (Fls_AddressType)36863U,  /* FlsSector_8 */
    (Fls_AddressType)40959U,  /* FlsSector_9 */
    (Fls_AddressType)45055U,  /* FlsSector_10 */
    (Fls_AddressType)49151U,  /* FlsSector_11 */
    (Fls_AddressType)53247U,  /* FlsSector_12 */
    (Fls_AddressType)57343U,  /* FlsSector_13 */
    (Fls_AddressType)61439U,  /* FlsSector_14 */
    (Fls_AddressType)65535U   /* FlsSector_15 */
};

/* paSectorSize */
static const Fls_LengthType FlsConfigSet_aFlsSectorSize[16U] =
{
    (Fls_LengthType)4096U,  /* FlsSector_0 */
    (Fls_LengthType)4096U,  /* FlsSector_1 */
    (Fls_LengthType)4096U,  /* FlsSector_2 */
    (Fls_LengthType)4096U,  /* FlsSector_3 */
    (Fls_LengthType)4096U,  /* FlsSector_4 */
    (Fls_LengthType)4096U,  /* FlsSector_5 */
    (Fls_LengthType)4096U,  /* FlsSector_6 */
    (Fls_LengthType)4096U,  /* FlsSector_7 */
    (Fls_LengthType)4096U,  /* FlsSector_8 */
    (Fls_LengthType)4096U,  /* FlsSector_9 */
    (Fls_LengthType)4096U,  /* FlsSector_10 */
    (Fls_LengthType)4096U,  /* FlsSector_11 */
    (Fls_LengthType)4096U,  /* FlsSector_12 */
    (Fls_LengthType)4096U,  /* FlsSector_13 */
    (Fls_LengthType)4096U,  /* FlsSector_14 */
    (Fls_LengthType)4096U   /* FlsSector_15 */
};

/* paSectorPageSize */
static const Fls_LengthType FlsConfigSet_aFlsSectorPageSize[16U] =
{
    (Fls_LengthType)8U,  /* FlsSector_0 */
    (Fls_LengthType)8U,  /* FlsSector_1 */
    (Fls_LengthType)8U,  /* FlsSector_2 */
    (Fls_LengthType)8U,  /* FlsSector_3 */
    (Fls_LengthType)8U,  /* FlsSector_4 */
    (Fls_LengthType)8U,  /* FlsSector_5 */
    (Fls_LengthType)8U,  /* FlsSector_6 */
    (Fls_LengthType)8U,  /* FlsSector_7 */
    (Fls_LengthType)8U,  /* FlsSector_8 */
    (Fls_LengthType)8U,  /* FlsSector_9 */
    (Fls_LengthType)8U,  /* FlsSector_10 */
    (Fls_LengthType)8U,  /* FlsSector_11 */
    (Fls_LengthType)8U,  /* FlsSector_12 */
    (Fls_LengthType)8U,  /* FlsSector_13 */
    (Fls_LengthType)8U,  /* FlsSector_14 */
    (Fls_LengthType)8U   /* FlsSector_15 */
};

/* Info structure (reg prot, ecc trigger, etc) for each internal flash sector. */
static const Fls_Flash_InternalSectorInfoType FlsSector_0_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x000000UL),  /* pSectorStartAddressPtr */
    0U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_1_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x001000UL),  /* pSectorStartAddressPtr */
    1U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_2_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x002000UL),  /* pSectorStartAddressPtr */
    2U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_3_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x003000UL),  /* pSectorStartAddressPtr */
    3U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_4_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x004000UL),  /* pSectorStartAddressPtr */
    4U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_5_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x005000UL),  /* pSectorStartAddressPtr */
    5U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_6_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x006000UL),  /* pSectorStartAddressPtr */
    6U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_7_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x007000UL),  /* pSectorStartAddressPtr */
    7U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_8_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x008000UL),  /* pSectorStartAddressPtr */
    8U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_9_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x009000UL),  /* pSectorStartAddressPtr */
    9U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_10_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00A000UL),  /* pSectorStartAddressPtr */
    10U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_11_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00B000UL),  /* pSectorStartAddressPtr */
    11U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_12_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00C000UL),  /* pSectorStartAddressPtr */
    12U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_13_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00D000UL),  /* pSectorStartAddressPtr */
    13U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_14_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00E000UL),  /* pSectorStartAddressPtr */
    14U  /* Sector location to calculate cfgCRC */
};

static const Fls_Flash_InternalSectorInfoType FlsSector_15_FlsConfigSet_sInternalSectorInfo =
{
    (FLS_DATA_FLASH_BASE_ADDR + 0x00F000UL),  /* pSectorStartAddressPtr */
    15U  /* Sector location to calculate cfgCRC */
};


/* FLASH physical sectorization description */
static const Fls_Flash_InternalSectorInfoType * const FlsConfigSet_aSectorList[16U] =
{
    &FlsSector_0_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S000 */
    &FlsSector_1_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S001 */
    &FlsSector_2_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S002 */
    &FlsSector_3_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S003 */
    &FlsSector_4_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S004 */
    &FlsSector_5_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S005 */
    &FlsSector_6_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S006 */
    &FlsSector_7_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S007 */
    &FlsSector_8_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S008 */
    &FlsSector_9_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S009 */
    &FlsSector_10_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S010 */
    &FlsSector_11_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S011 */
    &FlsSector_12_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S012 */
    &FlsSector_13_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S013 */
    &FlsSector_14_FlsConfigSet_sInternalSectorInfo,  /* FLS_DATA_ARRAY_0_BLOCK_3_S014 */
    &FlsSector_15_FlsConfigSet_sInternalSectorInfo   /* FLS_DATA_ARRAY_0_BLOCK_3_S015 */
};

/* paHwCh */
static const Fls_HwChType FlsConfigSet_paHwCh[16U] =
{
    FLS_CH_INTERN,  /* FlsSector_0 */
    FLS_CH_INTERN,  /* FlsSector_1 */
    FLS_CH_INTERN,  /* FlsSector_2 */
    FLS_CH_INTERN,  /* FlsSector_3 */
    FLS_CH_INTERN,  /* FlsSector_4 */
    FLS_CH_INTERN,  /* FlsSector_5 */
    FLS_CH_INTERN,  /* FlsSector_6 */
    FLS_CH_INTERN,  /* FlsSector_7 */
    FLS_CH_INTERN,  /* FlsSector_8 */
    FLS_CH_INTERN,  /* FlsSector_9 */
    FLS_CH_INTERN,  /* FlsSector_10 */
    FLS_CH_INTERN,  /* FlsSector_11 */
    FLS_CH_INTERN,  /* FlsSector_12 */
    FLS_CH_INTERN,  /* FlsSector_13 */
    FLS_CH_INTERN,  /* FlsSector_14 */
    FLS_CH_INTERN   /* FlsSector_15 */
};

/* paSectorHwAddress */
static const Fls_AddressType FlsConfigSet_paSectorHwAddress[16U] =
{
    (Fls_AddressType)0U,  /* FlsSector_0 */
    (Fls_AddressType)0U,  /* FlsSector_1 */
    (Fls_AddressType)0U,  /* FlsSector_2 */
    (Fls_AddressType)0U,  /* FlsSector_3 */
    (Fls_AddressType)0U,  /* FlsSector_4 */
    (Fls_AddressType)0U,  /* FlsSector_5 */
    (Fls_AddressType)0U,  /* FlsSector_6 */
    (Fls_AddressType)0U,  /* FlsSector_7 */
    (Fls_AddressType)0U,  /* FlsSector_8 */
    (Fls_AddressType)0U,  /* FlsSector_9 */
    (Fls_AddressType)0U,  /* FlsSector_10 */
    (Fls_AddressType)0U,  /* FlsSector_11 */
    (Fls_AddressType)0U,  /* FlsSector_12 */
    (Fls_AddressType)0U,  /* FlsSector_13 */
    (Fls_AddressType)0U,  /* FlsSector_14 */
    (Fls_AddressType)0U   /* FlsSector_15 */
};



/**
* @brief        Structure used to set function pointers notification, working mode
*/
/* Fls module initialization data (FlsConfigSet)*/
const Fls_ConfigType Fls_Config =
{
    (Fls_AcErasePtrType)NULL_PTR,                                     /* FlsAcErase */
    (Fls_AcWritePtrType)NULL_PTR,                                     /* FlsAcWrite */
    NULL_PTR,                                                         /* FlsACCallback */
    NULL_PTR,                                                         /* FlsJobEndNotification */
    NULL_PTR,                                                         /* FlsJobErrorNotification */
    NULL_PTR,                                                         /* FlsReadFunctionCallout */
    MEMIF_MODE_SLOW,                                                  /* FlsDefaultMode */
    1048576U,                                                         /* FlsMaxReadFastMode */
    1024U,                                                            /* FlsMaxReadNormalMode */
    256U,                                                             /* FlsMaxWriteFastMode */
    8U,                                                               /* FlsMaxWriteNormalMode */
    16U,                                                              /* FlsSectorCount */
    &FlsConfigSet_aFlsSectorEndAddr,                                  /* (*paSectorEndAddr)[] */
    &FlsConfigSet_aFlsSectorSize,                                     /* (*paSectorSize)[] */
    &FlsConfigSet_aSectorList,                                        /* (*pSectorList)[] */
    &FlsConfigSet_aFlsSectorFlags,                                    /* (*paSectorFlags)[] */
    &FlsConfigSet_aFlsSectorPageSize,                                 /* (*paSectorPageSize)[] */
    &FlsConfigSet_paHwCh,                                             /* (*paHwCh)[] */
    &FlsConfigSet_paSectorHwAddress,                                  /* (*paSectorHwAddress)[] */
    NULL_PTR,                                                         /* FlsQspiConfig */
    &FlsConfigSet_InitCfg,                                            /* FlsInternalConfig */
    12352U                                                            /* configCrc */
};


#define FLS_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fls_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @}*/

