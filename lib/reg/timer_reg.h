#ifndef H_TIMER_REG
#define H_TIMER_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Timer/counter
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
/* Start Timer */
#define STARTTIMER0     MMIO32(TIMER0 + 0x000)
#define STARTTIMER1     MMIO32(TIMER1 + 0x000)
#define STARTTIMER2     MMIO32(TIMER2 + 0x000)
/* Stop Timer */
#define STOPTIMER0      MMIO32(TIMER0 + 0x004)
#define STOPTIMER1      MMIO32(TIMER1 + 0x004)
#define STOPTIMER2      MMIO32(TIMER2 + 0x004)
/* Increment Timer (Counter mode only) */
#define COUNTTIMER0     MMIO32(TIMER0 + 0x008)
#define COUNTTIMER1     MMIO32(TIMER1 + 0x008)
#define COUNTTIMER2     MMIO32(TIMER2 + 0x008)
/* Clear time */
#define CLEARTIMER0     MMIO32(TIMER0 + 0x00c)
#define CLEARTIMER1     MMIO32(TIMER1 + 0x00c)
#define CLEARTIMER2     MMIO32(TIMER2 + 0x00c)
/* Shut down timer */
#define SHUTDOWNTIMER0  MMIO32(TIMER0 + 0x010)
#define SHUTDOWNTIMER1  MMIO32(TIMER1 + 0x010)
#define SHUTDOWNTIMER2  MMIO32(TIMER2 + 0x010)
/* Capture Timer value to CCn register */
#define CAPTURE0TIMER0  MMIO32(TIMER0 + 0x040)
#define CAPTURE0TIMER1  MMIO32(TIMER1 + 0x040)
#define CAPTURE0TIMER2  MMIO32(TIMER2 + 0x040)
#define CAPTURE1TIMER0  MMIO32(TIMER0 + 0x044)
#define CAPTURE1TIMER1  MMIO32(TIMER1 + 0x044)
#define CAPTURE1TIMER2  MMIO32(TIMER2 + 0x044)
#define CAPTURE2TIMER0  MMIO32(TIMER0 + 0x048)
#define CAPTURE2TIMER1  MMIO32(TIMER1 + 0x048)
#define CAPTURE2TIMER2  MMIO32(TIMER2 + 0x048)
#define CAPTURE3TIMER0  MMIO32(TIMER0 + 0x04c)
#define CAPTURE3TIMER1  MMIO32(TIMER1 + 0x04c)
#define CAPTURE3TIMER2  MMIO32(TIMER2 + 0x04c)
/************Events************************/
/* Compare event on CCn match */
#define COMPARE0TIMER0  MMIO32(TIMER0 + 0x140)
#define COMPARE0TIMER1  MMIO32(TIMER1 + 0x140)
#define COMPARE0TIMER2  MMIO32(TIMER2 + 0x140)
#define COMPARE1TIMER0  MMIO32(TIMER0 + 0x144)
#define COMPARE1TIMER1  MMIO32(TIMER1 + 0x144)
#define COMPARE1TIMER2  MMIO32(TIMER2 + 0x144)
#define COMPARE2TIMER0  MMIO32(TIMER0 + 0x148)
#define COMPARE2TIMER1  MMIO32(TIMER1 + 0x148)
#define COMPARE2TIMER2  MMIO32(TIMER2 + 0x148)
#define COMPARE3TIMER0  MMIO32(TIMER0 + 0x14c)
#define COMPARE3TIMER1  MMIO32(TIMER1 + 0x14c)
#define COMPARE3TIMER2  MMIO32(TIMER2 + 0x14c)

