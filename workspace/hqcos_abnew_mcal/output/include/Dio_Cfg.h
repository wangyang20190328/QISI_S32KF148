/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : GPIO
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

#ifndef DIO_CFG_H
#define DIO_CFG_H

/**
*   @file Dio_Cfg.h
*   @implements Dio_Cfg.h_Artifact
*
*   @defgroup DIO_CFG Dio Cfg
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include  "StandardTypes.h"


/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define DIO_VENDOR_ID_CFG_H                   43
#define DIO_AR_RELEASE_MAJOR_VERSION_CFG_H    4
#define DIO_AR_RELEASE_MINOR_VERSION_CFG_H    4
#define DIO_AR_RELEASE_REVISION_VERSION_CFG_H 0
#define DIO_SW_MAJOR_VERSION_CFG_H            1
#define DIO_SW_MINOR_VERSION_CFG_H            0
#define DIO_SW_PATCH_VERSION_CFG_H            1

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* StandardTypes.h version check start */
    #if ((DIO_AR_RELEASE_MAJOR_VERSION_CFG_H != STD_AR_RELEASE_MAJOR_VERSION) ||   \
        (DIO_AR_RELEASE_MINOR_VERSION_CFG_H != STD_AR_RELEASE_MINOR_VERSION)       \
        )
        #error "AUTOSAR Version Numbers of Dio_Cfg.h and StandardTypes.h are different"
    #endif
    /* StandardTypes.h version check end */
#endif
/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/

/**
* @brief          Enable or Disable Development Error Detection.
*
* @implements     DIO_DEV_ERROR_DETECT_define
*/
#define DIO_DEV_ERROR_DETECT    (STD_OFF)

/**
* @brief          Function @p Dio_GetVersionInfo() enable switch.
*
* @implements DIO_VERSION_INFO_API_define
*/
#define DIO_VERSION_INFO_API    (STD_OFF)

/**
* @brief          Function @p Dio_FlipChannel() enable switch.
*/
#define DIO_FLIP_CHANNEL_API    (STD_OFF)

/**
* @brief          Function @p Dio_MaskedWritePort() enable switch.
*/
#define DIO_MASKEDWRITEPORT_API (STD_OFF)

/**
* @brief          Reversed port functionality enable switch.
*
* @implements DIO_REVERSEPORTBITS_define
*/
#define DIO_REVERSEPORTBITS     (STD_OFF)

/**
* @brief          Undefined pins masking enable switch.
*/
#define DIO_READZERO_UNDEFINEDPORTS (STD_OFF)



/**
* @brief          The number of partition on the platform.
*
* @note           Used for channel, port and channel group validation.
*/

/**
* @brief Enable/Disable multiocre function from the driver
*/
#define DIO_MULTICORE_ENABLED          (STD_OFF)

/**
* @brief          Number of implemented ports.
*
* @note           Used for channel, port and channel group validation.
*/
#define DIO_NUM_PORTS_U16               ((uint16)0x5)

/**
* @brief          The number of partition on the port
*
* @note           Used for port validation.
*/
#define DIO_PORT_PARTITION_U16          ((uint16)5U)

/**
* @brief          Number of channels available on the implemented ports.
*
* @note           Used for channel validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_NUM_CHANNELS_U16            ((uint16)155U)
#endif

/**
* @brief The number of partition on the channel.
*
* @note           Used for channel validation.
*/
#define DIO_CHANNEL_PARTITION_U16            ((uint16)156U)

/**
* @brief          Mask representing no available channels on a port.
*
* @note           Used for channel validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_NO_AVAILABLE_CHANNELS_U16   ((Dio_PortLevelType)0x0U)
#endif

/**
* @brief          Mask representing the maximum valid offset for a channel group.
*
* @note           Used for channel group validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_MAX_VALID_OFFSET_U8         ((uint8)0x1FU)
#endif

/**
*   @brief   Enables or disables the access to a hardware register from user mode
*            USER_MODE_SOFT_LOCKING:        All reads to hw registers will be done via REG_PROT, user mode access
*            SUPERVISOR_MODE_SOFT_LOCKING:  Locks the access to the registers only for supervisor mode
*
*   @note    Currently, no register protection mechanism is used for Dio driver.
*/
#define DIO_USER_MODE_SOFT_LOCKING      (STD_OFF)

