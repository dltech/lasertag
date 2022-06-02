#ifndef H_LPCOMP_REG
#define H_LPCOMP_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Analog to Digital Converter
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
/* Start a new ADC conversion */
#define STARTADC    MMIO32(ADC + 0x000)
/* Stop ADC */
#define STOPADC     MMIO32(ADC + 0x004)

/************Events************************/
/* An ADC conversion is completed */
#define ENDADC      MMIO32(ADC + 0x100)

/************Registers*********************/
/* Enable or disable interrupt */
#define INTENADC    MMIO32(ADC + 0x300)
// Enable or disable interrupt on END event
#define ENDADC  0x1

/* Enable interrupt */
#define INTENSETADC MMIO32(ADC + 0x304)
// Write '1' to Enable interrupt on END event.

/* Disable interrupt */
#define INTENCLRADC MMIO32(ADC + 0x308)
// Write '1' to Clear interrupt on END event.

/* ADC busy (conversion in progress) */
#define BUSYADC     MMIO32(ADC + 0x400)
// 1 = ADC is busy. Conversion in progress.
#define BUSYA   0x1

/* Enable ADC */
#define ENABLEADC   MMIO32(ADC + 0x500)
// ADC enable
#define ENABLEAD    0x1

/* ADC configuration */
#define CONFIGADC   MMIO32(ADC + 0x504)
// ADC resolution
#define RES8BIT  0x0
#define RES9BIT  0x1
#define RES10BIT 0x2
// ADC input selection
#define INPSEL_AnalogInputNoPrescaling  0x00
#define INPSEL_AnalogInput2_3Prescaling 0x04
#define INPSEL_AnalogInput1_3Prescaling 0x08
#define INPSEL_Supply2_3Prescaling      0x14
#define INPSEL_Supply1_3Prescaling      0x18
// ADC reference selection
#define REFSEL_VBG                      0x00
#define REFSEL_External                 0x20
#define REFSEL_Supply1_2Prescaling      0x40
#define REFSEL_Supply1_3Prescaling      0x60
// Select pin to be used as ADC input pin
#define PSEL_DIS                        0x0000
#define PSEL_ANA0                       0x0100
#define PSEL_ANA1                       0x0200
#define PSEL_ANA2                       0x0400
#define PSEL_ANA3                       0x0800
#define PSEL_ANA4                       0x1000
#define PSEL_ANA5                       0x2000
#define PSEL_ANA6                       0x4000
#define PSEL_ANA7                       0x8000
// External reference pin selection
#define EXTREFSEL_NONE      0x00000
#define EXTREFSEL_ANAREF0   0x10000
#define EXTREFSEL_ANAREF1   0x20000

/* Result of the previous ADC conversion */
#define RESULTADC   MMIO32(ADC + 0x508)
// Result of the previous ADC conversion. RESULT[9:0]

#endif
