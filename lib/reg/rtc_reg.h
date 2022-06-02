#ifndef H_RTC_REG
#define H_RTC_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Real Time Counter
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
/* Start RTC COUNTER */
#define STARTRTC0        MMIO32(RTC0 + 0x000)
#define STARTRTC1        MMIO32(RTC1 + 0x000)
/* Stop RTC COUNTER */
#define STOPRTC0         MMIO32(RTC0 + 0x004)
#define STOPRTC1         MMIO32(RTC1 + 0x004)
/* Clear RTC COUNTER */
#define CLEARRTC0        MMIO32(RTC0 + 0x008)
#define CLEARRTC1        MMIO32(RTC1 + 0x008)
/* Set COUNTER to 0xFFFFF0 */
#define TRIGOVRFLWRTC0   MMIO32(RTC0 + 0x00c)
#define TRIGOVRFLWRTC1   MMIO32(RTC1 + 0x00c)

/************Events************************/
/* Event on COUNTER increment */
#define TICKRTC0         MMIO32(RTC0 + 0x100)
#define TICKRTC1         MMIO32(RTC1 + 0x100)
/* Event on COUNTER overflow */
#define OVRFLWRTC0       MMIO32(RTC0 + 0x104)
#define OVRFLWRTC1       MMIO32(RTC1 + 0x104)
/* Compare event on CCn match */
#define COMPARE0RTC0     MMIO32(RTC0 + 0x140)
#define COMPARE0RTC1     MMIO32(RTC1 + 0x140)
#define COMPARE1RTC0     MMIO32(RTC0 + 0x144)
#define COMPARE1RTC1     MMIO32(RTC1 + 0x144)
#define COMPARE2RTC0     MMIO32(RTC0 + 0x148)
#define COMPARE2RTC1     MMIO32(RTC1 + 0x148)
#define COMPARE3RTC0     MMIO32(RTC0 + 0x14c)
#define COMPARE3RTC1     MMIO32(RTC1 + 0x14c)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENRTC0        MMIO32(RTC0 + 0x300)
#define INTENRTC1        MMIO32(RTC1 + 0x300)
// Enable or disable interrupt on TICK event
#define TICKR       0x0001
// Enable or disable interrupt on OVRFLW event
#define OVRFLWR     0x0002
// Enable or disable interrupt on COMPARE[0] event
#define COMPARE0R   0x10000
// Enable or disable interrupt on COMPARE[1] event
#define COMPARE1R   0x20000
// Enable or disable interrupt on COMPARE[2] event
#define COMPARE2R   0x40000
// Enable or disable interrupt on COMPARE[3] event
#define COMPARE3R   0x80000

/* Enable interrupt */
#define INTENSETRTC0     MMIO32(RTC0 + 0x304)
#define INTENSETRTC1     MMIO32(RTC1 + 0x304)
// Write '1' to Enable interrupt on TICK event.
// Write '1' to Enable interrupt on OVRFLW event.
// Write '1' to Enable interrupt on COMPARE[0] event.
// Write '1' to Enable interrupt on COMPARE[1] event.
// Write '1' to Enable interrupt on COMPARE[2] event.
// Write '1' to Enable interrupt on COMPARE[3] event.

/* Disable interrupt */
#define INTENCLRRTC0     MMIO32(RTC0 + 0x308)
#define INTENCLRRTC1     MMIO32(RTC1 + 0x308)
// Write '1' to Clear interrupt on TICK event.
// Write '1' to Clear interrupt on OVRFLW event.
// Write '1' to Clear interrupt on COMPARE[0] event.
// Write '1' to Clear interrupt on COMPARE[1] event.
// Write '1' to Clear interrupt on COMPARE[2] event.
// Write '1' to Clear interrupt on COMPARE[3] event.

/* Enable or disable event routing */
#define EVTENRTC0        MMIO32(RTC0 + 0x340)
#define EVTENRTC1        MMIO32(RTC1 + 0x340)
// Enable or disable event routing on TICK event.
// Enable or disable event routing on OVRFLW event.
// Enable or disable event routing on COMPARE[0] event.
// Enable or disable event routing on COMPARE[1] event.
// Enable or disable event routing on COMPARE[2] event.
// Enable or disable event routing on COMPARE[3] event.

/* Enable event routing */
#define EVTENSETRTC0     MMIO32(RTC0 + 0x344)
#define EVTENSETRTC1     MMIO32(RTC1 + 0x344)
// Write '1' to Enable event routing on TICK event.
// Write '1' to Enable event routing on OVRFLW event.
// Write '1' to Enable event routing on COMPARE[0] event.
// Write '1' to Enable event routing on COMPARE[1] event.
// Write '1' to Enable event routing on COMPARE[2] event.
// Write '1' to Enable event routing on COMPARE[3] event.

/* Disable event routing */
#define EVTENCLRRTC0     MMIO32(RTC0 + 0x348)
#define EVTENCLRRTC1     MMIO32(RTC1 + 0x348)
// Write '1' to Clear event routing on TICK event.
// Write '1' to Clear event routing on OVRFLW event.
// Write '1' to Clear event routing on COMPARE[0] event.
// Write '1' to Clear event routing on COMPARE[1] event.
// Write '1' to Clear event routing on COMPARE[2] event.
// Write '1' to Clear event routing on COMPARE[3] event.

/* Current COUNTER value */
#define COUNTERRTC0      MMIO32(RTC0 + 0x504)
#define COUNTERRTC1      MMIO32(RTC1 + 0x504)
// Counter value. COUNTER[23:0]

/* 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)). */
#define PRESCALERRTC0    MMIO32(RTC0 + 0x508)
#define PRESCALERRTC1    MMIO32(RTC1 + 0x508)
// Prescaler value. PRESCALER[11:0]

/* Compare register n */
#define CC0RTC0          MMIO32(RTC0 + 0x540)
#define CC0RTC1          MMIO32(RTC1 + 0x540)
#define CC1RTC0          MMIO32(RTC0 + 0x544)
#define CC1RTC1          MMIO32(RTC1 + 0x544)
#define CC2RTC0          MMIO32(RTC0 + 0x548)
#define CC2RTC1          MMIO32(RTC1 + 0x548)
#define CC3RTC0          MMIO32(RTC0 + 0x54c)
#define CC3RTC1          MMIO32(RTC1 + 0x54c)
// Compare value. COMPARE[23:0]

#endif