/**
* @brief          Dio driver Pre-Compile configuration switch.
*/
#define DIO_PRECOMPILE_SUPPORT


/**
* @brief Support for User mode.
*        If this parameter has been configured to 'STD_ON', the Dio driver code can be executed from both supervisor and user mode.
*
*/

#define DIO_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef DIO_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == DIO_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Dio in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == DIO_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef DIO_ENABLE_USER_MODE_SUPPORT*/
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/**
* @brief          Symbolic name for the configuration Dio_ConfigPC.
*
*/
#define Dio_ConfigPC    (Dio_Config)

/* ========== DioConfig ========== */

/* ---------- DioPort_A ---------- */

/**
* @brief          Symbolic name for the port DioPort_A.
*
*/
#define DioConf_DioPort_DioPort_A  ((uint8)0x00U)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_SOC_FAULT_IN.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_SOC_FAULT_IN ((uint16)0x0009U)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_POWER_ON_LED.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_POWER_ON_LED ((uint16)0x000eU)



/**
* @brief          Symbolic name for the channel DioChannel_BREAK_SHOE_ALARM1_IN.
*
*/
#define  DioConf_DioChannel_DioChannel_BREAK_SHOE_ALARM1_IN ((uint16)0x000fU)



/**
* @brief          Symbolic name for the channel DioChannel_BREAK_SHOE_ALARM2_IN.
*
*/
#define  DioConf_DioChannel_DioChannel_BREAK_SHOE_ALARM2_IN ((uint16)0x0010U)



/**
* @brief          Symbolic name for the channel DioChannel_BRAKE_OIL_LEVEL_ALARM_IN.
*
*/
#define  DioConf_DioChannel_DioChannel_BRAKE_OIL_LEVEL_ALARM_IN ((uint16)0x0011U)



/**
* @brief          Symbolic name for the channel DioChannel_UNDER_VOL_FLAG.
*
*/
#define  DioConf_DioChannel_DioChannel_UNDER_VOL_FLAG ((uint16)0x0012U)



/**
* @brief          Symbolic name for the channel DioChannel_OVER_VOL_FLAG.
*
*/
#define  DioConf_DioChannel_DioChannel_OVER_VOL_FLAG ((uint16)0x0013U)



/**
* @brief          Symbolic name for the channel DioChannel_FAN_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_FAN_PGOOD ((uint16)0x0014U)



/**
* @brief          Symbolic name for the channel DioChannel_SYS_3V3_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_SYS_3V3_PGOOD ((uint16)0x0015U)



/**
* @brief          Symbolic name for the channel DioChannel_EXT_3V3_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_EXT_3V3_PGOOD ((uint16)0x0016U)



/**
* @brief          Symbolic name for the channel DioChannel_PA_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_PA_PGOOD ((uint16)0x0017U)



/**
* @brief          Symbolic name for the channel DioChannel_DSI0_1V0_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_DSI0_1V0_PGOOD ((uint16)0x0018U)



/**
* @brief          Symbolic name for the channel DioChannel_BSTON.
*
*/
#define  DioConf_DioChannel_DioChannel_BSTON ((uint16)0x0019U)

/* ---------- DioPort_B ---------- */

/**
* @brief          Symbolic name for the port DioPort_B.
*
*/
#define DioConf_DioPort_DioPort_B  ((uint8)0x01U)



/**
* @brief          Symbolic name for the channel DioChannel_IGN_INPUT_DETECT.
*
*/
#define  DioConf_DioChannel_DioChannel_IGN_INPUT_DETECT ((uint16)0x002bU)



/**
* @brief          Symbolic name for the channel DioChannel_FAN_PWR_IN.
*
*/
#define  DioConf_DioChannel_DioChannel_FAN_PWR_IN ((uint16)0x002cU)



/**
* @brief          Symbolic name for the channel DioChannel_ALL_OP_SHDN.
*
*/
#define  DioConf_DioChannel_DioChannel_ALL_OP_SHDN ((uint16)0x002dU)



/**
* @brief          Symbolic name for the channel DioChannel_DISP_PASSENGER_INT.
*
*/
#define  DioConf_DioChannel_DioChannel_DISP_PASSENGER_INT ((uint16)0x0033U)



