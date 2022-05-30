#ifndef H_LPCOMP_REG
#define H_LPCOMP_REG
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
/* Start comparator */
#define STARTLPCOMP   MMIO32(LPCOMP + 0x000)
/* Stop comparator */
#define STOPLPCOMP    MMIO32(LPCOMP + 0x004)
/* Sample comparator value */
#define SAMPLELPCOMP  MMIO32(LPCOMP + 0x008)

/************Events************************/
/* LPCOMP is ready and output is valid */
#define READYLPCOMP   MMIO32(LPCOMP + 0x100)
/* Downward crossing */
#define DOWNLPCOMP    MMIO32(LPCOMP + 0x104)
/* Upward crossing */
#define UPLPCOMP      MMIO32(LPCOMP + 0x108)
/* Downward or upward crossing */
#define CROSSLPCOMP   MMIO32(LPCOMP + 0x10c)

/************Registers*********************/
/* Shortcut register */
#define SHORTSCOMP        MMIO32(LPCOMP + 0x200)
// Shortcut between READY event and SAMPLE task
#define READY_SAMPLE    0x10
// Shortcut between READY event and STOP task
#define READY_STOP      0x08
// Shortcut between DOWN event and STOP task
#define DOWN_STOP       0x04
// Shortcut between UP event and STOP task
#define UP_STOP         0x02
// Shortcut between CROSS event and STOP task
#define CROSS_STOP      0x01

/* Enable or disable interrupt */
#define INTENCOMP         MMIO32(LPCOMP + 0x300)
// Enable or disable interrupt on READY event
#define READYIT 0x8
// Enable or disable interrupt on DOWN event
#define DOWNIT  0x4
// Enable or disable interrupt on UP event
#define UPIT    0x2
// Enable or disable interrupt on CROSS event
#define CROSSIT 0x1

/* Enable interrupt */
#define INTENSETCOMP      MMIO32(LPCOMP + 0x304)
// Write '1' to Enable interrupt on READY event.
// Write '1' to Enable interrupt on DOWN event.
// Write '1' to Enable interrupt on UP event.
// Write '1' to Enable interrupt on CROSS event.

/* Disable interrupt */
#define INTENCLRCOMP      MMIO32(LPCOMP + 0x308)
// Write '1' to Clear interrupt on READY event.
// Write '1' to Clear interrupt on DOWN event.
// Write '1' to Clear interrupt on UP event.
// Write '1' to Clear interrupt on CROSS event.

/* Compare result */
#define RESULTCOMP        MMIO32(LPCOMP + 0x400)
// Result of last compare. Decision point SAMPLE task.
#define RESULTFL    0x1

/* Enable LPCOMP */
#define ENABLELPCOMP  MMIO32(LPCOMP + 0x500)
// Enable or disable LPCOMP
#define ENABLEFL    0x1

/* Input pin select */
#define PSELCOMP          MMIO32(LPCOMP + 0x504)
// Analog pin select
#define PSEL_AnalogInput0   0x0
#define PSEL_AnalogInput1   0x1
#define PSEL_AnalogInput2   0x2
#define PSEL_AnalogInput3   0x3
#define PSEL_AnalogInput4   0x4
#define PSEL_AnalogInput5   0x5
#define PSEL_AnalogInput6   0x6
#define PSEL_AnalogInput7   0x7

/* Reference select */
#define REFSELCOMP        MMIO32(LPCOMP + 0x508)
// Reference select
#define REFSEL_1_8VDD   0x0
#define REFSEL_2_8VDD   0x1
#define REFSEL_3_8VDD   0x2
#define REFSEL_4_8VDD   0x3
#define REFSEL_5_8VDD   0x4
#define REFSEL_6_8VDD   0x5
#define REFSEL_7_8VDD   0x6
#define REFSEL_AREF     0x7

/* External reference select */
#define EXTREFSELCOMP     MMIO32(LPCOMP + 0x50c)
// External analog reference select
#define EXTREFSEL_AnalogReference0  0x0
#define EXTREFSEL_AnalogReference1  0x1

/* Analog detect configuration */
#define ANADETECTCOMP     MMIO32(LPCOMP + 0x520)
// Analog detect configuration
#define ANADETECT_CROSS 0x0
#define ANADETECT_UP    0x1
#define ANADETECT_DOWN  0x2

#endif
