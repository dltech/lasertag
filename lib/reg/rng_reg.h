#ifndef H_RNG_REG
#define H_RNG_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Random Number Generator
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
/* Task starting the random number generator */
#define STARTRNG    MMIO32(RNG + 0x000)
/* Task stopping the random number generator */
#define STOPRNG     MMIO32(RNG + 0x004)

/************Events************************/
/* Event being generated for every new rnd number written to the VALUE reg */
#define VALRDYRNG   MMIO32(RNG + 0x100)

/************Registers*********************/
/* Shortcut register */
#define SHORTSRNG   MMIO32(RNG + 0x200)
// Shortcut between VALRDY event and STOP task
#define VALRDY_STOPR    0x1

/* Enable or disable interrupt */
#define INTENRNG    MMIO32(RNG + 0x300)
// Enable or disable interrupt on VALRDY event
#define VALRDYR 0x1

/* Enable interrupt */
#define INTENSETRNG MMIO32(RNG + 0x304)
// Write '1' to Enable interrupt on VALRDY event.

/* Disable interrupt */
#define INTENCLRRNG MMIO32(RNG + 0x308)
// Write '1' to Clear interrupt on VALRDY event.

/* Configuration register */
#define CONFIGRNG   MMIO32(RNG + 0x504)
// Digital error correction
#define DERCENR  0x1

/* Output random number */
#define VALUERNG    MMIO32(RNG + 0x508)
// Generated random number. VALUE[7:0]

#endif