/**
* @brief          Symbolic name for the channel DioChannel_PHY_0V9_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_PHY_0V9_PGOOD ((uint16)0x0036U)



/**
* @brief          Symbolic name for the channel DioChannel_FIR_AVDD12_EXT_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_FIR_AVDD12_EXT_PGOOD ((uint16)0x0037U)



/**
* @brief          Symbolic name for the channel DioChannel_DISP_CENTER_INT.
*
*/
#define  DioConf_DioChannel_DioChannel_DISP_CENTER_INT ((uint16)0x0038U)



/**
* @brief          Symbolic name for the channel DioChannel_DISP_CLUSTER_INT.
*
*/
#define  DioConf_DioChannel_DioChannel_DISP_CLUSTER_INT ((uint16)0x003aU)



/**
* @brief          Symbolic name for the channel DioChannel_DISP_RIGHT_INT.
*
*/
#define  DioConf_DioChannel_DioChannel_DISP_RIGHT_INT ((uint16)0x003eU)



/**
* @brief          Symbolic name for the channel DioChannel_ETH_WAKE_UP_DETECT.
*
*/
#define  DioConf_DioChannel_DioChannel_ETH_WAKE_UP_DETECT ((uint16)0x003fU)

/* ---------- DioPort_C ---------- */

/**
* @brief          Symbolic name for the port DioPort_C.
*
*/
#define DioConf_DioPort_DioPort_C  ((uint8)0x02U)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_MAX20030_EN1.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_MAX20030_EN1 ((uint16)0x004aU)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_MAX20030_EN2.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_MAX20030_EN2 ((uint16)0x004bU)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_MAX20030_EN3.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_MAX20030_EN3 ((uint16)0x004cU)



/**
* @brief          Symbolic name for the channel DioChannel_MCU_MAX20030_EN4.
*
*/
#define  DioConf_DioChannel_DioChannel_MCU_MAX20030_EN4 ((uint16)0x004dU)



/**
* @brief          Symbolic name for the channel DioChannel_EXT1_1V8_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_EXT1_1V8_PGOOD ((uint16)0x0052U)



/**
* @brief          Symbolic name for the channel DioChannel_SYS_1V8_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_SYS_1V8_PGOOD ((uint16)0x0054U)



/**
* @brief          Symbolic name for the channel DioChannel_EXT2_1V8_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChannel_EXT2_1V8_PGOOD ((uint16)0x0055U)



/**
* @brief          Symbolic name for the channel DioChannel_KBD_PWM_1_EN.
*
*/
#define  DioConf_DioChannel_DioChannel_KBD_PWM_1_EN ((uint16)0x0056U)



/**
* @brief          Symbolic name for the channel DioChannel_KBD_PWM_1_FAULT.
*
*/
#define  DioConf_DioChannel_DioChannel_KBD_PWM_1_FAULT ((uint16)0x0058U)



/**
* @brief          Symbolic name for the channel DioChannel_KBD_PWM_2_EN.
*
*/
#define  DioConf_DioChannel_DioChannel_KBD_PWM_2_EN ((uint16)0x0059U)



/**
* @brief          Symbolic name for the channel DioChannel_KBD_PWM_2_FAULT.
*
*/
#define  DioConf_DioChannel_DioChannel_KBD_PWM_2_FAULT ((uint16)0x005aU)



/**
* @brief          Symbolic name for the channel DioChannel_ACC_SENSOR_FSYNC.
*
*/
#define  DioConf_DioChannel_DioChannel_ACC_SENSOR_FSYNC ((uint16)0x005bU)



/**
* @brief          Symbolic name for the channel DioChannel_ACC_SENSOR_INT1.
*
*/
#define  DioConf_DioChannel_DioChannel_ACC_SENSOR_INT1 ((uint16)0x005cU)



/**
* @brief          Symbolic name for the channel DioChannel_ACC_SENSOR_INT2.
*
*/
#define  DioConf_DioChannel_DioChannel_ACC_SENSOR_INT2 ((uint16)0x005dU)

/* ---------- DioPort_D ---------- */

/**
* @brief          Symbolic name for the port DioPort_D.
*
*/
#define DioConf_DioPort_DioPort_D  ((uint8)0x03U)



