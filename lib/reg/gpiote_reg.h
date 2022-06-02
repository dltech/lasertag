#ifndef H_GPIOTE_REG
#define H_GPIOTE_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for GPIO tasks and events
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
/* Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is conf in
CONFIG[n].POLARITY. */
#define OUT0GPIOTE      MMIO32(GPIOTE + 0x000)
#define OUT1GPIOTE      MMIO32(GPIOTE + 0x004)
#define OUT2GPIOTE      MMIO32(GPIOTE + 0x008)
#define OUT3GPIOTE      MMIO32(GPIOTE + 0x00c)

/************Events************************/
/* Event generated from pin specified in CONFIG[n].PSEL */
#define IN0GPIOTE       MMIO32(GPIOTE + 0x100)
#define IN1GPIOTE       MMIO32(GPIOTE + 0x104)
#define IN2GPIOTE       MMIO32(GPIOTE + 0x108)
#define IN3GPIOTE       MMIO32(GPIOTE + 0x10c)
/* Event generated from multiple input pins */
#define PORTGPIOTE      MMIO32(GPIOTE + 0x17c)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENGPIOTE     MMIO32(GPIOTE + 0x300)
// Enable or disable interrupt on IN[0] event
#define IN0G    0x1
// Enable or disable interrupt on IN[1] event
#define IN1G    0x2
// Enable or disable interrupt on IN[2] event
#define IN2G    0x4
// Enable or disable interrupt on IN[3] event
#define IN3G    0x8
// Enable or disable interrupt on PORT event
#define PORTG   0x80000000

/* Enable interrupt */
#define INTENSETGPIOTE  MMIO32(GPIOTE + 0x304)
// Write '1' to Enable interrupt on IN[0] event.
// Write '1' to Enable interrupt on IN[1] event.
// Write '1' to Enable interrupt on IN[2] event.
// Write '1' to Enable interrupt on IN[3] event.
// Write '1' to Enable interrupt on PORT event.

/* Disable interrupt */
#define INTENCLRGPIOTE  MMIO32(GPIOTE + 0x308)
// Write '1' to Clear interrupt on IN[0] event.
// Write '1' to Clear interrupt on IN[1] event.
// Write '1' to Clear interrupt on IN[2] event.
// Write '1' to Clear interrupt on IN[3] event.
// Write '1' to Clear interrupt on PORT event.

/* Configuration for OUT[n] task and IN[n] event */
#define CONFIG0GPIOTE   MMIO32(GPIOTE + 0x510)
#define CONFIG1GPIOTE   MMIO32(GPIOTE + 0x514)
#define CONFIG2GPIOTE   MMIO32(GPIOTE + 0x518)
#define CONFIG3GPIOTE   MMIO32(GPIOTE + 0x51c)
// Mode
#define MODE_DISG   0x0
#define MODE_EVENTG 0x1
#define MODE_TASKG  0x3
// Pin number associated with OUT[n] task and IN[n] event.
#define PSEL_SFT    8
#define PSEL_MSK    0x1f
// Operation on input that shall trigger IN[n] event.
#define POLARITY_NONE   0x00000
#define POLARITY_LOTOHI 0x10000
#define POLARITY_HITOLO 0x20000
#define POLARITY_TOGGLE 0x30000
// Initial value of the output when the GPIOTE channel is configured.
#define OUTINIT     0x100000

#endif
