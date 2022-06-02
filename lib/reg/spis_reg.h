#ifndef H_SPIS_REG
#define H_SPIS_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for SPI Slave
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
/* Acquire SPI semaphore */
#define ACQUIRESPIS     MMIO32(SPIS + 0x024)
/* Release SPI semaphore, enabling the SPI slave to acquire it */
#define ACQUIRESPIS     MMIO32(SPIS + 0x028)

/************Events************************/
/* Granted transaction completed */
#define ENDSPIS         MMIO32(SPIS + 0x104)
/* Semaphore acquired */
#define ACQUIREDSPIS    MMIO32(SPIS + 0x128)
/************Registers*********************/
/* Shortcut register */
#define SHORTSSPIS      MMIO32(SPIS + 0x200)
// Shortcut between END event and ACQUIRE task
#define END_ACQUIRE 0x4

/* Enable or disable interrupt */
#define INTENSPIS       MMIO32(SPIS + 0x300)
// Enable or disable interrupt on END event.
#define ENDS        0x400
// Enable or disable interrupt on ACQUIRED event.
#define ACQUIREDS   0x002

/* Enable interrupt */
#define INTENSETSPIS    MMIO32(SPIS + 0x304)
// Write '1' to Enable interrupt on END event.
// Write '1' to Enable interrupt on ACQUIRED event.

/* Disable interrupt */
#define INTENCLRSPIS    MMIO32(SPIS + 0x308)
// Write '1' to Clear interrupt on END event.
// Write '1' to Clear interrupt on ACQUIRED event.

/* Semaphore status register */
#define SEMSTATSPIS     MMIO32(SPIS + 0x400)
// Semaphore status
#define SEMSTAT_FREE        0x0
#define SEMSTAT_CPU         0x1
#define SEMSTAT_SPIS        0x2
#define SEMSTAT_CPUPending  0x3

/* Status from last transaction */
#define STATUSSPIS      MMIO32(SPIS + 0x440)
// TX buffer over-read detected, and prevented.
#define OVERREADS    0x1
// RX buffer overflow detected, and prevented.
#define OVERFLOWS    0x2

/* Enable SPI slave */
#define ENABLESPIS      MMIO32(SPIS + 0x500)
// Enable or disable SPI slave.
#define ENABLES 0x2

/* Pin select for SCK */
#define PSELSCKSPIS     MMIO32(SPIS + 0x508)
// Pin number configuration for SPI SCK signal. PSELSCK[31:0]

/* Pin select for MISO */
#define PSELMISOSPIS    MMIO32(SPIS + 0x50c)
// Pin number configuration for SPI MISO signal. PSELMISO[31:0]

/* Pin select for MOSI */
#define PSELMOSISPIS    MMIO32(SPIS + 0x510)
// Pin number configuration for SPI MOSI signal. PSELMOSI[31:0]

/* Pin select for CSN */
#define PSELCSNSPIS     MMIO32(SPIS + 0x514)
// Pin number configuration for SPI CSN signal. PSELCSN[31:0]

/* RXD data pointer */
#define RXDPTRSPIS      MMIO32(SPIS + 0x534)
// RXD data pointer. RXDPTR[31:0]

/* Maximum number of bytes in receive buffer */
#define MAXRXSPIS       MMIO32(SPIS + 0x538)
// Maximum number of bytes in receive buffer. MAXRX[7:0]

/* Number of bytes received in last granted transaction */
#define AMOUNTRXSPIS    MMIO32(SPIS + 0x53c)
// Number of bytes received in the last granted transaction. AMOUNTRX[7:0]

/* TXD data pointer */
#define TXDPTRSPIS      MMIO32(SPIS + 0x544)
// TXD data pointer. TXDPTR[31:0]

/* Maximum number of bytes in transmit buffer */
#define MAXTXSPIS       MMIO32(SPIS + 0x548)
// Maximum number of bytes in transmit buffer. MAXTX[7:0]

/* Number of bytes transmitted in last granted transaction */
#define AMOUNTTXSPIS    MMIO32(SPIS + 0x54c)
// Number of bytes transmitted in last granted transaction. AMOUNTTX[7:0]

/* Configuration register */
#define CONFIGSPIS      MMIO32(SPIS + 0x554)
// Bit order
#define ORDERS  0x1
// Serial clock (SCK) phase
#define CPHAS   0x2
// Serial clock (SCK) polarity
#define CPOLS   0x4

/* Default character. Character clocked out in case of an ignored transaction.*/
#define DEFSPIS         MMIO32(SPIS + 0x55c)
// Default character. Character clocked out in case of an ignored transaction.

/* Over-read character */
#define ORCSPIS         MMIO32(SPIS + 0x5c0)
//Over-read character. Character clocked out after an over-read of the tx buffr.

#endif
