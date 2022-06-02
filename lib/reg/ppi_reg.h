#ifndef H_PPI_REG
#define H_PPI_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Programmable Peripheral Interconnect
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
/* Enable channel group n */
#define CHG0EN  MMIO32(PPI + 0x000)
#define CHG1EN  MMIO32(PPI + 0x008)
#define CHG2EN  MMIO32(PPI + 0x010)
#define CHG3EN  MMIO32(PPI + 0x018)
/* Disable channel group n */
#define CHG0DIS MMIO32(PPI + 0x004)
#define CHG1DIS MMIO32(PPI + 0x00c)
#define CHG2DIS MMIO32(PPI + 0x014)
#define CHG3DIS MMIO32(PPI + 0x01c)

/************Registers*********************/
/* Channel enable register */
#define CHEN    MMIO32(PPI + 0x500)
// Enable or disable channel n
#define CH0P     0x00000001
#define CH1P     0x00000002
#define CH2P     0x00000004
#define CH3P     0x00000008
#define CH4P     0x00000010
#define CH5P     0x00000020
#define CH6P     0x00000040
#define CH7P     0x00000080
#define CH8P     0x00000100
#define CH9P     0x00000200
#define CH10P    0x00000400
#define CH11P    0x00000800
#define CH12P    0x00001000
#define CH13P    0x00002000
#define CH14P    0x00004000
#define CH15P    0x00008000
#define CH20P    0x00100000
#define CH21P    0x00200000
#define CH22P    0x00400000
#define CH23P    0x00800000
#define CH24P    0x01000000
#define CH25P    0x02000000
#define CH26P    0x04000000
#define CH27P    0x08000000
#define CH28P    0x10000000
#define CH29P    0x20000000
#define CH30P    0x40000000
#define CH31P    0x80000000

/* Channel enable set register */
#define CHENSET MMIO32(PPI + 0x504)
// Write '1': Enable channel n. Write '0': no effect.

/* Channel enable clear register */
#define CHENCLR MMIO32(PPI + 0x508)
// Write '1': Disable channel n. Write '0': no effect

/* Channel n event end-point */
#define CH0EEP  MMIO32(PPI + 0x510)
#define CH1EEP  MMIO32(PPI + 0x518)
#define CH2EEP  MMIO32(PPI + 0x520)
#define CH3EEP  MMIO32(PPI + 0x528)
#define CH4EEP  MMIO32(PPI + 0x530)
#define CH5EEP  MMIO32(PPI + 0x538)
#define CH6EEP  MMIO32(PPI + 0x540)
#define CH7EEP  MMIO32(PPI + 0x548)
#define CH8EEP  MMIO32(PPI + 0x550)
#define CH9EEP  MMIO32(PPI + 0x558)
#define CH10EEP MMIO32(PPI + 0x560)
#define CH11EEP MMIO32(PPI + 0x568)
#define CH12EEP MMIO32(PPI + 0x570)
#define CH13EEP MMIO32(PPI + 0x578)
#define CH14EEP MMIO32(PPI + 0x580)
#define CH15EEP MMIO32(PPI + 0x588)
// Pointer to event register. EEP[31:0]

/* Channel n task end-point */
#define CH0TEP  MMIO32(PPI + 0x514)
#define CH1TEP  MMIO32(PPI + 0x51c)
#define CH2TEP  MMIO32(PPI + 0x524)
#define CH3TEP  MMIO32(PPI + 0x52c)
#define CH4TEP  MMIO32(PPI + 0x534)
#define CH5TEP  MMIO32(PPI + 0x53c)
#define CH6TEP  MMIO32(PPI + 0x544)
#define CH7TEP  MMIO32(PPI + 0x54c)
#define CH8TEP  MMIO32(PPI + 0x554)
#define CH9TEP  MMIO32(PPI + 0x55c)
#define CH10TEP MMIO32(PPI + 0x564)
#define CH11TEP MMIO32(PPI + 0x56c)
#define CH12TEP MMIO32(PPI + 0x574)
#define CH13TEP MMIO32(PPI + 0x57c)
#define CH14TEP MMIO32(PPI + 0x584)
#define CH15TEP MMIO32(PPI + 0x58c)
// Pointer to task register. TEP[31:0]

/* Channel group n */
#define CHG0    MMIO32(PPI + 0x800)
#define CHG1    MMIO32(PPI + 0x804)
#define CHG2    MMIO32(PPI + 0x808)
#define CHG3    MMIO32(PPI + 0x80c)
// Include or exclude channel n

#endif