/**
* @brief          Symbolic name for the channel DioChanne_MCU_MB_SENSOR_INT.
*
*/
#define  DioConf_DioChannel_DioChanne_MCU_MB_SENSOR_INT ((uint16)0x0060U)



/**
* @brief          Symbolic name for the channel DioChanne_SOC_TO_MCU_INT_3V3.
*
*/
#define  DioConf_DioChannel_DioChanne_SOC_TO_MCU_INT_3V3 ((uint16)0x0061U)



/**
* @brief          Symbolic name for the channel DioChanne_MCU_TO_SOC_INT_3V3.
*
*/
#define  DioConf_DioChannel_DioChanne_MCU_TO_SOC_INT_3V3 ((uint16)0x0062U)



/**
* @brief          Symbolic name for the channel DioChanne_MCU_RESET_SOC_IN.
*
*/
#define  DioConf_DioChannel_DioChanne_MCU_RESET_SOC_IN ((uint16)0x0063U)



/**
* @brief          Symbolic name for the channel DioChanne_SOC_RES_OUT.
*
*/
#define  DioConf_DioChannel_DioChanne_SOC_RES_OUT ((uint16)0x006dU)



/**
* @brief          Symbolic name for the channel DioChanne_AUDIO_PA_FAULT.
*
*/
#define  DioConf_DioChannel_DioChanne_AUDIO_PA_FAULT ((uint16)0x006eU)



/**
* @brief          Symbolic name for the channel DioChanne_MCU_REST_PA.
*
*/
#define  DioConf_DioChannel_DioChanne_MCU_REST_PA ((uint16)0x0074U)



/**
* @brief          Symbolic name for the channel DioChanne_DISP_LEFT_INT.
*
*/
#define  DioConf_DioChannel_DioChanne_DISP_LEFT_INT ((uint16)0x0075U)



/**
* @brief          Symbolic name for the channel DioChanne_A2B_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChanne_A2B_PGOOD ((uint16)0x0079U)



/**
* @brief          Symbolic name for the channel DioChanne_CSI1_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChanne_CSI1_1V2_PGOOD ((uint16)0x007bU)



/**
* @brief          Symbolic name for the channel DioChanne_CSI0_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChanne_CSI0_1V2_PGOOD ((uint16)0x007cU)



/**
* @brief          Symbolic name for the channel DioChanne_CSI2_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChanne_CSI2_1V2_PGOOD ((uint16)0x007dU)



/**
* @brief          Symbolic name for the channel DioChanne_CSI3_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_DioChanne_CSI3_1V2_PGOOD ((uint16)0x007eU)



/**
* @brief          Symbolic name for the channel DioChanne_WDOFF_EN.
*
*/
#define  DioConf_DioChannel_DioChanne_WDOFF_EN ((uint16)0x007fU)

/* ---------- DioPort_E ---------- */

/**
* @brief          Symbolic name for the port DioPort_E.
*
*/
#define DioConf_DioPort_DioPort_E  ((uint8)0x04U)



/**
* @brief          Symbolic name for the channel PortPin_I2S_PA_SYNC.
*
*/
#define  DioConf_DioChannel_PortPin_I2S_PA_SYNC ((uint16)0x0082U)



/**
* @brief          Symbolic name for the channel PortPin_MCU_CAN0_STB.
*
*/
#define  DioConf_DioChannel_PortPin_MCU_CAN0_STB ((uint16)0x0083U)



/**
* @brief          Symbolic name for the channel PortPin_PA_PWR_EN.
*
*/
#define  DioConf_DioChannel_PortPin_PA_PWR_EN ((uint16)0x0087U)



/**
* @brief          Symbolic name for the channel PortPin_FAN_FAULT.
*
*/
#define  DioConf_DioChannel_PortPin_FAN_FAULT ((uint16)0x008aU)



/**
* @brief          Symbolic name for the channel PortPin_FAN_ALERT.
*
*/
#define  DioConf_DioChannel_PortPin_FAN_ALERT ((uint16)0x008bU)



/**
* @brief          Symbolic name for the channel PortPin_SBC_INT.
*
*/
#define  DioConf_DioChannel_PortPin_SBC_INT ((uint16)0x0091U)



/**
* @brief          Symbolic name for the channel PortPin_MCU_HVEN.
*
*/
#define  DioConf_DioChannel_PortPin_MCU_HVEN ((uint16)0x0093U)



