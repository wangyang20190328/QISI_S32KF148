/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,FLEXIO
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

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Dma_Ip_Cfg.h"

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_PBCFG_VENDOR_ID_C                        43
#define DMA_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C         4
#define DMA_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C         4
#define DMA_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C      0
#define DMA_IP_PBCFG_SW_MAJOR_VERSION_C                 1
#define DMA_IP_PBCFG_SW_MINOR_VERSION_C                 0
#define DMA_IP_PBCFG_SW_PATCH_VERSION_C                 1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Dma_Ip_PBcfg.c file and Dma_Ip_Cfg.h file are of the same vendor */
#if (DMA_IP_PBCFG_VENDOR_ID_C != DMA_IP_CFG_VENDOR_ID)
    #error "Dma_Ip_PBcfg.c and Dma_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Dma_Ip_PBcfg.c file and Dma_Ip_Cfg.h file are of the same Autosar version */
#if ((DMA_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (DMA_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != DMA_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (DMA_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != DMA_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Dma_Ip_PBcfg.c and Dma_Ip_Cfg.h are different"
#endif

/* Check if Dma_Ip_PBcfg.c file and Dma_Ip_Cfg.h file are of the same Software version */
#if ((DMA_IP_PBCFG_SW_MAJOR_VERSION_C != DMA_IP_CFG_SW_MAJOR_VERSION) || \
     (DMA_IP_PBCFG_SW_MINOR_VERSION_C != DMA_IP_CFG_SW_MINOR_VERSION) || \
     (DMA_IP_PBCFG_SW_PATCH_VERSION_C != DMA_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Dma_Ip_PBcfg.c and Dma_Ip_Cfg.h are different"
#endif

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

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




#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"
/* DMA Logic Instance Configuration */
const Dma_Ip_LogicInstanceConfigType LogicInstance0ConfigPB =
{
    {
        /* uint32 logicInstId; */ DMA_LOGIC_INST_0,
        /* uint8 hwVersId;     */ DMA_IP_HARDWARE_VERSION_2,
        /* uint8 hwInst;       */ DMA_IP_HW_INST_0,
    },
    /* boolean EnDebug; */                 (boolean)FALSE,
    /* boolean EnRoundRobin; */            (boolean)FALSE,
    /* boolean EnHaltAfterError; */        (boolean)FALSE,
    /* boolean EnChLinking; */             (boolean)FALSE,
    /* boolean EnGlMasterIdReplication; */ (boolean)FALSE,
};

/* DMA Logic Instance Configuration Array */
const Dma_Ip_LogicInstanceConfigType * const Dma_Ip_paxLogicInstanceConfigArrayPB[DMA_IP_NOF_CFG_LOGIC_INSTANCES] =
{
    &LogicInstance0ConfigPB,
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"



#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"
/* DMA Logic Channel Configurations */
/* DMA Logic Channel 0 */
const Dma_Ip_GlobalConfigType LogicChannel0GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)FALSE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO0,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 1 */
const Dma_Ip_GlobalConfigType LogicChannel1GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)FALSE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO1,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 2 */
const Dma_Ip_GlobalConfigType LogicChannel2GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)FALSE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO2,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 3 */
const Dma_Ip_GlobalConfigType LogicChannel3GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)FALSE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO3,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 4 */
const Dma_Ip_GlobalConfigType LogicChannel4GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)TRUE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO4,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 5 */
const Dma_Ip_GlobalConfigType LogicChannel5GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)TRUE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO5,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 6 */
const Dma_Ip_GlobalConfigType LogicChannel6GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)TRUE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO6,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};
/* DMA Logic Channel 7 */
const Dma_Ip_GlobalConfigType LogicChannel7GlobalConfigPB =
{
    {
        /* boolean EnMasterIdReplication; */ (boolean)FALSE,
        /* boolean EnBufferedWrites; */      (boolean)FALSE,
    }, /* Control */
    {
        /* uint8 SourceMux; */               DMA_IP_REQ_MUX0_DISABLED,
        /* boolean EnSourceMux; */           (boolean)FALSE,
        /* boolean EnTriggerMux; */          (boolean)FALSE,
        /* boolean EnRequest; */             (boolean)TRUE,
    }, /* Request */
    {
        /* boolean EnErrorInt; */            (boolean)FALSE,
    }, /* Interrupt */
    {
        /* uint8 Group; */                   0U,
        /* uint8 Level; */                   DMA_IP_LEVEL_PRIO7,
        /* boolean EnPreemption; */          (boolean)FALSE,
        /* boolean DisPreempt; */            (boolean)FALSE,
    }, /* Priority */
};


