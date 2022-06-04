#ifndef H_FICR_REG
#define H_FICR_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Factory Information Configuration Registers
 *
 * Copyright 2022 Mikhail Belkin <dltech174@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "memorymap.h"

/************Registers*********************/
/* Code memory page size */
#define CODEPAGESIZE    MMIO32(FICR + 0x10)
// Code memory page size. CODEPAGESIZE[31:0]

/* Code memory size */
#define CODESIZE        MMIO32(FICR + 0x14)
// Code memory size in number of pages CODESIZE[31:0]

/* Length of Code region 0 in bytes */
#define CLENR0          MMIO32(FICR + 0x28)
// Length of code region 0 in bytes.The value must be a mult of "Code page size"

/* Pre-programmed factory Code present */
#define PPFC            MMIO32(FICR + 0x2c)
// Pre-programmed factory Code present or not.
#define PPFC_YES    0x00
#define PPFC_NO     0xff

/* Number of individually controllable RAM blocks */
#define NUMRAMBLOCK     MMIO32(FICR + 0x34)
// Number of individually controllable RAM blocks. NUMRAMBLOCK[31:0]

/* RAM block size, in bytes */
#define SIZERAMBLOCKS   MMIO32(FICR + 0x38)
//  RAM block size, in bytes. SIZERAMBLOCKS[31:0]

/* Size of RAM block n, in bytes */
#define SIZERAMBLOCK0   MMIO32(FICR + 0x38)
#define SIZERAMBLOCK1   MMIO32(FICR + 0x3c)
#define SIZERAMBLOCK2   MMIO32(FICR + 0x40)
#define SIZERAMBLOCK3   MMIO32(FICR + 0x44)
// Size of RAM block n, in bytes. SIZERAMBLOCK[31:0]

/* Configuration identifier */
#define CONFIGID        MMIO32(FICR + 0x5c)
// Identification number for the HW. HWID[31:0]

/* Device identifier */
#define DEVICEID0       MMIO32(FICR + 0x60)
#define DEVICEID1       MMIO32(FICR + 0x64)
// 64 bit unique device identifier DEVICEID[31:0]

/* Encryption Root, word n */
#define ER0             MMIO32(FICR + 0x80)
#define ER1             MMIO32(FICR + 0x84)
#define ER2             MMIO32(FICR + 0x88)
#define ER3             MMIO32(FICR + 0x8c)
// Encryption Root, word n. ER[31:0]

/* Identity Root, word n */
#define IR0             MMIO32(FICR + 0x90)
#define IR1             MMIO32(FICR + 0x94)
#define IR2             MMIO32(FICR + 0x98)
#define ER3             MMIO32(FICR + 0x9c)
// Identity Root, word n. IR[31:0]

/* Device address type */
#define DEVICEADDRTYPE  MMIO32(FICR + 0xa0)
// Device address type
#define DEVICEADDRTYPE_PUBLIC   0
#define DEVICEADDRTYPE_RANDOM   1

/* Device address */
#define DEVICEADDR0     MMIO32(FICR + 0xa4)
#define DEVICEADDR1     MMIO32(FICR + 0xa8)
// 48 bit device address. DEVICEADDR[31:0]

/* Override enable */
#define OVERRIDEEN      MMIO32(FICR + 0xac)
// Override default values for NRF_1MBIT mode
#define NRF_1MBIT   0x1
// Override default values for BLE_1MBIT mode
#define BLE_1MBIT   0x8

/* Override value for NRF_1MBIT mode */
#define NRF_1MBIT0      MMIO32(FICR + 0xb0)
#define NRF_1MBIT1      MMIO32(FICR + 0xb4)
#define NRF_1MBIT2      MMIO32(FICR + 0xb8)
#define NRF_1MBIT3      MMIO32(FICR + 0xbc)
#define NRF_1MBIT4      MMIO32(FICR + 0xc0)
// Override values for 1Mbit proprietary mode. OVERRIDE[31:0]

/* Override value for BLE_1MBIT mode */
#define BLE_1MBIT0      MMIO32(FICR + 0xec)
#define BLE_1MBIT1      MMIO32(FICR + 0xf0)
#define BLE_1MBIT2      MMIO32(FICR + 0xf4)
#define BLE_1MBIT3      MMIO32(FICR + 0xf8)
#define BLE_1MBIT4      MMIO32(FICR + 0xfc)
// Value to be written to RADIO.OVERRIDE[n] register if OVERRIDEEN is set.

#endif
