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

/************Events************************/
/* TXD byte sent and RXD byte received */
#define READYSPI0       MMIO32(SPI0 + 0x108)
#define READYSPI1       MMIO32(SPI1 + 0x108)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENSPI0       MMIO32(SPI0 + 0x300)
#define INTENSPI1       MMIO32(SPI1 + 0x300)
// Enable or disable interrupt on READY event
#define READYSP   0x4

/* Enable interrupt */
#define INTENSETSPI0    MMIO32(SPI0 + 0x304)
#define INTENSETSPI1    MMIO32(SPI1 + 0x304)
// Write '1' to Enable interrupt on READY event.

/* Disable interrupt */
#define INTENCLRSPI0    MMIO32(SPI0 + 0x308)
#define INTENCLRSPI1    MMIO32(SPI1 + 0x308)
// Write '1' to Clear interrupt on READY event.

/* Enable SPI */
#define ENABLESPI0      MMIO32(SPI0 + 0x500)
#define ENABLESPI1      MMIO32(SPI1 + 0x500)
// Enable or disable SPI
#define ENABLESP    0x1

/* Pin select for SCK */
#define PSELSCKSPI0     MMIO32(SPI0 + 0x508)
#define PSELSCKSPI1     MMIO32(SPI1 + 0x508)
// Pin number configuration for SPI SCK signal. PSELSCK[31:0]

/* Pin select for MOSI */
#define PSELMOSISPI0    MMIO32(SPI0 + 0x50c)
#define PSELMOSIPI1     MMIO32(SPI1 + 0x50c)
// Pin number configuration for SPI MOSI signal. PSELMOSI[31:0]

/* Pin select for MISO */
#define PSELMISOSPI0    MMIO32(SPI0 + 0x510)
#define PSELMISOPI1     MMIO32(SPI1 + 0x510)
// Pin number configuration for SPI MISO signal. PSELMISO[31:0]

/* RXD register */
#define RXDSPI0         MMIO32(SPI0 + 0x518)
#define RXDSPI1         MMIO32(SPI1 + 0x518)
// RX data received. Double buffered. RXD[7:0]

/* TXD register */
#define TXDSPI0         MMIO32(SPI0 + 0x51c)
#define TXDSPI1         MMIO32(SPI1 + 0x51c)
// TX data to send. Double buffered. TXD[7:0]

/* SPI frequency */
#define FREQUENCYSPI0   MMIO32(SPI0 + 0x524)
#define FREQUENCYSPI1   MMIO32(SPI1 + 0x524)
// SPI master data rate
#define FREQUENCY125K   0x02000000
#define FREQUENCY250K   0x04000000
#define FREQUENCY500K   0x08000000
#define FREQUENCY1M     0x10000000
#define FREQUENCY2M     0x20000000
#define FREQUENCY4M     0x40000000
#define FREQUENCY8M     0x80000000

/* Configuration register */
#define CONFIGSPI0      MMIO32(SPI0 + 0x554)
#define CONFIGSPI1      MMIO32(SPI1 + 0x554)
// Bit order
#define ORDERSP 0x4
// Serial clock (SCK) phase
#define CPHASP  0x2
// Serial clock (SCK) polarity
#define CPOLSP  0x1

#endif
