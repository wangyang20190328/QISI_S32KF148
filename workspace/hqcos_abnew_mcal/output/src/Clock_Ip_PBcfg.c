/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   @file       Clock_Ip_PBcfg.c
*   @version    1.0.1
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Ip Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Clock_Ip_PBcfg.h"
#include "StandardTypes.h"
#include "Clock_Ip.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_PBCFG_VENDOR_ID_C                      43
#define CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_PBCFG_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PBCFG_SW_PATCH_VERSION_C               1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_PBcfg.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PBCFG_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_PBcfg.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_PBcfg.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PBCFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PBCFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip.h have different vendor ids"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if Clock_Ip_PBcfg.c file and StandardTypes.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and StandardTypes.h are different"
#endif
#endif
/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
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


#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"






/* *************************************************************************
 * Configuration structure for Clock Configuration 0
 * ************************************************************************* */
 /*! @brief User Configuration structure clock_Cfg_0 */
const Clock_Ip_ClockConfigType Mcu_aClockConfigPB[1U] = {

    {
        0U,                                 /* clkConfigId */
        0U,                                 /* ircoscsCount */
        1U,                                 /* xoscsCount */
        0U,                                 /* pllsCount */
        38U,                                /* selectorsCount */
        15U,                                /* dividersCount */
        0U,                                 /* dividerTriggersCount */
        0U,                                /* fracDivsCount */
        4U,                                /* extClksCount */
        49U,                                 /* gatesCount */
        0U,                                 /* pcfsCount */
        0U,                                /* cmusCount */
        0U,                                /* configureFrequenciesCount */

        /* IRCOSC initialization. */
        {
    
           #if CLOCK_IP_IRCOSCS_NO > 0U
           {
                RESERVED_CLK,           /* Clock name associated to Ircosc */
                0U,                     /* Enable ircosc */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range  */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
           },
           #endif
    
           #if CLOCK_IP_IRCOSCS_NO > 1U
           {
                RESERVED_CLK,           /* Clock name associated to Ircosc */
                0U,                     /* Enable ircosc */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range  */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
           },
           #endif
    
        },

        /* XOSC initialization. */
        {
            #if CLOCK_IP_XOSCS_NO > 0U
            {
                SOSC_CLK,                    /* Clock name associated to xosc */
                8000000U,                    /* External oscillator frequency. */
                1U,                           /* Enable xosc. */
                0U,                         /* Startup stabilization time. */
                1U,                           /* XOSC bypass option */
                0U,                           /* Comparator enable */
                0U,                          /* Crystal overdrive protection */
                0U,                    /* High gain value */
                CLOCK_IP_HAS_MONITOR_DISABLE,       /* Monitor type */
            },
            #endif

        },

        /* PLL initialization. */
        {
                #if CLOCK_IP_PLLS_NO > 0U
            {
                RESERVED_CLK,           /* name */
                0U,                     /* enable */
                RESERVED_CLK,           /* inputReference */
                0U,                     /* Bypass */
                0U,                     /* predivider */
                0U,                     /* numeratorFracLoopDiv */
                0U,                     /* mulFactorDiv */
                0U,                     /* modulation */
                0U,                     /* Modulaton type: Spread spectrum modulation bypassed */
                0U,                     /* modulationPeriod */
                0U,                     /* incrementStep */
                0U,                     /* sigmaDelta */
                0U,                     /* ditherControl */
                0U,                     /* ditherControlValue */
                0U,                     /* Monitor type  */
                {                             /*!<     Dividers */
                        0U,
                        0U,
                        0U,
                },
            },
            #endif

        },

        /* SELECTOR initialization. */
        {

            #if CLOCK_IP_SELECTORS_NO > 0U
            {
                SCS_RUN_CLK,                     /* Clock name associated to selector */
                SPLL_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 1U
            {
                SCS_VLPR_CLK,                     /* Clock name associated to selector */
                SIRC_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 2U
            {
                SCS_HSRUN_CLK,                     /* Clock name associated to selector */
                FIRC_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 3U
            {
                SCG_CLKOUT_CLK,                     /* Clock name associated to selector */
                FIRC_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 4U
            {
                RTC_CLK,                     /* Clock name associated to selector */
                SOSCDIV1_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 5U
            {
                LPO_CLK,                     /* Clock name associated to selector */
                LPO_128K_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 6U
            {
                TRACE_CLK,                     /* Clock name associated to selector */
                CORE_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 7U
            {
                CLKOUT0_CLK,                     /* Clock name associated to selector */
                BUS_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 8U
            {
                FTM0_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 9U
            {
                FTM1_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 10U
            {
                FTM2_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 11U
            {
                FTM3_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 12U
            {
                FTM4_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 13U
            {
                FTM5_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 14U
            {
                FTM6_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 15U
            {
                FTM7_EXT_CLK,                     /* Clock name associated to selector */
                TCLK0_REF_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 16U
            {
                FTM0_CLK,                     /* Clock name associated to selector */
                SIRCDIV1_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 17U
            {
                FTM1_CLK,                     /* Clock name associated to selector */
                SIRCDIV1_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 18U
            {
                FTM2_CLK,                     /* Clock name associated to selector */
                SIRCDIV1_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 19U
            {
                FTM3_CLK,                     /* Clock name associated to selector */
                SIRCDIV1_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 20U
            {
                FTM4_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 21U
            {
                FTM5_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 22U
            {
                FTM6_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 23U
            {
                FTM7_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 24U
            {
                ENET_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 25U
            {
                ADC1_CLK,                     /* Clock name associated to selector */
                SPLLDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 26U
            {
                LPSPI0_CLK,                     /* Clock name associated to selector */
                SPLLDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 27U
            {
                LPSPI1_CLK,                     /* Clock name associated to selector */
                SPLLDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 28U
            {
                LPSPI2_CLK,                     /* Clock name associated to selector */
                SPLLDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 29U
            {
                LPIT0_CLK,                     /* Clock name associated to selector */
                SOSCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 30U
            {
                ADC0_CLK,                     /* Clock name associated to selector */
                SPLLDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 31U
            {
                FlexIO_CLK,                     /* Clock name associated to selector */
                SOSCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 32U
            {
                LPI2C0_CLK,                     /* Clock name associated to selector */
                CLOCK_IS_OFF,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 33U
            {
                LPI2C1_CLK,                     /* Clock name associated to selector */
                SIRCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 34U
            {
                LPUART0_CLK,                     /* Clock name associated to selector */
                SOSCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 35U
            {
                LPUART1_CLK,                     /* Clock name associated to selector */
                SOSCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 36U
            {
                LPUART2_CLK,                     /* Clock name associated to selector */
                SOSCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
            #if CLOCK_IP_SELECTORS_NO > 37U
            {
                LPTMR0_CLK,                     /* Clock name associated to selector */
                SIRCDIV2_CLK,                       /* Name of the selected input source */
            },
            #endif
        
        },

        /* DIVIDER initialization. */
        {
        
            #if CLOCK_IP_DIVIDERS_NO > 0U
            {
                SOSCDIV1_CLK,
                1U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 1U
            {
                SOSCDIV2_CLK,
                1U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 2U
            {
                CORE_RUN_CLK,
                2U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 3U
            {
                CORE_VLPR_CLK,
                2U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 4U
            {
                CORE_HSRUN_CLK,
                1U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 5U
            {
                BUS_RUN_CLK,
                2U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 6U
            {
                BUS_VLPR_CLK,
                1U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 7U
            {
                BUS_HSRUN_CLK,
                1U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 8U
            {
                SLOW_RUN_CLK,
                3U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 9U
            {
                SLOW_VLPR_CLK,
                4U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 10U
            {
                SLOW_HSRUN_CLK,
                2U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 11U
            {
                CLKOUT0_CLK,
                8U,
                {
                    0U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 12U
            {
                ENET_CLK,
                1U,
                {
                    1U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 13U
            {
                LPTMR0_CLK,
                1U,
                {
                    1U,
                }
            },
            #endif
        
            #if CLOCK_IP_DIVIDERS_NO > 14U
            {
                TRACE_CLK,
                1U,
                {
                    1U,
                }
            },
            #endif
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                },
            },
        
        },

        /* DIVIDER TRIGGER Initialization. */
        {
            {
                RESERVED_CLK,               /* divider name */
                IMMEDIATE_DIVIDER_UPDATE,   /* trigger value */
                RESERVED_CLK,               /* input source name */
            },
        },

        /* FRACTIONAL DIVIDER initialization. */
        {
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
        },

        /* EXTERNAL CLOCKS initialization. */
        {
            #if CLOCK_IP_EXT_CLKS_NO  > 0U
            {
                TCLK0_REF_CLK,
                32000U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO  > 1U
            {
                TCLK1_REF_CLK,
                32000U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO  > 2U
            {
                TCLK2_REF_CLK,
                32000U,
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO  > 3U
            {
                RTC_CLKIN,
                32768U,
            },
            #endif

        },

        /* CLOCK GATE initialization. */
        {

            #if CLOCK_IP_GATES_NO > 0U
            {
                LPO_32K_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 1U
            {
                LPO_1K_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 2U
            {
                ADC0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 3U
            {
                ADC1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 4U
            {
                CLKOUT0_CLK,                  /*!<     name;                    */
                0U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 5U
            {
                CMP0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 6U
            {
                CRC0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 7U
            {
                DMA0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 8U
            {
                DMAMUX0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 9U
            {
                EIM0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 10U
            {
                ENET_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 11U
            {
                ERM0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 12U
            {
                EWM0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 13U
            {
                FLEXCAN0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 14U
            {
                FLEXCAN1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 15U
            {
                FLEXCAN2_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 16U
            {
                FlexIO_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 17U
            {
                FTFC_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 18U
            {
                FTM0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 19U
            {
                FTM1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 20U
            {
                FTM2_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 21U
            {
                FTM3_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 22U
            {
                FTM4_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 23U
            {
                FTM5_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 24U
            {
                FTM6_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 25U
            {
                FTM7_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 26U
            {
                LPI2C0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 27U
            {
                LPI2C1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 28U
            {
                LPIT0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 29U
            {
                LPSPI0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 30U
            {
                LPSPI1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 31U
            {
                LPSPI2_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 32U
            {
                LPTMR0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 33U
            {
                LPUART0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 34U
            {
                LPUART1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 35U
            {
                LPUART2_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 36U
            {
                MPU0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 37U
            {
                MSCM0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 38U
            {
                PDB0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 39U
            {
                PDB1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 40U
            {
                PORTA_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 41U
            {
                PORTB_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 42U
            {
                PORTC_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 43U
            {
                PORTD_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 44U
            {
                PORTE_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 45U
            {
                QSPI_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 46U
            {
                RTC0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 47U
            {
                SAI0_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
            #if CLOCK_IP_GATES_NO > 48U
            {
                SAI1_CLK,                  /*!<     name;                    */
                1U,                           /*!<     enable;                  */
            },
            #endif
        },

        /* PCFS initialization. */
        {
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
        },

        /* Clock monitor */ 
        {     
           {
               RESERVED_CLK,
               0U,
               0U,
               0U,
           },
        },

        /* Specific peripheral initialization. */
        {
            0U,
            {
                {
                    RESERVED_VALUE,
                    0U,
                },
            },
        },
    
    
        /* Configured frequency values. */
        {
            {
                RESERVED_CLK,
                0U,
            },
        },

    },

};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

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

