#ifndef H_UICR_REG
#define H_UICR_REG
/*
 * Lasertag on Nordic NRF51
 * Macro definitions for User Information Configuration Registers
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
/* Length of code region 0 */
#define CLENR0   MMIO32(UICR + 0x000)
// Length of code region 0 in bytes. The value must be a mult of "Code pg size"

/* Read back protection configuration */
#define RBPCONF   MMIO32(UICR + 0x000)
// Protect region 0. Enable or disable read-back protection of code region 0.
#define PR0_SFT  0
#define PR0_MSK  0xff
// Protect all. Enable or disable read-back protection of all code in device.
#define PALL_SFT 8
#define PALL_MSK 0xff

/* Reset value for XTALFREQ in CLOCK, see CLOCK chapter */
#define XTALFREQU   MMIO32(UICR + 0x000)
// Reset value for XTALFREQ in CLOCK, see CLOCK chapter
#define XTALFREQU16M    0xff
#define XTALFREQU32M    0x00

/* Firmware ID */
#define FWID   MMIO32(UICR + 0x000)
// Firmware ID. FWID[15:0]

/* Bootloader address */
#define BOOTLOADERADDR   MMIO32(UICR + 0x000)
// Bootloader address. BOOTLOADERADDR[31:0]

/* Reserved for Nordic firmware design */
#define NRFFW(n)   MMIO32(UICR + 0x14 + n*4)
/* Reserved for Nordic hardware design */
#define NRFHW(n)   MMIO32(UICR + 0x50 + n*4)
/* Reserved for customer */
#define CUSTOMER(n)   MMIO32(UICR + 0x80 + n*4)

#endif
