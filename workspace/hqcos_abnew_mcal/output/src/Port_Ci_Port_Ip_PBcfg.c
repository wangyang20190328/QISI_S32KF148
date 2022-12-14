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
*   @file    Port_Ci_Port_Ip__PBcfg.c
*
*   @addtogroup Port_CFG
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
#include "Port_Ci_Port_Ip.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/**
* @brief        Parameters that shall be published within the Port driver header file and also in the
*               module description file
* @details      The integration of incompatible files shall be avoided.
*
*/
#define PORT_CI_PORT_IP_VENDOR_ID_PBCFG_C                       43
#define PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C        4
#define PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C        4
#define PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C     0
#define PORT_CI_PORT_IP_SW_MAJOR_VERSION_PBCFG_C                1
#define PORT_CI_PORT_IP_SW_MINOR_VERSION_PBCFG_C                0
#define PORT_CI_PORT_IP_SW_PATCH_VERSION_PBCFG_C                1

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if the files Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h are of the same vendor */
#if (PORT_CI_PORT_IP_VENDOR_ID_PBCFG_C != PORT_CI_PORT_IP_VENDOR_ID_H)
    #error "Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h have different vendor ids"
#endif
/* Check if the files Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h are of the same Autosar version */
#if ((PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MAJOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C    != PORT_CI_PORT_IP_AR_RELEASE_MINOR_VERSION_H)  || \
     (PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != PORT_CI_PORT_IP_AR_RELEASE_REVISION_VERSION_H)  \
    )
    #error "AutoSar Version Numbers of Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h are different"
#endif
/* Check if the files Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h are of the same software version */
#if ((PORT_CI_PORT_IP_SW_MAJOR_VERSION_PBCFG_C != PORT_CI_PORT_IP_SW_MAJOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_MINOR_VERSION_PBCFG_C != PORT_CI_PORT_IP_SW_MINOR_VERSION_H) || \
     (PORT_CI_PORT_IP_SW_PATCH_VERSION_PBCFG_C != PORT_CI_PORT_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Port_Ci_Port_Ip_PBcfg.c and Port_Ci_Port_Ip.h are different"
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
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

const Port_Ci_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr[NUM_OF_CONFIGURED_PINS] =
{
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 0,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 1,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 2,
        .mux                         = PORT_MUX_ALT6,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 3,
        .mux                         = PORT_MUX_ALT6,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 6,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 7,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 8,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 9,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 14,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 15,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 16,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 17,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 18,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 19,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 20,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 21,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 22,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 23,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 24,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTA,
        .gpioBase                    = IP_PTA,
        .pinPortIdx                  = 25,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 4,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 8,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 9,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 10,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 11,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 12,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 13,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 14,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 15,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 16,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 17,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 19,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 20,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 21,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 22,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 23,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 24,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 26,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 30,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTB,
        .gpioBase                    = IP_PTB,
        .pinPortIdx                  = 31,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 0,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 1,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 2,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 6,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 7,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 8,
        .mux                         = PORT_MUX_ALT2,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 9,
        .mux                         = PORT_MUX_ALT2,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 10,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 11,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 12,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 13,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 17,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 18,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 20,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 21,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 22,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 24,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 25,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 26,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 27,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 28,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = IP_PTC,
        .pinPortIdx                  = 29,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 30,
        .mux                         = PORT_MUX_ALT2,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTC,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 31,
        .mux                         = PORT_MUX_ALT2,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 0,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 1,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 2,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 3,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 5,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 6,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 7,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 8,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 9,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 10,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 11,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 12,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 13,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 14,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 17,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 20,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 21,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 22,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 23,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 24,
        .mux                         = PORT_MUX_ALT0,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 25,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 26,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 27,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 28,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 29,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 30,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTD,
        .gpioBase                    = IP_PTD,
        .pinPortIdx                  = 31,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 0,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 1,
        .mux                         = PORT_MUX_ALT4,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 2,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 3,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 4,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 5,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_UP_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 7,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 8,
        .mux                         = PORT_MUX_ALT5,
        .direction                   = PORT_CI_PORT_PIN_HIGH_Z,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 10,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 11,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 12,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 1
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 13,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 15,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = NULL_PTR,
        .pinPortIdx                  = 16,
        .mux                         = PORT_MUX_ALT3,
        .direction                   = PORT_CI_PORT_PIN_OUT,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 17,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 19,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 20,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 21,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 22,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 23,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 24,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 26,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    },
    {
        .portBase                    = IP_PORTE,
        .gpioBase                    = IP_PTE,
        .pinPortIdx                  = 27,
        .mux                         = PORT_MUX_AS_GPIO,
        .direction                   = PORT_CI_PORT_PIN_IN,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength               = PORT_DRIVE_STRENGTH_LOW,
        .passiveFilter               = (boolean)FALSE,
        .lockRegister                = PORT_LOCK_REGISTER_DISABLED,
        .digitalFilter               = (boolean)FALSE,
        .initValue                   = 0
    }
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

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
