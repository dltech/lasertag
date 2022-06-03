#ifndef H_POWER_REG
#define H_POWER_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Low Power Comparator
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

/*************Tasks************************/
/* Enable constant latency mode */
#define CONSTLAT        MMIO32(POWER + 0x078)
/* Enable low power mode (variable latency) */
#define LOWPWR          MMIO32(POWER + 0x07c)

/************Events************************/
/* Power failure warning */
#define POFWARN         MMIO32(POWER + 0x108)

/************Registers*********************/
/* Enable interrupt */
#define INTENSETPWR     MMIO32(POWER + 0x304)
// Write '1' to Enable interrupt on POFWARN event.
#define POFWARN 0x4

/* Disable interrupt */
#define INTENCLRPWR     MMIO32(POWER + 0x308)
// Write '1' to Clear interrupt on POFWARN event.

/* Reset reason */
#define RESETREASPWR    MMIO32(POWER + 0x400)
// Reset from pin-reset detected
#define RESETPINP   0x000001
// Reset from watchdog detected
#define DOGP        0x000002
// Reset from AIRCR.SYSRESETREQ detected
#define SREQP       0x000004
// Reset from CPU lock-up detected
#define LOCKUPP     0x000008
// Res due to wkup from sys OFF mode when wkup is trig from DETECT sig from GPIO
#define OFFP        0x040000
//Res to wkup from sys OFF mod when wkup is trig from ANADETECT sig from LPCOMP
#define LPCOMPP     0x080000
//Res to wkup from sys OFF mod when wkup is trig from enter into dbg iface mode
#define DIFP        0x100000

/* RAM status register */
#define RAMSTATUSPWR    MMIO32(POWER + 0x428)
// RAM block 0 is on or off/powering up
#define RAMBLOCK0   0x1
// RAM block 1 is on or off/powering up
#define RAMBLOCK1   0x2
// RAM block 2 is on or off/powering up
#define RAMBLOCK2   0x4
// RAM block 3 is on or off/powering up
#define RAMBLOCK3   0x8

/* System OFF register */
#define SYSTEMOFFPWR    MMIO32(POWER + 0x500)
// Enable system OFF mode
#define SYSTEMOFF   0x1

/* Power failure comparator configuration */
#define POFCONPWR       MMIO32(POWER + 0x510)
// Enable or disable power failure comparator
#define POF 0x1
// Power failure comparator threshold setting
#define THRESHOLD_2P1V  0x0
#define THRESHOLD_2P3V  0x2
#define THRESHOLD_2P5V  0x4
#define THRESHOLD_2P7V  0x6

/* General purpose retention register */
#define GPREGRETPWR     MMIO32(POWER + 0x51c)
// General purpose retention register. GPREGRET[7:0]

/* RAM on/off register (this register is retained) */
#define RAMONPWR        MMIO32(POWER + 0x524)
// Keep RAM block 0 on or off in system ON Mode
#define ONRAM0  0x1
// Keep RAM block 1 on or off in system ON Mode
#define ONRAM1  0x2
// Keep retention on RAM block 0 when RAM block is switched off
#define OFFRAM0 0x10000
// Keep retention on RAM block 1 when RAM block is switched off
#define OFFRAM1 0x20000

/* Reset configuration register */
#define RESETPWR        MMIO32(POWER + 0x544)
// Enable or disable pin reset in debug interface mode, see the DIF peripheral
#define RESETP  0x1

/* RAM on/off register (this register is retained) */
#define RAMONBPWR       MMIO32(POWER + 0x554)
// Keep RAM block 2 on or off in system ON Mode
#define ONRAM2  0x1
// Keep RAM block 3 on or off in system ON Mode
#define ONRAM3  0x2
// Keep retention on RAM block 2 when RAM block is switched off
#define OFFRAM2 0x10000
// Keep retention on RAM block 3 when RAM block is switched off
#define OFFRAM3 0x20000

/* DC/DC enable register */
#define DCDCENPWR       MMIO32(POWER + 0x578)
// Enable or disable DC/DC converter
#define DCDCEN  0x1

#endif
