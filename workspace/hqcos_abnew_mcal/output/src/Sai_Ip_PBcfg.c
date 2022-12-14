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

/**
*   @file
*
*   @addtogroup sai_ip_config Sai IPL Configuration
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
==================================================================================================*/
#include "Sai_Ip_PBcfg.h"
#if (STD_ON == SAI_IP_ENABLE)
#if (STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE)
#include "Dma_Ip.h"
#endif /* (STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE) */
#endif /* (STD_ON == SAI_IP_ENABLE) */


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SAI_IP_PBCFG_VENDOR_ID_C                      43
#define SAI_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define SAI_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define SAI_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define SAI_IP_PBCFG_SW_MAJOR_VERSION_C               1
#define SAI_IP_PBCFG_SW_MINOR_VERSION_C               0
#define SAI_IP_PBCFG_SW_PATCH_VERSION_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Sai_Ip_PBcfg header file are of the same vendor */
#if (SAI_IP_PBCFG_VENDOR_ID_C != SAI_IP_PBCFG_VENDOR_ID)
#error "Sai_Ip_PBcfg.c and Sai_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if current file and Sai_Ip_PBcfg header file are of the same Autosar version */
#if ((SAI_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C     != SAI_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (SAI_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C     != SAI_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (SAI_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C  != SAI_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Sai_Ip_PBcfg.c and Sai_Ip_PBcfg.h are different"
#endif

/* Check if current file and Sai_Ip_PBcfg header file are of the same software version */
#if ((SAI_IP_PBCFG_SW_MAJOR_VERSION_C != SAI_IP_PBCFG_SW_MAJOR_VERSION) || \
     (SAI_IP_PBCFG_SW_MINOR_VERSION_C != SAI_IP_PBCFG_SW_MINOR_VERSION) || \
     (SAI_IP_PBCFG_SW_PATCH_VERSION_C != SAI_IP_PBCFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Sai_Ip_PBcfg.c and Sai_Ip_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if (STD_ON == SAI_IP_ENABLE)
#if (STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE)
/* Check if current file and Dma_Ip header file are of the same Autosar version */
#if ((SAI_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
     (SAI_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Sai_Ip_PBcfg.c and Dma_Ip.h are different"
#endif
#endif /* (STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE) */
#endif /* (STD_ON == SAI_IP_ENABLE) */
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define I2S_START_SEC_VAR_INIT_UNSPECIFIED
#include "I2s_MemMap.h"


/**
* @brief          SAI Ip State 0 for configuration variant .
*/
static Sai_Ip_StateStructType Sai_Ip_xState_0 = {0};


#define I2S_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "I2s_MemMap.h"

#define I2S_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2s_MemMap.h"


/**
* @brief          SAI Ip Config 0 for configuration variant .
*/
const Sai_Ip_ConfigType Sai_Ip_xInitConfig_0 =
{
    (Sai_Ip_SyncType) SAI_IP_ASYNC, /* .eSyncMode */
    (Sai_Ip_MasterClkSelType) SAI_IP_BUS_CLK, /* .eMasterClkSrc */
    (boolean)TRUE, /* .bBitClkNegPolar */
    (boolean)TRUE, /* .bBitClkInternal */
    (uint32)40000000U, /* .u32MasterClkFreq */
    (uint32)24576000U, /* .u32BitClkFreq */
    (uint8)2U, /* .u8ChannelEnable */
    (uint8)2U, /* .u8FrameSize */
    (uint8)16U, /* .u8SyncWidth */
#ifdef FEATURE_SAI_IP_HAS_CHMOD
    (Sai_Ip_MaskType) SAI_IP_MASK_TRISTATE, /* .eMaskMode */
#endif
#if (STD_ON == SAI_IP_BCS_FEATURE_AVAILABLE)
    (boolean)FALSE, /* .bBitClkSwap */
#endif
    (boolean)FALSE, /* .bDebugEnable */
    (boolean)TRUE, /* .bMsbFirst */
    (boolean)TRUE, /* .bSyncEarly */
    (boolean)TRUE, /* .bSyncNegPolar */
    (boolean)TRUE, /* .bSyncInternal */
    (uint8)16U, /* .u8Word0Width */
    (uint8)16U, /* .u8WordNWidth */
    (uint8)15U, /* .u8FirstBitIndex */
    (boolean)FALSE, /* .bRunErrorReport */
    (boolean)FALSE, /* .bSyncErrorReport */
    (boolean)FALSE, /* .bFrameStartReport */
#if (STD_ON == SAI_IP_FPACK_FEATURE_AVAILABLE)
    (boolean)FALSE, /* .bFPack */
#endif
    (Sai_Ip_MuxType) SAI_IP_MUX_DISABLED, /* .eMuxMode */
    (Sai_Ip_TransferType) SAI_IP_INTERRUPT, /* .eTransferType */
#if (STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE)
    { 0U, 0U, 0U, 0U }, /* .aDmaChannel */
#endif  /* STD_ON == SAI_IP_DMA_FEATURE_AVAILABLE */
    (uint8)2U, /* .u8ElementSize */
    (uint8)2U, /* .u8ChannelCount */
    (uint8)4U, /* .u8BufferAccessSize */
    (uint8)0U, /* .u8WordFlagIndex */
    (boolean)FALSE, /* .bBitClkInput */
    (boolean)TRUE, /* .bContOnErr */
    (boolean)TRUE, /* .bSyncOnDemand */
    (Sai_Ip_TransferCallbackType) NULL_PTR, /* .pCallback */
    (Sai_Ip_StateStructType *) &Sai_Ip_xState_0 /* .pState */
};



#define I2S_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "I2s_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
