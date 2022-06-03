#ifndef H_MPU_REG
#define H_MPU_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Memory Protection Unit
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
/* Definition of peripherals in memory region 0 */
#define PERR0           MMIO32(MPU + 0x528)
// Classify POWER and CLOCK, and all other perph with ID=0, as region 0 or 1 per
#define POWER_CLOCKM    0x00000001
// Classify RADIO as region 0 or region 1 peripheral
#define RADIOM          0x00000002
// Classify UART0 as region 0 or region 1 peripheral
#define UART0M          0x00000004
// Classify SPI0 and TWI0 as region 0 or region 1 peripheral
#define SPI0_TWI0       0x00000008
// Classify SPI1 and TWI1 as region 0 or region 1 peripheral
#define SPI1_TWI1       0x00000010
// Classify GPIOTE as region 0 or region 1 peripheral
#define GPIOTEM         0x00000040
// Classify ADC as region 0 or region 1 peripheral
#define ADCM            0x00000080
// Classify TIMER0 as region 0 or region 1 peripheral
#define TIMER0M         0x00000100
// Classify TIMER1 as region 0 or region 1 peripheral
#define TIMER1M         0x00000200
// Classify TIMER2 as region 0 or region 1 peripheral
#define TIMER2M         0x00000400
// Classify RTC0 as region 0 or region 1 peripheral
#define RTC0M           0x00000800
// Classify TEMP as region 0 or region 1 peripheral
#define TEMPM           0x00001000
// Classify RNG as region 0 or region 1 peripheral
#define RNGM            0x00002000
// Classify ECB as region 0 or region 1 peripheral
#define ECBM            0x00004000
// Classify CCM and ECB as region 0 or region 1 peripheral
#define CCM_AAR         0x00008000
// Classify WDT as region 0 or region 1 peripheral
#define WDTM            0x00010000
// Classify RTC1 as region 0 or region 1 peripheral
#define RTC1M           0x00020000
// Classify QDEC as region 0 or region 1 peripheral
#define QDECM           0x00040000
// Classify LPCOMP as region 0 or region 1 peripheral
#define LPCOMPM         0x00080000
// Classify NVMC as region 0 or region 1 peripheral
#define NVMCM           0x40000000
// Classify PPI as region 0 or region 1 peripheral
#define PPIM            0x80000000

/* Length of RAM region 0 */
#define RLENR0          MMIO32(MPU + 0x528)
// This register specifies the size of RAM region 0. RLENR0[31:0]

/* Protection bit enable set register */
#define PROTENSET0      MMIO32(MPU + 0x528)
// Write '1': Protection enable bit for region 0. Write '0': no
#define PROTREG0    0x00000001
// Write '1': Protection enable bit for region 1. Write '0': no
#define PROTREG1    0x00000002
// Write '1': Protection enable bit for region 2. Write '0': no
#define PROTREG2    0x00000004
// Write '1': Protection enable bit for region 3. Write '0': no
#define PROTREG3    0x00000008
// Write '1': Protection enable bit for region 4. Write '0': no
#define PROTREG4    0x00000010
// Write '1': Protection enable bit for region 5. Write '0': no
#define PROTREG5    0x00000020
// Write '1': Protection enable bit for region 6. Write '0': no
#define PROTREG6    0x00000040
// Write '1': Protection enable bit for region 7. Write '0': no
#define PROTREG7    0x00000080
// Write '1': Protection enable bit for region 8. Write '0': no
#define PROTREG8    0x00000100
// Write '1': Protection enable bit for region 9. Write '0': no
#define PROTREG9    0x00000200
// Write '1': Protection enable bit for region 10. Write '0': no
#define PROTREG10   0x00000400
// Write '1': Protection enable bit for region 11. Write '0': no
#define PROTREG11   0x00000800
// Write '1': Protection enable bit for region 12. Write '0': no
#define PROTREG12   0x00001000
// Write '1': Protection enable bit for region 13. Write '0': no
#define PROTREG13   0x00002000
// Write '1': Protection enable bit for region 14. Write '0': no
#define PROTREG14   0x00004000
// Write '1': Protection enable bit for region 15. Write '0': no
#define PROTREG15   0x00008000
// Write '1': Protection enable bit for region 16. Write '0': no
#define PROTREG16   0x00010000
// Write '1': Protection enable bit for region 17. Write '0': no
#define PROTREG17   0x00020000
// Write '1': Protection enable bit for region 18. Write '0': no
#define PROTREG18   0x00040000
// Write '1': Protection enable bit for region 19. Write '0': no
#define PROTREG19   0x00080000
// Write '1': Protection enable bit for region 20. Write '0': no
#define PROTREG20   0x00100000
// Write '1': Protection enable bit for region 21. Write '0': no
#define PROTREG21   0x00200000
// Write '1': Protection enable bit for region 22. Write '0': no
#define PROTREG22   0x00400000
// Write '1': Protection enable bit for region 23. Write '0': no
#define PROTREG23   0x00800000
// Write '1': Protection enable bit for region 24. Write '0': no
#define PROTREG24   0x01000000
// Write '1': Protection enable bit for region 25. Write '0': no
#define PROTREG25   0x02000000
// Write '1': Protection enable bit for region 26. Write '0': no
#define PROTREG26   0x04000000
// Write '1': Protection enable bit for region 27. Write '0': no
#define PROTREG27   0x08000000
// Write '1': Protection enable bit for region 28. Write '0': no
#define PROTREG28   0x10000000
// Write '1': Protection enable bit for region 29. Write '0': no
#define PROTREG29   0x20000000
// Write '1': Protection enable bit for region 30. Write '0': no
#define PROTREG30   0x40000000
// Write '1': Protection enable bit for region 31. Write '0': no
#define PROTREG31   0x80000000

