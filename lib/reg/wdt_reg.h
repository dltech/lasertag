#ifndef H_WDT_REG
#define H_WDT_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Watchdog timer
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
/* Start the watchdog */
#define STARTWDT        MMIO32(WDT + 0x000)

/************Events************************/
/* Watchdog timeout */
#define TIMEOUTWDT      MMIO32(WDT + 0x100)

/************Registers*********************/
/* Enable interrupt */
#define INTENSETWDT     MMIO32(WDT + 0x304)
// Write '1' to Enable interrupt on TIMEOUT event.
#define TIMEOUTW    0x1

/* Disable interrupt */
#define INTENCLRWDT     MMIO32(WDT + 0x308)
// Write '1' to Clear interrupt on TIMEOUT event.

/* Run status */
#define RUNSTATUSWDT    MMIO32(WDT + 0x400)
// Indicates whether or not the watchdog is running
#define RUNSTATUSW  0x1

/* Request status */
#define REQSTATUSWDT    MMIO32(WDT + 0x404)
// Request status for RR[n] register
#define RR0W    0x01
#define RR1W    0x02
#define RR2W    0x04
#define RR3W    0x08
#define RR4W    0x10
#define RR5W    0x20
#define RR6W    0x40
#define RR7W    0x80

/* Counter reload value */
#define CRVWDT          MMIO32(WDT + 0x504)
// Counter reload value in number of cycles of the 32.768 kHz. CRV[31:0]

/* Enable register for reload request registers */
#define RRENWDT         MMIO32(WDT + 0x508)
// Enable or disable RR[n] register

/* Configuration register */
#define CONFIGWDT       MMIO32(WDT + 0x50c)
//Configure the wdt to either be paused, or kept running, while the CPU is sleep
#define SLEEPW  0x8
//Conf the wdt to either be paused, or kept running, while the CPU is halted
#define HALTW   0x1

/* Reload request n */
#define RR0WDT          MMIO32(WDT + 0x600)
#define RR1WDT          MMIO32(WDT + 0x604)
#define RR2WDT          MMIO32(WDT + 0x608)
#define RR3WDT          MMIO32(WDT + 0x60c)
#define RR4WDT          MMIO32(WDT + 0x610)
#define RR5WDT          MMIO32(WDT + 0x614)
#define RR6WDT          MMIO32(WDT + 0x618)
#define RR7WDT          MMIO32(WDT + 0x61c)
// Reload request register. Value to request a reload of the watchdog timer.

#endif
