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
/*==================================================================================================
==================================================================================================*/
/*
@brief   The consistency of the configuration must be checked by the configuration tool(s).
@brief   (SWS_Can_00022) The code configuration of the Can module is CAN controller specific.
         If the CAN controller is sited on-chip, the code generation tool for the Can module is Controller specific.
         If the CAN controller is an external device the generation tool must not be Controller specific.
@brief   (SWS_Can_00024) The valid values that can be configured are hardware dependent.
         Therefore the rules and constraints can't be given in the standard.
         The configuration tool is responsible to do a static configuration checking, also regarding dependencies between modules (i.e. Port driver, MCU driver etc.)
*/

#ifndef CAN_PBCFG_H
#define CAN_PBCFG_H

/**
*   @file    Can_PBcfg.h
*   @version 1.0.1
*
*   @brief   AUTOSAR Can - module interface
*   @details Configuration settings generated by user settings.
*
*   @addtogroup CAN_DRIVER
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, External identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, Identifiers declared in the same scope and name space shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, Macro identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, Identifiers shall be distinct from macro names.
* The used compilers use more than 31 chars for identifiers.
*
* @section Can_Cfg_h_REF_1
* Violates MISRA 2012 Advisory Rule 2.5, A project should not contain unused macro declarations.
* Some macro are required by ASR even they are not use in MCAL layer
*
* @section Can_Cfg_h_REF_2
* Violates MISRA 2012 Advisory Rule 4.9, A function should be used in preference to a function-like macro where they are interchangeable.
* Function like macro are used to reduce code complexity
*/

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/*
* @file           Can_PBcfg.h
*/
#define CAN_VENDOR_ID_PBCFG_H 43
#define CAN_AR_RELEASE_MAJOR_VERSION_PBCFG_H 4
#define CAN_AR_RELEASE_MINOR_VERSION_PBCFG_H 4
#define CAN_AR_RELEASE_REVISION_VERSION_PBCFG_H 0
#define CAN_SW_MAJOR_VERSION_PBCFG_H 1
#define CAN_SW_MINOR_VERSION_PBCFG_H 0
#define CAN_SW_PATCH_VERSION_PBCFG_H 1

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define CAN_CONFIG_PB \
    extern const Can_ConfigType Can_Config;

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* _CAN_PBCFG_H_ */