/**
* @brief          Symbolic name for the channel PortPin_CHARGE_INT.
*
*/
#define  DioConf_DioChannel_PortPin_CHARGE_INT ((uint16)0x0094U)



/**
* @brief          Symbolic name for the channel PortPin_AUDIO_PA1_FAULT.
*
*/
#define  DioConf_DioChannel_PortPin_AUDIO_PA1_FAULT ((uint16)0x0095U)



/**
* @brief          Symbolic name for the channel PortPin_AUDIO_PA1_WARN.
*
*/
#define  DioConf_DioChannel_PortPin_AUDIO_PA1_WARN ((uint16)0x0096U)



/**
* @brief          Symbolic name for the channel PortPin_AUDIO_PA2_FAULT.
*
*/
#define  DioConf_DioChannel_PortPin_AUDIO_PA2_FAULT ((uint16)0x0097U)



/**
* @brief          Symbolic name for the channel PortPin_AUDIO_PA2_WARN.
*
*/
#define  DioConf_DioChannel_PortPin_AUDIO_PA2_WARN ((uint16)0x0098U)



/**
* @brief          Symbolic name for the channel PortPin_DSI0_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_PortPin_DSI0_1V2_PGOOD ((uint16)0x009aU)



/**
* @brief          Symbolic name for the channel PortPin_DSI1_1V2_PGOOD.
*
*/
#define  DioConf_DioChannel_PortPin_DSI1_1V2_PGOOD ((uint16)0x009bU)


/*=================================================================================================
*                                             ENUMS
=================================================================================================*/

/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/**
* @brief          Type of a DIO port representation.
*
* @implements     Dio_PortType_typedef
*/
typedef uint8 Dio_PortType;

/**
* @brief          Type of a DIO channel representation.
*
* @implements     Dio_ChannelType_typedef
*/
typedef uint16 Dio_ChannelType;

/**
* @brief          Type of a DIO port levels representation.
*
* @implements     Dio_PortLevelType_typedef
*/
typedef uint32 Dio_PortLevelType;

/**
* @brief          Type of a DIO channel levels representation.
*
* @implements     Dio_LevelType_typedef
*/
typedef uint8 Dio_LevelType;

/**
* @brief          Type of a DIO channel group representation.
*
* @implements     Dio_ChannelGroupType_struct
*/
typedef struct
{
    Dio_PortType      port;      /**< @brief Port identifier.  */
    uint8             u8offset;    /**< @brief Bit offset within the port. */
    Dio_PortLevelType mask;      /**< @brief Group mask. */
} Dio_ChannelGroupType;

/**
* @brief          Type of a DIO configuration structure.
*
* @note           In this implementation there is no need for a configuration
*                 structure there is only a dummy field, it is recommended
*                 to initialize this field to zero.
*
* @implements     Dio_ConfigType_struct
*/
typedef struct
{
    uint8 u8NumChannelGroups; /**< @brief Number of channel groups in configuration */
    const Dio_ChannelGroupType * pChannelGroupList;  /**< @brief
                                               Pointer to list of channel groups in configuration */
    const uint32 * pau32Dio_ChannelToPartitionMap;      /**< @brief Pointer to channel to partition mapping */
    const uint32 * pau32Dio_PortToPartitionMap;         /**< @brief Pointer to port to partition mapping */
} Dio_ConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
#define DIO_START_SEC_CONST_32
#include "Dio_MemMap.h"
/**
* @brief Array containing list of mapping channel for partition
*/
extern const uint32 Dio_au32ChannelToPartitionMap[DIO_CHANNEL_PARTITION_U16];

/**
* @brief Array containing list of mapping port for partition
*/
extern const uint32 Dio_au32PortToPartitionMap[DIO_PORT_PARTITION_U16];

/**
* @brief Array of bitmaps of output pins available per port
*/
extern const Dio_PortLevelType Dio_aAvailablePinsForWrite[DIO_NUM_PORTS_U16];

/**
* @brief Array of bitmaps of input pins available per port
*/
extern const Dio_PortLevelType Dio_aAvailablePinsForRead[DIO_NUM_PORTS_U16];

#define DIO_STOP_SEC_CONST_32
#include "Dio_MemMap.h"

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* DIO_CFG_H */

/** @} */
