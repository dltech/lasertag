#ifndef H_AAR_REG
#define H_AAR_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for Accelerated Address Resolver
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
/* Start resolving addresses based on IRKs specified in the IRK data structure */
#define STARTAAR        MMIO32(AAR + 0x000)
/* Stop resolving addresses */
#define STOPAAR         MMIO32(AAR + 0x000)

/************Events************************/
/* Address resolution procedure complete */
#define ENDAAR          MMIO32(AAR + 0x100)
/* Address resolved */
#define RESOLVEDAAR     MMIO32(AAR + 0x100)
/* Address not resolved */
#define NOTRESOLVEDAAR  MMIO32(AAR + 0x100)
/************Registers*********************/
/* Enable interrupt */
#define INTENSETAAR     MMIO32(AAR + 0x200)
// Write '1' to Enable interrupt on END event.
#define ENDA            0x1
// Write '1' to Enable interrupt on RESOLVED event.
#define RESOLVEDA       0x2
// Write '1' to Enable interrupt on NOTRESOLVED event.
#define NOTRESOLVEDA    0x4

/* Disable interrupt */
#define INTENCLRAAR     MMIO32(AAR + 0x200)
// Write '1' to Clear interrupt on END event.
// Write '1' to Clear interrupt on RESOLVED event.
// Write '1' to Clear interrupt on NOTRESOLVED event.

/* Resolution status */
#define STATUSAAR       MMIO32(AAR + 0x200)
// The IRK that was used last time an address was resolved. STATUS[3:0]

/* Enable AAR */
#define ENABLEAAR       MMIO32(AAR + 0x200)
// Enable or disable AAR.
#define ENABLEA 0x3

/* Number of IRKs */
#define NIRKAAR         MMIO32(AAR + 0x200)
// Number of Identity root keys available in the IRK data structure. NIRK[31:0]

/* Pointer to IRK data structure */
#define IRKPTRAAR       MMIO32(AAR + 0x200)
// Pointer to the IRK data structure. IRKPTR[31:0]

/* Pointer to the resolvable address */
#define ADDRPTRAAR      MMIO32(AAR + 0x200)
// Pointer to the resolvable address (6-bytes). ADDRPTR[31:0]

/* Pointer to data area used for temporary storage */
#define SCRATCHPTRAAR   MMIO32(AAR + 0x200)
// Ptr to a "scratch" data area used for temporary storage during resolution.

#endif