/* Protection bit enable set register */
#define PROTENSET1      MMIO32(MPU + 0x528)
// Write '1': Protection enable bit for region 32. Write '0': no
#define PROTREG32   0x00000001
// Write '1': Protection enable bit for region 33. Write '0': no
#define PROTREG33   0x00000002
// Write '1': Protection enable bit for region 34. Write '0': no
#define PROTREG34   0x00000004
// Write '1': Protection enable bit for region 35. Write '0': no
#define PROTREG35   0x00000008
// Write '1': Protection enable bit for region 36. Write '0': no
#define PROTREG36   0x00000010
// Write '1': Protection enable bit for region 37. Write '0': no
#define PROTREG37   0x00000020
// Write '1': Protection enable bit for region 38. Write '0': no
#define PROTREG38   0x00000040
// Write '1': Protection enable bit for region 39. Write '0': no
#define PROTREG39   0x00000080
// Write '1': Protection enable bit for region 40. Write '0': no
#define PROTREG40   0x00000100
// Write '1': Protection enable bit for region 41. Write '0': no
#define PROTREG41   0x00000200
// Write '1': Protection enable bit for region 42. Write '0': no
#define PROTREG42   0x00000400
// Write '1': Protection enable bit for region 43. Write '0': no
#define PROTREG43   0x00000800
// Write '1': Protection enable bit for region 44. Write '0': no
#define PROTREG44   0x00001000
// Write '1': Protection enable bit for region 45. Write '0': no
#define PROTREG45   0x00002000
// Write '1': Protection enable bit for region 46. Write '0': no
#define PROTREG46   0x00004000
// Write '1': Protection enable bit for region 47. Write '0': no
#define PROTREG47   0x00008000
// Write '1': Protection enable bit for region 48. Write '0': no
#define PROTREG48   0x00010000
// Write '1': Protection enable bit for region 49. Write '0': no
#define PROTREG49   0x00020000
// Write '1': Protection enable bit for region 50. Write '0': no
#define PROTREG50   0x00040000
// Write '1': Protection enable bit for region 51. Write '0': no
#define PROTREG51   0x00080000
// Write '1': Protection enable bit for region 52. Write '0': no
#define PROTREG52   0x00100000
// Write '1': Protection enable bit for region 53. Write '0': no
#define PROTREG53   0x00200000
// Write '1': Protection enable bit for region 54. Write '0': no
#define PROTREG54   0x00400000
// Write '1': Protection enable bit for region 55. Write '0': no
#define PROTREG55   0x00800000
// Write '1': Protection enable bit for region 56. Write '0': no
#define PROTREG56   0x01000000
// Write '1': Protection enable bit for region 57. Write '0': no
#define PROTREG57   0x02000000
// Write '1': Protection enable bit for region 58. Write '0': no
#define PROTREG58   0x04000000
// Write '1': Protection enable bit for region 59. Write '0': no
#define PROTREG59   0x08000000
// Write '1': Protection enable bit for region 60. Write '0': no
#define PROTREG60   0x10000000
// Write '1': Protection enable bit for region 61. Write '0': no
#define PROTREG61   0x20000000
// Write '1': Protection enable bit for region 62. Write '0': no
#define PROTREG62   0x40000000
// Write '1': Protection enable bit for region 63. Write '0': no
#define PROTREG63   0x80000000

/* Disable protection mechanism in debug mode */
#define DISABLEINDEBUGMPU  MMIO32(MPU + 0x528)
// Disable the protection mechanism for NVM regions while in debug mode.
#define DISABLEINDEBUG  0x1

/* Protection block size */
#define PROTBLOCKSIZE   MMIO32(MPU + 0x528)


#endif