#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"


#define MCL_START_SEC_VAR_INIT_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"
/* DMA Hardware Channel 0 */
Dma_Ip_HwChannelStateType HwChannel0StatePB;
/* DMA Hardware Channel 1 */
Dma_Ip_HwChannelStateType HwChannel1StatePB;
/* DMA Hardware Channel 2 */
Dma_Ip_HwChannelStateType HwChannel2StatePB;
/* DMA Hardware Channel 3 */
Dma_Ip_HwChannelStateType HwChannel3StatePB;
/* DMA Hardware Channel 4 */
Dma_Ip_HwChannelStateType HwChannel4StatePB;
/* DMA Hardware Channel 5 */
Dma_Ip_HwChannelStateType HwChannel5StatePB;
/* DMA Hardware Channel 6 */
Dma_Ip_HwChannelStateType HwChannel6StatePB;
/* DMA Hardware Channel 7 */
Dma_Ip_HwChannelStateType HwChannel7StatePB;

#define MCL_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

#define MCL_START_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"
/* DMA Hardware Channel State and DMA Logic Channel Configuration Array */
Dma_Ip_HwChannelStateType * Dma_Ip_paxHwChannelStateArrayPB[DMA_IP_NOF_CFG_LOGIC_CHANNELS] =
{
    &HwChannel0StatePB,
    &HwChannel1StatePB,
    &HwChannel2StatePB,
    &HwChannel3StatePB,
    &HwChannel4StatePB,
    &HwChannel5StatePB,
    &HwChannel6StatePB,
    &HwChannel7StatePB,
};

#define MCL_STOP_SEC_VAR_INIT_UNSPECIFIED_NO_CACHEABLE
#include "Mcl_MemMap.h"

#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"


#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"

#define MCL_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"
const Dma_Ip_LogicChannelConfigType LogicChannel0ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_3,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_3,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel0GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel1ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_2,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_2,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel1GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel2ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_5,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_5,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel2GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel3ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_4,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_4,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel3GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel4ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_6,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_6,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel4GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel5ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_7,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_7,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel5GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel6ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_1,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_1,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel6GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};
const Dma_Ip_LogicChannelConfigType LogicChannel7ConfigPB =
{
    {
        /* uint32 LogicChId; */               DMA_LOGIC_CH_0,
        /* uint8 HwVersId; */                 DMA_IP_HARDWARE_VERSION_2,
        /* uint8 HwInst; */                   DMA_IP_HW_INST_0,
        /* uint8 HwChId; */                   DMA_IP_HW_CH_0,
        /* Dma_Ip_Callback IntCallback; */    NULL_PTR,
        /* Dma_Ip_Callback ErrIntCallback; */ NULL_PTR,
    },  /* Dma_Ip_LogicChannelIdType */
    &LogicChannel7GlobalConfigPB,
    NULL_PTR,
    NULL_PTR,
};

const Dma_Ip_LogicChannelConfigType * const Dma_Ip_paxLogicChannelConfigArrayPB[DMA_IP_NOF_CFG_LOGIC_CHANNELS] =
{
    &LogicChannel0ConfigPB,
    &LogicChannel1ConfigPB,
    &LogicChannel2ConfigPB,
    &LogicChannel3ConfigPB,
    &LogicChannel4ConfigPB,
    &LogicChannel5ConfigPB,
    &LogicChannel6ConfigPB,
    &LogicChannel7ConfigPB,
};

/* DMA Initialization Structure */
const Dma_Ip_InitType Dma_Ip_xDmaInitPB =
{
    /* Dma_Ip_HwChannelStateType ** HwChStateArray */                          &Dma_Ip_paxHwChannelStateArrayPB[0U],          /* Static */
    /* const Dma_Ip_LogicChannelConfigType * const LogicChConfigArray   */     &Dma_Ip_xLogicChannelResetConfig,                   /* Static */
    /* const Dma_Ip_LogicChannelConfigType * const * LogicChConfigArray */     &Dma_Ip_paxLogicChannelConfigArrayPB[0U],      /* Static */
    /* const Dma_Ip_LogicInstanceConfigType * const LogicInstConfigArray   */  &Dma_Ip_xLogicInstanceResetConfig,                  /* Static */
    /* const Dma_Ip_LogicInstanceConfigType * const * LogicInstConfigArray */  &Dma_Ip_paxLogicInstanceConfigArrayPB[0U],     /* Static */
};

#define MCL_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcl_MemMap.h"



#ifdef __cplusplus
}
#endif

/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
