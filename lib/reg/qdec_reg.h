#ifndef H_QDEC_REG
#define H_QDEC_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Quadrature Decoder
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

//
#define

/*************Tasks************************/
/* Task starting the quadrature decoder */
#define STARTQDEC       MMIO32(QDEC + 0x000)
/* Task stopping the quadrature decoder */
#define STOPQDEC        MMIO32(QDEC + 0x004)
/* Read and clear ACC and ACCDBL */
#define READCLRACC      MMIO32(QDEC + 0x008)

/************Events************************/
/*Event being generated for every new sample value written to the SAMPLE reg */
#define SAMPLERDY       MMIO32(QDEC + 0x100)
/* Non-null report ready */
#define REPORTRDY       MMIO32(QDEC + 0x104)
/* ACC or ACCDBL register overflow */
#define ACCOF           MMIO32(QDEC + 0x108)

/************Registers*********************/
/* Shortcut register */
#define SHORTSQDEC      MMIO32(QDEC + 0x200)
// Shortcut between REPORTRDY event and READCLRACC task
#define REPORTRDY_READCLRACC    0x1
// Shortcut between SAMPLERDY event and STOP task
#define SAMPLERDY_STOP          0x2

/* Enable or disable interrupt */
#define INTENQDEC       MMIO32(QDEC + 0x300)
// Enable or disable interrupt on SAMPLERDY event
#define SAMPLERDY   0x1
// Enable or disable interrupt on REPORTRDY event
#define REPORTRDY   0x2
// Enable or disable interrupt on ACCOF event
#define ACCOF       0x3

/* Enable interrupt */
#define INTENSETQDEC    MMIO32(QDEC + 0x304)
// Write '1' to Enable interrupt on SAMPLERDY event.
// Write '1' to Enable interrupt on REPORTRDY event.
// Write '1' to Enable interrupt on ACCOF event.

/* Disable interrupt */
#define INTENCLRQDEC    MMIO32(QDEC + 0x308)
// Write '1' to Clear interrupt on SAMPLERDY event.
// Write '1' to Clear interrupt on REPORTRDY event.
// Write '1' to Clear interrupt on ACCOF event.

/* Enable the quadrature decoder */
#define ENABLEQDEC      MMIO32(QDEC + 0x500)
// Enable or disable the quadrature decoder
#define ENABLEQ  0x1

/* LED output pin polarity */
#define LEDPOLQDEC      MMIO32(QDEC + 0x504)
// LED output pin polarity
#define LEDPOL  0x1

/* Sample period */
#define SAMPLEPERQDEC   MMIO32(QDEC + 0x508)
// Sample period. The SAMPLE register will be updated for every new sample
#define SAMPLEPER128US    0x0
#define SAMPLEPER256US    0x1
#define SAMPLEPER512US    0x2
#define SAMPLEPER1024US   0x3
#define SAMPLEPER2048US   0x4
#define SAMPLEPER4096US   0x5
#define SAMPLEPER8192US   0x6
#define SAMPLEPER16384US  0x7

/* Motion sample value */
#define SAMPLEQDEC      MMIO32(QDEC + 0x50c)
// Last motion sample. SAMPLE

/* Number of samples to be taken before a REPORTRDY event is generated */
#define REPORTPERQDEC   MMIO32(QDEC + 0x510)
// Specifies the number of samples to be accumulated in the ACC register
#define REPORTPER10   0x0
#define REPORTPER40   0x1
#define REPORTPER80   0x2
#define REPORTPER120  0x3
#define REPORTPER160  0x4
#define REPORTPER200  0x5
#define REPORTPER240  0x6
#define REPORTPER280  0x7

/* Register accumulating the valid transitions */
#define ACCQDEC         MMIO32(QDEC + 0x514)
// Register accumulating all valid samples read from the RENC. ACC

/* Snapshot of the ACC register, updated by the READCLRACC task */
#define ACCREADQDEC     MMIO32(QDEC + 0x518)
// Snapshot of the ACC register. ACCREAD

/* GPIO pin number to be used as LED output */
#define PSELLEDQDEC     MMIO32(QDEC + 0x51c)
// GPIO pin number to be used as LED output. PSELLED

/* GPIO pin number to be used as Phase A input */
#define PSELAQDEC       MMIO32(QDEC + 0x520)
// GPIO pin number to be used as Phase A input. PSELA

/* GPIO pin number to be used as Phase B input */
#define PSELBQDEC       MMIO32(QDEC + 0x524)
// GPIO pin number to be used as Phase B input. PSELB

/* Enable input debounce filters */
#define DBFENQDEC       MMIO32(QDEC + 0x528)
// Enable input debounce filters.
#define DBFEN   0x1

/* Time period the LED is switched ON prior to sampling */
#define LEDPREQDEC      MMIO32(QDEC + 0x540)
// Period in us the LED is switched on prior to sampling. LEDPRE [0..511]

/* Register accumulating the number of detected double transitions */
#define ACCDBLQDEC      MMIO32(QDEC + 0x544)
// Register accs the nmbr of detected dbl or illegal trans. ACCDBL[0..15]

/* Snapshot of the ACCDBL, updated by the READCLRACC task */
#define ACCDBLREADQDEC  MMIO32(QDEC + 0x548)
// Snapshot of the ACCDBL register. ACCDBLREAD[0..15]

#endif
