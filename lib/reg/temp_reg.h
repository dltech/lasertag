#ifndef H_TEMP_REG
#define H_TEMP_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Temperature sensor
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
/* Start temperature measurement */
#define STARTTEMP       MMIO32(TEMP + 0x000)
/* Stop temperature measurement */
#define STOPTEMP        MMIO32(TEMP + 0x004)

/************Events************************/
/* Temperature measurement complete, data ready */
#define DATARDYTEMP     MMIO32(TEMP + 0x100)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENTEMP       MMIO32(TEMP + 0x300)
// Enable or disable interrupt on DATARDY event
#define DATARDYT    0x1

/* Enable interrupt */
#define INTENSETTEMP    MMIO32(TEMP + 0x304)
// Write '1' to Enable interrupt on DATARDY event.

/* Disable interrupt */
#define INTENCLRTEMP    MMIO32(TEMP + 0x308)
// Write '1' to Clear interrupt on DATARDY event.

/* Temperature in °C */
#define TEMPTEMP        MMIO32(TEMP + 0x508)
// Temperature in °C Die temperature in °C, 2's complement format, 0.25 °C

#endif
