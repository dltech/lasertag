#ifndef H_GPIO_REG
#define H_GPIO_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for General-Purpose Input/Output
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
/* Write GPIO port */
#define OUTGPIO          MMIO32(GPIO + 0x504)
// 0 = Pin driver is low, 1 = Pin driver is high
#define PIN0     0x00000001
#define PIN1     0x00000002
#define PIN2     0x00000004
#define PIN3     0x00000008
#define PIN4     0x00000010
#define PIN5     0x00000020
#define PIN6     0x00000040
#define PIN7     0x00000080
#define PIN8     0x00000100
#define PIN9     0x00000200
#define PIN10    0x00000400
#define PIN11    0x00000800
#define PIN12    0x00001000
#define PIN13    0x00002000
#define PIN14    0x00004000
#define PIN15    0x00008000
#define PIN16    0x00010000
#define PIN17    0x00020000
#define PIN18    0x00040000
#define PIN19    0x00080000
#define PIN20    0x00100000
#define PIN21    0x00200000
#define PIN22    0x00400000
#define PIN23    0x00800000
#define PIN24    0x01000000
#define PIN25    0x02000000
#define PIN26    0x04000000
#define PIN27    0x08000000
#define PIN28    0x10000000
#define PIN29    0x20000000
#define PIN30    0x40000000
#define PIN31    0x80000000

/* Set individual bits in GPIO port */
#define OUTSETGPIO       MMIO32(GPIO + 0x508)
// Read: 0 = pin driver is low, 1 = pin driver is high, writing a '1' sets high

/* Clear individual bits in GPIO port */
#define OUTCLRGPIO       MMIO32(GPIO + 0x50c)
// Read: 0 = pin driver is low, 1 = pin driver is high, writing a '1' sets low

/* Read GPIO port */
#define INGPIO           MMIO32(GPIO + 0x510)
// 0 = Pin input is low, 1 = Pin input is high.

/* Direction of GPIO pins */
#define DIRGPIO          MMIO32(GPIO + 0x514)
// 0 = Pin set as input, 1 = Pin set as output.

/* DIR set register */
#define DIRSETGPIO       MMIO32(GPIO + 0x518)
// writing a '1' sets pin to output

/* DIR clear register */
#define DIRCLR           MMIO32(GPIO + 0x51c)
// writing a '1' sets pin to input

/* Configuration of GPIO pins */
#define PIN_CNF0GPIO     MMIO32(GPIO + 0x700)
#define PIN_CNF1GPIO     MMIO32(GPIO + 0x704)
#define PIN_CNF2GPIO     MMIO32(GPIO + 0x708)
#define PIN_CNF3GPIO     MMIO32(GPIO + 0x70c)
#define PIN_CNF4GPIO     MMIO32(GPIO + 0x710)
#define PIN_CNF5GPIO     MMIO32(GPIO + 0x714)
#define PIN_CNF6GPIO     MMIO32(GPIO + 0x718)
#define PIN_CNF7GPIO     MMIO32(GPIO + 0x71c)
#define PIN_CNF8GPIO     MMIO32(GPIO + 0x720)
#define PIN_CNF9GPIO     MMIO32(GPIO + 0x724)
#define PIN_CNF10GPIO    MMIO32(GPIO + 0x728)
#define PIN_CNF11GPIO    MMIO32(GPIO + 0x72c)
#define PIN_CNF12GPIO    MMIO32(GPIO + 0x730)
#define PIN_CNF13GPIO    MMIO32(GPIO + 0x734)
#define PIN_CNF14GPIO    MMIO32(GPIO + 0x738)
#define PIN_CNF15GPIO    MMIO32(GPIO + 0x73c)
#define PIN_CNF16GPIO    MMIO32(GPIO + 0x740)
#define PIN_CNF17GPIO    MMIO32(GPIO + 0x744)
#define PIN_CNF18GPIO    MMIO32(GPIO + 0x748)
#define PIN_CNF19GPIO    MMIO32(GPIO + 0x74c)
#define PIN_CNF20GPIO    MMIO32(GPIO + 0x750)
#define PIN_CNF21GPIO    MMIO32(GPIO + 0x754)
#define PIN_CNF22GPIO    MMIO32(GPIO + 0x758)
#define PIN_CNF23GPIO    MMIO32(GPIO + 0x75c)
#define PIN_CNF24GPIO    MMIO32(GPIO + 0x760)
#define PIN_CNF25GPIO    MMIO32(GPIO + 0x764)
#define PIN_CNF26GPIO    MMIO32(GPIO + 0x768)
#define PIN_CNF27GPIO    MMIO32(GPIO + 0x76c)
#define PIN_CNF28GPIO    MMIO32(GPIO + 0x770)
#define PIN_CNF29GPIO    MMIO32(GPIO + 0x774)
#define PIN_CNF30GPIO    MMIO32(GPIO + 0x778)
#define PIN_CNF31GPIO    MMIO32(GPIO + 0x77c)
// Pin direction
#define DIRG    0x1
// Connect or disconnect input buffer
#define INPUTG  0x2
// Pull configuration
#define PULL_DIS    0x0
#define PULL_UP     0xc
#define PULL_DN     0x4
// Drive configuration
#define DRIVE_S0S1  0x000
#define DRIVE_H0S1  0x100
#define DRIVE_S0H1  0x200
#define DRIVE_H0H1  0x300
#define DRIVE_D0S1  0x400
#define DRIVE_D0H1  0x500
#define DRIVE_S0D1  0x600
#define DRIVE_H0D1  0x700
// Pin sensing mechanism
#define SENSE_DIS   0x00000
#define SENSE_HI    0x20000
#define SENSE_LOW   0x30000

#endif
