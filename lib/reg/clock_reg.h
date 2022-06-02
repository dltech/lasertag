#ifndef H_CLOCK_REG
#define H_CLOCK_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Clock management
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
/* Start HFCLK crystal oscillator */
#define HFCLKSTART      MMIO32(CLOCK + 0x000)
/* Stop HFCLK crystal oscillator */
#define HFCLKSTOP       MMIO32(CLOCK + 0x004)
/* Start LFCLK source */
#define LFCLKSTART      MMIO32(CLOCK + 0x008)
/* Stop LFCLK source */
#define LFCLKSTOP       MMIO32(CLOCK + 0x00c)
/* Start calibration of LFCLK RC oscillator */
#define CAL             MMIO32(CLOCK + 0x010)
/* Start calibration timer */
#define CTSTART         MMIO32(CLOCK + 0x014)
/* Stop calibration timer */
#define CTSTOP          MMIO32(CLOCK + 0x018)

/************Events************************/
/* HFCLK oscillator started */
#define HFCLKSTARTED    MMIO32(CLOCK + 0x100)
/* LFCLK started */
#define LFCLKSTARTED    MMIO32(CLOCK + 0x104)
/* Calibration of LFCLK RC oscillator complete event */
#define DONE            MMIO32(CLOCK + 0x10c)
/* Calibration timer timeout */
#define CTTO            MMIO32(CLOCK + 0x110)

/************Registers*********************/
/* Enable interrupt */
#define INTENSETCLOCK   MMIO32(CLOCK + 0x304)
// Write '1' to Enable interrupt on HFCLKSTARTED event.
#define HFCLKSTARTEDI   0x01
// Write '1' to Enable interrupt on LFCLKSTARTED event.
#define LFCLKSTARTEDI   0x02
// Write '1' to Enable interrupt on DONE event.
#define DONEI           0x08
// Write '1' to Enable interrupt on CTTO event.
#define CTTOI           0x10

/* Disable interrupt */
#define NTENCLRCLOCK    MMIO32(CLOCK + 0x308)
// Write '1' to Clear interrupt on HFCLKSTARTED event.
// Write '1' to Clear interrupt on LFCLKSTARTED event.
// Write '1' to Clear interrupt on DONE event.
// Write '1' to Clear interrupt on CTTO event.

/* Status indicating that HFCLKSTART task has been triggered */
#define HFCLKRUN        MMIO32(CLOCK + 0x408)
// HFCLKSTART task triggered or not
#define STATUS_TRIG16   0x1

/* Which HFCLK source is running */
#define HFCLKSTAT       MMIO32(CLOCK + 0x40c)
// Active clock source
#define SRC_16_XTAL 0x00001
// HFCLK state
#define STATE_RUN16 0x10000

/* Status indicating that LFCLKSTART task has been triggered */
#define LFCLKRUN        MMIO32(CLOCK + 0x414)
// LFCLKSTART task triggered or not
#define STATUS_TRIG 0x1

/* Which LFCLK source is running */
#define LFCLKSTAT       MMIO32(CLOCK + 0x418)
// Active clock source
// LFCLK state
#define STATE_RUN   0x10000

/* Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */
#define LFCLKSRCCOPY    MMIO32(CLOCK + 0x41c)
// Clock source

/* Clock source for the LFCLK */
#define LFCLKSRC        MMIO32(CLOCK + 0x518)
// Clock source
#define SRC_RC      0x0
#define SRC_XTAL    0x1
#define SRC_SYNTH   0x2

/* Calibration timer interval */
#define CTIV            MMIO32(CLOCK + 0x538)
// Calibration timer interval in multiple of 0.25 seconds. CTIV[6:0]

/* Crystal frequency */
#define XTALFREQ        MMIO32(CLOCK + 0x550)
// Select nominal frequency of external crystal for HFCLK.
#define XTALFREQ16MHZ   0xff
#define XTALFREQ32MHZ   0x00

#endif
