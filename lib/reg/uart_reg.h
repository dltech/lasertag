#ifndef H_UART_REG
#define H_UART_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Universal Asynchronous Receiver/Transmitter
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
/* Start UART receiver */
#define STARTRXUART     MMIO32(UART + 0x000)
/* Stop UART receiver */
#define STOPRXUART      MMIO32(UART + 0x004)
/* Start UART transmitter */
#define STARTTXUART     MMIO32(UART + 0x008)
/* Stop UART transmitter */
#define STOPTXUART      MMIO32(UART + 0x00c)
/* Suspend UART */
#define SUSPENDUART     MMIO32(UART + 0x01c)

/************Events************************/
/* CTS is activated (set low). Clear To Send. */
#define CTSUART         MMIO32(UART + 0x100)
/* CTS is deactivated (set high). Not Clear To Send. */
#define NCTSUART        MMIO32(UART + 0x104)
/* Data received in RXD */
#define RXRDYUART       MMIO32(UART + 0x108)
/* Data sent from TXD */
#define TXRDYUART       MMIO32(UART + 0x11c)
/* Error detected */
#define ERRORUART       MMIO32(UART + 0x124)
/* Receiver timeout */
#define RXTOUART        MMIO32(UART + 0x144)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENUART       MMIO32(UART + 0x300)
// Enable or disable interrupt on CTS event
#define CTS     0x00001
// Enable or disable interrupt on NCTS event
#define NCTS    0x00002
// Enable or disable interrupt on RXDRDY event
#define RXDRDY  0x00004
// Enable or disable interrupt on TXDRDY event
#define TXDRDY  0x00080
// Enable or disable interrupt on ERROR event
#define ERROR   0x00200
// Enable or disable interrupt on RXTO event
#define RXTO    0x20000

/* Enable interrupt */
#define INTENSETUART    MMIO32(UART + 0x304)
// Write '1' to Enable interrupt on CTS event.
// Write '1' to Enable interrupt on NCTS event.
// Write '1' to Enable interrupt on RXDRDY event.
// Write '1' to Enable interrupt on TXDRDY event.
// Write '1' to Enable interrupt on ERROR event.
// Write '1' to Enable interrupt on RXTO event.

/* Disable interrupt */
#define INTENCLRUART    MMIO32(UART + 0x308)
// Write '1' to Clear interrupt on CTS event.
// Write '1' to Clear interrupt on NCTS event.
// Write '1' to Clear interrupt on RXDRDY event.
// Write '1' to Clear interrupt on TXDRDY event.
// Write '1' to Clear interrupt on ERROR event.
// Write '1' to Clear interrupt on RXTO event.

/* Error source */
#define ERRORSRCUART    MMIO32(UART + 0x480)
// Overrun error
#define OVERRUN 0x1
// Parity error
#define PARITY  0x2
// Framing error occurred
#define FRAMING 0x4
// Break condition
#define BREAK   0x8

/* Enable UART */
#define ENABLEUART      MMIO32(UART + 0x500)
// Enable or disable UART
#define ENABLEU 0x1

/* Pin select for RTS */
#define PSELRTSUART     MMIO32(UART + 0x508)
// Pin number configuration for UART RTS signal, PSELRTS

/* Pin select for TXD */
#define PSELTXDUART     MMIO32(UART + 0x50c)
// Pin number configuration for UART TXD signal, PSELTXD

/* Pin select for CTS */
#define PSELCTSUART     MMIO32(UART + 0x510)
// Pin number configuration for UART CTS signal, PSELCTS

/* Pin select for RXD */
#define PSELRXDUART     MMIO32(UART + 0x514)
// Pin number configuration for UART RXD signal, PSELRXD

/* RXD register */
#define RXDUARTUART     MMIO32(UART + 0x518)
// RX data received in previous transfers, double buffered, RXD

/* TXD register */
#define TXDUARTUART     MMIO32(UART + 0x51c)
// TX data to be transferred, TXD

/* Baud rate */
#define BAUDRATEUART    MMIO32(UART + 0x524)
// Baud-rate
#define Baud1200    0x0004f000
#define Baud2400    0x0009D000
#define Baud4800    0x0013B000
#define Baud9600    0x00275000
#define Baud14400   0x003B0000
#define Baud19200   0x004EA000
#define Baud28800   0x0075F000
#define Baud31250   0x00800000
#define Baud38400   0x009D5000
#define Baud56000   0x00E50000
#define Baud57600   0x00EBF000
#define Baud76800   0x013A9000
#define Baud115200  0x01D7E000
#define Baud230400  0x03AFB000
#define Baud250000  0x04000000
#define Baud460800  0x075F7000
#define Baud921600  0x0ebedfa4

/* Configuration of parity and hardware flow control */
#define CONFIGUARTUART  MMIO32(UART + 0x56c)
// Hardware flow control
#define HWFC        0x1
// Parity
#define PARITY_INC  0x7

#endif
