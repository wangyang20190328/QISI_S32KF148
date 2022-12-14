
/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
*   Dependencies         : 
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
*   @file FlexCAN_IP_PBcfg.c
*
*   @addtogroup FlexCAN
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

#include "FlexCAN_Ip_Types.h"
#if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
    #include "Dma_Ip.h"
#endif
#include "Can_Irq.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FLEXCAN_IP_VENDOR_ID_PBCFG_C 43
#define FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C 4
#define FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C 4
#define FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C 0
#define FLEXCAN_IP_SW_MAJOR_VERSION_PBCFG_C 1
#define FLEXCAN_IP_SW_MINOR_VERSION_PBCFG_C 0
#define FLEXCAN_IP_SW_PATCH_VERSION_PBCFG_C 1
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and FlexCAN_Ip_Types header file are of the same vendor */
#if (FLEXCAN_IP_VENDOR_ID_PBCFG_C != FLEXCAN_IP_TYPES_VENDOR_ID_H)
    #error "FlexCAN_Ip__PBcfg.c and FlexCAN_Ip_Types.h have different vendor ids"
#endif
/* Check if current file and FlexCAN_Ip_Types header file are of the same Autosar version */
#if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != FLEXCAN_IP_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C    != FLEXCAN_IP_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != FLEXCAN_IP_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of FlexCAN_Ip__PBcfg.c and FlexCAN_Ip_Types.h are different"
#endif
/* Check if current file and FlexCAN_Ip_Types header file are of the same Software version */
#if ((FLEXCAN_IP_SW_MAJOR_VERSION_PBCFG_C != FLEXCAN_IP_TYPES_SW_MAJOR_VERSION_H) || \
     (FLEXCAN_IP_SW_MINOR_VERSION_PBCFG_C != FLEXCAN_IP_TYPES_SW_MINOR_VERSION_H) || \
     (FLEXCAN_IP_SW_PATCH_VERSION_PBCFG_C != FLEXCAN_IP_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of FlexCAN_Ip__PBcfg.c and FlexCAN_Ip_Types.h are different"
#endif

/* Check if current file and Can_Irq header file are of the same vendor */
#if (FLEXCAN_IP_VENDOR_ID_PBCFG_C != CAN_IRQ_VENDOR_ID)
    #error "FlexCAN_Ip__PBcfg.c and Can_Irq.h have different vendor ids"
#endif
/* Check if current file and Can_Irq header file are of the same Autosar version */
#if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != CAN_IRQ_AR_RELEASE_MAJOR_VERSION) || \
     (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C    != CAN_IRQ_AR_RELEASE_MINOR_VERSION) || \
     (FLEXCAN_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != CAN_IRQ_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of FlexCAN_Ip__PBcfg.c and Can_Irq.h are different"
#endif
/* Check if current file and Can_Irq header file are of the same Software version */
#if ((FLEXCAN_IP_SW_MAJOR_VERSION_PBCFG_C != CAN_IRQ_SW_MAJOR_VERSION) || \
     (FLEXCAN_IP_SW_MINOR_VERSION_PBCFG_C != CAN_IRQ_SW_MINOR_VERSION) || \
     (FLEXCAN_IP_SW_PATCH_VERSION_PBCFG_C != CAN_IRQ_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of FlexCAN_Ip__PBcfg.c and Can_Irq.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against current file and Dma_Ip.h */
    #if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
        #if ((FLEXCAN_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
            (FLEXCAN_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C     != DMA_IP_AR_RELEASE_MINOR_VERSION) \
            )
            #error "AUTOSAR Version Numbers of FlexCAN_Ip__PBcfg.c and Dma_Ip.h are different"
        #endif
    #endif
#endif


/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
#define CAN_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"

const Flexcan_Ip_ConfigType Flexcan_aCtrlConfigPB[2U]=
{
    /* Can Hardware Channel FLEXCAN_0 */
    {
        /* Number Of Message Buffer used .max_num_mb */
        (uint8)9U,
        /*Can Hw filter count* .num_id_filters */
        (Flexcan_Ip_RxFifoIdFilterNumType)((8U >> 3U) - 1U),
        /* Legacy FIFO ENABLED .is_rx_fifo_needed */
        (boolean)TRUE,
        #if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)
        /* The number of standard ID filter elements */
        0U,
        /* The number of extended ID filter elements */
        0U,
        /* The number of enhanced Rx FIFO watermark */
        -1U,
        /* The Enhanced Rx FIFO feature is enabled or not. */
        (boolean)FALSE,
        #endif
        /* Loopback enabled .flexcanMode */
        FLEXCAN_NORMAL_MODE,
        /* Controller Options .ctrlOptions */
        (uint32)( FLEXCAN_IP_ISO_U32 |FLEXCAN_IP_EACEN_U32),
        /* Can FD RamBlock specified .payload */
        {
            FLEXCAN_PAYLOAD_SIZE_8
        },
        /* Can FD enabled .fd_enable */
        (boolean)FALSE,
        #if (FLEXCAN_IP_FEATURE_HAS_PE_CLKSRC_SELECT == STD_ON)
        /* Can PE clock selected .is_pe_clock */
        (boolean)FALSE,
        #endif
        /* Cbt support .extCbtEnable */
        (boolean)FALSE,
        /*  BRS for FD .bitRateSwitch */
        (boolean)FALSE,
        /* Values for normal baudrate .bitrate */
        {
            (uint8)4U,
            (uint8)4U,
            (uint8)5U,
            (uint16)9,
            (uint8)0U
        },
        /* Values for CBT baudrate .bitrate_cbt */
        {
            (uint8)5U,
            (uint8)4U,
            (uint8)5U,
            (uint16)9U,
            (uint8)0U
        },
        /* Fifo Transfer Type .transfer_type */
        FLEXCAN_RXFIFO_USING_INTERRUPTS,
        #if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* DMA channel number used for transfers. */
        (uint8)0U,
        #endif
        /* Controller Callback .Callback */
        Can_CommonIrqCallback,
        /* Error Callback .ErrorCallback */
        Can_ErrorIrqCallback
    },
    /* Can Hardware Channel FLEXCAN_1 */
    {
        /* Number Of Message Buffer used .max_num_mb */
        (uint8)9U,
        /*Can Hw filter count* .num_id_filters */
        (Flexcan_Ip_RxFifoIdFilterNumType)((8U >> 3U) - 1U),
        /* Legacy FIFO ENABLED .is_rx_fifo_needed */
        (boolean)TRUE,
        #if (FLEXCAN_IP_FEATURE_HAS_ENHANCED_RX_FIFO == STD_ON)
        /* The number of standard ID filter elements */
        0U,
        /* The number of extended ID filter elements */
        0U,
        /* The number of enhanced Rx FIFO watermark */
        -1U,
        /* The Enhanced Rx FIFO feature is enabled or not. */
        (boolean)FALSE,
        #endif
        /* Loopback enabled .flexcanMode */
        FLEXCAN_NORMAL_MODE,
        /* Controller Options .ctrlOptions */
        (uint32)( FLEXCAN_IP_ISO_U32 |FLEXCAN_IP_EACEN_U32),
        /* Can FD RamBlock specified .payload */
        {
            FLEXCAN_PAYLOAD_SIZE_8
        },
        /* Can FD enabled .fd_enable */
        (boolean)FALSE,
        #if (FLEXCAN_IP_FEATURE_HAS_PE_CLKSRC_SELECT == STD_ON)
        /* Can PE clock selected .is_pe_clock */
        (boolean)FALSE,
        #endif
        /* Cbt support .extCbtEnable */
        (boolean)FALSE,
        /*  BRS for FD .bitRateSwitch */
        (boolean)FALSE,
        /* Values for normal baudrate .bitrate */
        {
            (uint8)5U,
            (uint8)4U,
            (uint8)3U,
            (uint16)0,
            (uint8)3U
        },
        /* Values for CBT baudrate .bitrate_cbt */
        {
            (uint8)6U,
            (uint8)4U,
            (uint8)3U,
            (uint16)0U,
            (uint8)3U
        },
        /* Fifo Transfer Type .transfer_type */
        FLEXCAN_RXFIFO_USING_INTERRUPTS,
        #if (FLEXCAN_IP_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* DMA channel number used for transfers. */
        (uint8)0U,
        #endif
        /* Controller Callback .Callback */
        Can_CommonIrqCallback,
        /* Error Callback .ErrorCallback */
        Can_ErrorIrqCallback
    }
};



#define CAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Can_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */
