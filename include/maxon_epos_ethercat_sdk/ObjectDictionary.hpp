/*
** Copyright (2019-2020) Robotics Systems Lab - ETH Zurich:
** Jonas Junger, Johannes Pankert, Fabio Dubois, Lennart Nachtigall,
** Markus Staeuble
**
** This file is part of the maxon_epos_ethercat_sdk.
** The maxon_epos_ethercat_sdk is free software: you can redistribute it and/or
*modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** The maxon_epos_ethercat_sdk is distributed in the hope that it will be
*useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with the maxon_epos_ethercat_sdk. If not, see
*<https://www.gnu.org/licenses/>.
*/

#include <cstdint>
#include <vector>

#define OD_INDEX_RX_PDO_ASSIGNMENT uint16_t(0x1c12)
#define OD_INDEX_TX_PDO_ASSIGNMENT uint16_t(0x1c13)

#define OD_INDEX_TX_PDO_MAPPING_1 uint16_t(0x1A00)
#define OD_INDEX_TX_PDO_MAPPING_2 uint16_t(0x1A01)
#define OD_INDEX_TX_PDO_MAPPING_3 uint16_t(0x1A02)
#define OD_INDEX_TX_PDO_MAPPING_4 uint16_t(0x1A03)

#define OD_INDEX_RX_PDO_MAPPING_1 uint16_t(0x1600)
#define OD_INDEX_RX_PDO_MAPPING_2 uint16_t(0x1601)
#define OD_INDEX_RX_PDO_MAPPING_3 uint16_t(0x1602)
#define OD_INDEX_RX_PDO_MAPPING_4 uint16_t(0x1603)

#define OD_INDEX_ERROR_REGISTER (0x1001)
#define OD_INDEX_ERROR_HISTORY (0x1003)
#define OD_INDEX_DIAGNOSIS (0x10F3)
#define OD_INDEX_5VDC_SUPPLY (0x2200)
#define OD_INDEX_MOTOR_DATA (0x3001)
#define OD_INDEX_GEAR_DATA (0x3003)
#define OD_INDEX_ERROR_CODE (0x603F)
#define OD_INDEX_CONTROLWORD (0x6040)
#define OD_INDEX_STATUSWORD (0x6041)
#define OD_INDEX_QUICKSTOP_OPTION_CODE (0x605A)
#define OD_INDEX_SHUTDOWN_OPTION_CODE (0x605B)
#define OD_INDEX_DISABLE_OPERATION_OPTION_CODE (0x605C)
#define OD_INDEX_FAULT_REACTION_OPTION_CODE (0x605E)
#define OD_INDEX_MODES_OF_OPERATION (0x6060)
#define OD_INDEX_MODES_OF_OPERATION_DISPLAY (0x6061)
#define OD_INDEX_POSITION_ACTUAL (0x6064)
#define OD_INDEX_FOLLOW_ERROR_WINDOW (0x6065)
#define OD_INDEX_VELOCITY_DEMAND (0x606B)
#define OD_INDEX_SENSOR_SSI (0x3012)
#define OD_INDEX_HALL_SENSOR (0x301A)
#define OD_INDEX_VELOCITY_ACTUAL (0x606C)
#define OD_INDEX_TARGET_TORQUE (0x6071)
#define OD_INDEX_MOTOR_RATED_TORQUE (0x6076)
#define OD_INDEX_TORQUE_ACTUAL (0x6077)
#define OD_INDEX_CURRENT_CONTROL_PARAM (0x30A0)
#define OD_INDEX_POSITION_CONTROL_PARAM (0x30A1)
#define OD_INDEX_VELOCITY_CONTROL_PARAM (0x30A2)
#define OD_INDEX_CURRENT_ACTUAL (0x30D1)
#define OD_INDEX_TARGET_POSITION (0x607A)
#define OD_INDEX_POSITION_RANGE_LIMIT (0x607B)
#define OD_INDEX_SOFTWARE_POSITION_LIMIT (0x607D)
#define OD_INDEX_MAX_PROFILE_VELOCITY (0x607F)
#define OD_INDEX_MAX_MOTOR_SPEED (0x6080)
#define OD_INDEX_PROFILE_VELOCITY (0x6081)
#define OD_INDEX_PROFILE_ACCELERATION (0x6083)
#define OD_INDEX_PROFILE_DECELERATION (0x6084)
#define OD_INDEX_QUICKSTOP_DECELERATION (0x6085)
#define OD_INDEX_MOTION_PROFILE_TYPE (0x6086)
#define OD_INDEX_SI_UNIT_VELOCITY (0x60A9)
#define OD_INDEX_OFFSET_POSITION (0x60B0)
#define OD_INDEX_OFFSET_VELOCITY (0x60B1)
#define OD_INDEX_OFFSET_TORQUE (0x60B2)
#define OD_INDEX_INTERPOLATION_TIME_PERIOD (0x60C2)
#define OD_INDEX_MAX_ACCELERATION (0x60C5)
#define OD_INDEX_DIGITAL_INPUTS (0x60FD)
#define OD_INDEX_TARGET_VELOCITY (0x60FF)
#define OD_INDEX_ABORT_CONNECTION_OPTION_CODE (0x6007)
