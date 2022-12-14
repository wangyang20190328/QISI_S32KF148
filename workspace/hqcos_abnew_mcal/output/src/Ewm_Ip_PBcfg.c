/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : Wdog,Ewm
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
*   @addtogroup Ewm_Ip
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif






/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ewm_Ip_PBcfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EWM_IP_PBCFG_VENDOR_ID_C                      43
#define EWM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define EWM_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define EWM_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define EWM_IP_PBCFG_SW_MAJOR_VERSION_C               1
#define EWM_IP_PBCFG_SW_MINOR_VERSION_C               0
#define EWM_IP_PBCFG_SW_PATCH_VERSION_C               1

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Ewm_Ip_PBcfg header file are of the same vendor */
#if (EWM_IP_PBCFG_VENDOR_ID_C != EWM_IP_PBCFG_VENDOR_ID)
#error "Ewm_Ip_PBcfg.c and Ewm_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if current file and Ewm_Ip_PBcfg header file are of the same Autosar version */
#if ((EWM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != EWM_IP_PBCFG_AR_RELEASE_MAJOR_VERSION   ) || \
     (EWM_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != EWM_IP_PBCFG_AR_RELEASE_MINOR_VERSION   ) || \
     (EWM_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != EWM_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of Ewm_Ip_PBcfg.c and Ewm_Ip_PBcfg.h are different"
#endif

/* Check if current file and Ewm_Ip_PBcfg header file are of the same software version */
#if ((EWM_IP_PBCFG_SW_MAJOR_VERSION_C != EWM_IP_PBCFG_SW_MAJOR_VERSION) || \
     (EWM_IP_PBCFG_SW_MINOR_VERSION_C != EWM_IP_PBCFG_SW_MINOR_VERSION) || \
     (EWM_IP_PBCFG_SW_PATCH_VERSION_C != EWM_IP_PBCFG_SW_PATCH_VERSION))
#error "Software Version Numbers of Ewm_Ip_PBcfg.c and Ewm_Ip_PBcfg.h are different"
#endif
/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

#define WDG_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"



const Ewm_Ip_ConfigType Ewm_Ip_Settings=
{

    EWM_IN_ASSERT_DISABLED, /*.assertLogic */ 
    (boolean)          TRUE,                   /*.InterruptEnable */
    (uint8)          100,                   /*.u8Prescaler */
    (uint8)         0x00,                   /*.u8CompareLow */
    (uint8)         0x02,                   /*.u8CompareHigh */
    (Ewm_Ip_CallbackPtrType) NULL_PTR       /*pfEwmCallback*/
};


#define WDG_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Wdg_MemMap.h"

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
