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

/* */


/*************Tasks************************/
/*  */
#define STARTTIMER0   MMIO32(TIMER0 + 0x000)
#define STARTTIMER1   MMIO32(TIMER1 + 0x000)
#define STARTTIMER2   MMIO32(TIMER2 + 0x000)

/************Events************************/
/*  */
#define READY   MMIO32(TIMER0 + 0x)
#define READY   MMIO32(TIMER1 + 0x)
#define READY   MMIO32(TIMER2 + 0x)

/************Registers*********************/
/*  */
#define SHORTS        MMIO32(TIMER0 + 0x)
#define SHORTS        MMIO32(TIMER1 + 0x)
#define SHORTS        MMIO32(TIMER2 + 0x)


#endif
