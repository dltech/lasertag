#ifndef H_SPI_REG
#define H_SPI_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Serial Peripheral Interface (SPI) Master
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
#define READY0   MMIO32(SPI0 + 0x108)
#define READY1   MMIO32(SPI1 + 0x108)

/*************Tasks************************/
/*  */
#define START   MMIO32(SPI0 + 0x)
#define START   MMIO32(SPI1 + 0x)

/************Events************************/
/*  */
#define READY   MMIO32(SPI0 + 0x)
#define READY   MMIO32(SPI1 + 0x)

/************Registers*********************/
/*  */
#define SHORTS        MMIO32(SPI0 + 0x)
#define SHORTS        MMIO32(SPI1 + 0x)


#endif