/************Registers*********************/
/* Shortcut register */
#define SHORTSTIMER0    MMIO32(TIMER0 + 0x200)
#define SHORTSTIMER1    MMIO32(TIMER1 + 0x200)
#define SHORTSTIMER2    MMIO32(TIMER2 + 0x200)
// Shortcut between COMPARE[0] event and CLEAR task
#define COMPARE0_CLEAR  0x001
// Shortcut between COMPARE[1] event and CLEAR task
#define COMPARE1_CLEAR  0x002
// Shortcut between COMPARE[2] event and CLEAR task
#define COMPARE2_CLEAR  0x004
// Shortcut between COMPARE[3] event and CLEAR task
#define COMPARE3_CLEAR  0x008
// Shortcut between COMPARE[0] event and STOP task
#define COMPARE0_STOP   0x100
// Shortcut between COMPARE[1] event and STOP task
#define COMPARE1_STOP   0x200
// Shortcut between COMPARE[2] event and STOP task
#define COMPARE2_STOP   0x400
// Shortcut between COMPARE[3] event and STOP task
#define COMPARE3_STOP   0x800

/* Enable interrupt */
#define INTENSETTIMER0  MMIO32(TIMER0 + 0x304)
#define INTENSETTIMER1  MMIO32(TIMER1 + 0x304)
#define INTENSETTIMER2  MMIO32(TIMER2 + 0x304)
// Write '1' to Enable interrupt on COMPARE[0] event.
#define COMPARE0T   0x10000
// Write '1' to Enable interrupt on COMPARE[1] event.
#define COMPARE1T   0x20000
// Write '1' to Enable interrupt on COMPARE[2] event.
#define COMPARE2T   0x40000
// Write '1' to Enable interrupt on COMPARE[3] event.
#define COMPARE3T   0x80000

/* Disable interrupt */
#define INTENCLRTIMER0  MMIO32(TIMER0 + 0x308)
#define INTENCLRTIMER1  MMIO32(TIMER1 + 0x308)
#define INTENCLRTIMER2  MMIO32(TIMER2 + 0x308)
// Write '1' to Clear interrupt on COMPARE[0] event.
// Write '1' to Clear interrupt on COMPARE[1] event.
// Write '1' to Clear interrupt on COMPARE[2] event.
// Write '1' to Clear interrupt on COMPARE[3] event.

/* Timer mode selection */
#define MODETIMER0      MMIO32(TIMER0 + 0x504)
#define MODETIMER1      MMIO32(TIMER1 + 0x504)
#define MODETIMER2      MMIO32(TIMER2 + 0x504)
// Timer mode. 0 = Timer mode, 1 = Counter mode
#define MODE_COUNTER    0x1

/* Configure the number of bits used by the TIMER */
#define BITMODETIMER0   MMIO32(TIMER0 + 0x508)
#define BITMODETIMER1   MMIO32(TIMER1 + 0x508)
#define BITMODETIMER2   MMIO32(TIMER2 + 0x508)
// Timer bit width
#define BITMODE08   0x1
#define BITMODE16   0x0
#define BITMODE24   0x2
#define BITMODE32   0x3

/* Timer prescaler register */
#define PRESCALERTIMER0 MMIO32(TIMER0 + 0x510)
#define PRESCALERTIMER1 MMIO32(TIMER1 + 0x510)
#define PRESCALERTIMER2 MMIO32(TIMER2 + 0x510)
// Prescaler value. PRESCALER[3:0]

/* Capture/Compare register n */
#define CC0TIMER0       MMIO32(TIMER0 + 0x540)
#define CC0TIMER1       MMIO32(TIMER1 + 0x540)
#define CC0TIMER2       MMIO32(TIMER2 + 0x540)
#define CC1TIMER0       MMIO32(TIMER0 + 0x544)
#define CC1TIMER1       MMIO32(TIMER1 + 0x544)
#define CC1TIMER2       MMIO32(TIMER2 + 0x544)
#define CC2TIMER0       MMIO32(TIMER0 + 0x548)
#define CC2TIMER1       MMIO32(TIMER1 + 0x548)
#define CC2TIMER2       MMIO32(TIMER2 + 0x548)
#define CC3TIMER0       MMIO32(TIMER0 + 0x54c)
#define CC3TIMER1       MMIO32(TIMER1 + 0x54c)
#define CC3TIMER2       MMIO32(TIMER2 + 0x54c)
// Capture/Compare value. CC[31:0]

#endif
