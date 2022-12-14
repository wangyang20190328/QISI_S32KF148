/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : Ftm_Srtc_Lptmr_LPit
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
 *   @file          Lptmr_Gpt_Ip_PBcfg.c
 *
 *   @addtogroup    Lptmr_Gpt_Ip Lptmr IPL
 *
 *   @{
 */


#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "Lptmr_Gpt_Ip_PBcfg.h"
#include "Gpt_Irq.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define LPTMR_GPT_IP_VENDOR_ID_PBCFG_C                    43
#define LPTMR_GPT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C     4
#define LPTMR_GPT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C     4
#define LPTMR_GPT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C  0
#define LPTMR_GPT_IP_SW_MAJOR_VERSION_PBCFG_C             1
#define LPTMR_GPT_IP_SW_MINOR_VERSION_PBCFG_C             0
#define LPTMR_GPT_IP_SW_PATCH_VERSION_PBCFG_C             1
/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (LPTMR_GPT_IP_VENDOR_ID_PBCFG_C != LPTMR_GPT_IP_VENDOR_ID_PBCFG_H)
    #error "Lptmr_Gpt_Ip_PBcfg.c and Lptmr_Gpt_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((LPTMR_GPT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C != LPTMR_GPT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H) || \
     (LPTMR_GPT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C != LPTMR_GPT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H) || \
     (LPTMR_GPT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != LPTMR_GPT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Lptmr_Gpt_Ip_PBcfg.c and Lptmr_Gpt_Ip_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((LPTMR_GPT_IP_SW_MAJOR_VERSION_PBCFG_C != LPTMR_GPT_IP_SW_MAJOR_VERSION_PBCFG_H) || \
     (LPTMR_GPT_IP_SW_MINOR_VERSION_PBCFG_C != LPTMR_GPT_IP_SW_MINOR_VERSION_PBCFG_H) || \
     (LPTMR_GPT_IP_SW_PATCH_VERSION_PBCFG_C != LPTMR_GPT_IP_SW_PATCH_VERSION_PBCFG_H) \
    )
    #error "Software Version Numbers of Lptmr_Gpt_Ip_PBcfg.c and Lptmr_Gpt_Ip_PBcfg.h are different"
#endif

#if (LPTMR_GPT_IP_VENDOR_ID_PBCFG_C != GPT_IRQ_VENDOR_ID)
    #error "Lptmr_Gpt_Ip_PBcfg.c and Gpt_Irq.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((LPTMR_GPT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (LPTMR_GPT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (LPTMR_GPT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != GPT_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Lptmr_Gpt_Ip_PBcfg.c and Gpt_Irq.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((LPTMR_GPT_IP_SW_MAJOR_VERSION_PBCFG_C != GPT_IRQ_SW_MAJOR_VERSION) || \
     (LPTMR_GPT_IP_SW_MINOR_VERSION_PBCFG_C != GPT_IRQ_SW_MINOR_VERSION) || \
     (LPTMR_GPT_IP_SW_PATCH_VERSION_PBCFG_C != GPT_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Lptmr_Gpt_Ip_PBcfg.c and Gpt_Irq.h are different"
#endif

/*================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
const Lptmr_Gpt_Ip_ConfigType LPTMR_0_InitConfig_PB = 
{
    /** @brief PrescalerEnable */
    (boolean)TRUE, 
    /** @brief clockAlternatePrescaler value */
    #if(LPTMR_GPT_IP_SET_CLOCK_MODE == STD_ON)
    0U, /* LPTMR alternate Clock divider */ 
    #endif
    /** @brief Prescaler value */
    1U, /* LPTMR Prescaler */ 
    /** @brief LPtimer clock source  */
    LPTMR_GPT_IP_CLOCK_SIRCDIV2,
    /** @brief LPtimer callback name */
    &Gpt_ProcessCommonInterrupt,
    /** @brief LPtimer callbackparam */
    (uint8)1U,
    /** @brief LPtimer channel mode */
    LPTMR_GPT_IP_CH_MODE_ONESHOT
};
#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/

#ifdef __cplusplus
}
#endif/* LPTMR_GPT_IP_PBCFG_C*/

/** @} */
