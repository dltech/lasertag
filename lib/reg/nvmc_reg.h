#ifndef H_NVMC_REG
#define H_NVMC_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Non-Volatile Memory Controller
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

/************Registers*********************/
/* Ready flag */
#define READYNVMC       MMIO32(NVMC + 0x400)
// NVMC is ready or busy
#define READYN  0x1

/* Configuration register */
#define CONFIGNVMC      MMIO32(NVMC + 0x504)
// Program memory access mode.
#define WEN_REN 0x0
#define WEN_WEN 0x1
#define WEN_EEN 0x2

/* Register for erasing a page in Code area */
#define ERASEPAGENVMC   MMIO32(NVMC + 0x508)
// Register for starting erase of a page in Code region 1. ERASEPAGE[31:0]

/* Register for erasing a page in Code region 1. Equivalent to ERASEPAGE. */
#define ERASEPCR1NVMC   MMIO32(NVMC + 0x508)
// Register for erasing a page in Code region 1. Equivalent to ERASEPAGE.

/* Register for erasing all non-volatile user memory */
#define ERASEALLNVMC    MMIO32(NVMC + 0x50c)
// Erase all non-volatile memory including UICR registers.
#define ERASEALL   0x1

/* Register for erasing a page in Code region 0 */
#define ERASEPCR0NVMC   MMIO32(NVMC + 0x510)
// Register for starting erase of a page in Code region 0. ERASEPCR0[31:0]

/* Register for erasing User Information Configuration Registers */
#define ERASEUICRNVMC   MMIO32(NVMC + 0x514)
// Register starting erase of all User Information Configuration Registers
#define ERASEUICR   0x1

#endif
