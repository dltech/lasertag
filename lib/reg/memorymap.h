#ifndef H_MEMORYMAP
#define H_MEMORYMAP
/*
 * Lasertag on Nordic NRF51
 * Memory map for peripherial
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

#define POWER   0x40000000
#define CLOCK   0x40000000
#define MPU     0x40000000
#define RADIO   0x40001000
#define UART    0x40002000
#define SPI0    0x40003000
#define TWI0    0x40003000
#define TWI1    0x40004000
#define SPI1    0x40004000
#define SPIS    0x40004000
#define GPIOTE  0x40006000
#define ADC     0x40007000
#define TIMER0  0x40008000
#define TIMER1  0x40009000
#define TIMER2  0x4000a000
#define RTC0    0x4000b000
#define TEMP    0x4000c000
#define RNG     0x4000d000
#define ECB     0x4000e000
#define AAR     0x4000f000
#define CCM     0x4000f000
#define WDT     0x40010000
#define RTC1    0x40011000
#define QDEC    0x40012000
#define LPCOMP  0x40013000
#define SWI0    0x40014000
#define SWI1    0x40015000
#define SWI2    0x40016000
#define SWI3    0x40017000
#define SWI4    0x40018000
#define SWI5    0x40019000
#define NVMC    0x4001e000
#define PPI     0x4001f000
#define FICR    0x10000000
#define UICR    0x10001000
#define GPIO    0x50000000

// access to register with specified address
#define  MMIO32(addr)		(*(volatile uint32_t *)(addr))

#endif
