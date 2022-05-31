#ifndef H_TWI_REG
#define H_TWI_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for I2C compatible Two Wire Interface
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
/* Start TWI receive sequence */
#define STARTRXTWI0     MMIO32(TWI0 + 0x000)
#define STARTRXTWI1     MMIO32(TWI1 + 0x000)
/* Start TWI transmit sequence */
#define STARTTXTWI0     MMIO32(TWI0 + 0x008)
#define STARTTXTWI1     MMIO32(TWI1 + 0x008)
/* Stop TWI transaction */
#define STOPTWI0        MMIO32(TWI0 + 0x014)
#define STOPTWI1        MMIO32(TWI1 + 0x014)
/* Suspend TWI transaction */
#define SUSPENDTWI0     MMIO32(TWI0 + 0x01c)
#define SUSPENDTWI1     MMIO32(TWI1 + 0x01c)
/* Resume TWI transaction */
#define RESUMETWI0      MMIO32(TWI0 + 0x020)
#define RESUMETWI1      MMIO32(TWI1 + 0x020)

/************Events************************/
/* TWI stopped */
#define STOPPEDTWI0     MMIO32(TWI0 + 0x104)
#define STOPPEDTWI1     MMIO32(TWI1 + 0x104)
/* TWI RXD byte received */
#define RXDREADYTWI0    MMIO32(TWI0 + 0x108)
#define RXDREADYTWI1    MMIO32(TWI1 + 0x108)
/* TWI TXD byte sent */
#define TXDSENTTWI0     MMIO32(TWI0 + 0x11c)
#define TXDSENTTWI1     MMIO32(TWI1 + 0x11c)
/* TWI error */
#define ERRORTWI0       MMIO32(TWI0 + 0x124)
#define ERRORTWI1       MMIO32(TWI1 + 0x124)
/* TWI byte boundary, generated before each byte that is sent or received */
#define BBTWI0          MMIO32(TWI0 + 0x138)
#define BBTWI1          MMIO32(TWI1 + 0x138)

/************Registers*********************/
/* Shortcut register */
#define SHORTSTWI0      MMIO32(TWI0 + 0x200)
#define SHORTSTWI1      MMIO32(TWI1 + 0x200)
// Shortcut between BB event and SUSPEND task
#define BB_SUSPEND  0x2
// Shortcut between BB event and STOP task
#define BB_STOP     0x1

/* Enable or disable interrupt */
#define INTENTWI0       MMIO32(TWI0 + 0x300)
#define INTENTWI1       MMIO32(TWI1 + 0x300)
// Enable or disable interrupt on STOPPED event
#define STOPPED     0x0002
// Enable or disable interrupt on RXDREADY event
#define RXDREADY    0x0004
// Enable or disable interrupt on TXDSENT event
#define TXDSENT     0x0080
// Enable or disable interrupt on ERROR event
#define ERRORT      0x0200
// Enable or disable interrupt on BB event
#define BB          0x4000

/* Enable interrupt */
#define INTENSETTWI0    MMIO32(TWI0 + 0x304)
#define INTENSETTWI1    MMIO32(TWI1 + 0x304)
// Write '1' to Enable interrupt on STOPPED event.
// Write '1' to Enable interrupt on RXDREADY event.
// Write '1' to Enable interrupt on TXDSENT event.
// Write '1' to Enable interrupt on ERROR event.
// Write '1' to Enable interrupt on BB event.

/* Disable interrupt */
#define INTENCLRTWI0    MMIO32(TWI0 + 0x308)
#define INTENCLRTWI1    MMIO32(TWI1 + 0x308)
// Write '1' to Clear interrupt on STOPPED event.
// Write '1' to Clear interrupt on RXDREADY event.
// Write '1' to Clear interrupt on TXDSENT event.
// Write '1' to Clear interrupt on ERROR event.
// Write '1' to Clear interrupt on BB event.

/* Error source */
#define ERRORSRCTWI0    MMIO32(TWI0 + 0x4c4)
#define ERRORSRCTWI1    MMIO32(TWI1 + 0x4c4)
// Overrun error
#define OVERRUNT    0x1
// NACK received after sending the address (write '1' to clear)
#define ANACK       0x2
// NACK received after sending a data byte (write '1' to clear)
#define DNACK       0x4

/* Enable TWI */
#define ENABLETWI0      MMIO32(TWI0 + 0x500)
#define ENABLETWI1      MMIO32(TWI1 + 0x500)
// Enable or disable TWI
#define ENABLETW    0x1

/* Pin select for SCL */
#define PSELSCLTWI0     MMIO32(TWI0 + 0x508)
#define PSELSCLTWI1     MMIO32(TWI1 + 0x508)
// Pin number configuration for TWI SCL signal. PSELSCL

/* Pin select for SDA */
#define PSELSDATWI0     MMIO32(TWI0 + 0x50c)
#define PSELSDATWI1     MMIO32(TWI1 + 0x50c)
// Pin number configuration for TWI SDA signal. PSELSDA

/* RXD register */
#define RXDTWI0         MMIO32(TWI0 + 0x518)
#define RXDTWI1         MMIO32(TWI1 + 0x518)
// RXD register. RXD[0-7]

/* TXD register */
#define TXDTWI0         MMIO32(TWI0 + 0x51c)
#define TXDTWI1         MMIO32(TWI1 + 0x51c)
// TXD register. TXD[0-7]

/* TWI frequency */
#define FREQUENCYTWI0   MMIO32(TWI0 + 0x524)
#define FREQUENCYTWI1   MMIO32(TWI1 + 0x524)
// TWI master clock frequency
#define FREQUENCY100K   0x01980000
#define FREQUENCY250K   0x04000000
#define FREQUENCY400K   0x06680000

/* Address used in the TWI transfer */
#define ADDRESSTWI0     MMIO32(TWI0 + 0x588)
#define ADDRESSTWI1     MMIO32(TWI1 + 0x588)
// Address used in the TWI transfer. ADDRESS

#endif
