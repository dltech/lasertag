#ifndef H_CCM_REG
#define H_CCM_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for AES CCM Mode Encryption
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
/* Start generation of key-stream. This oper will stop by itself when compl. */
#define KSGENCCM        MMIO32(CCM + 0x000)
/* Start encryption/decryption. This oper will stop by itself when completed. */
#define CRYPTCCM        MMIO32(CCM + 0x004)
/* Stop encryption/decryption */
#define STOPCCM         MMIO32(CCM + 0x008)

/************Events************************/
/* Key-stream generation complete */
#define ENDKSGENCCM     MMIO32(CCM + 0x100)
/* Encrypt/decrypt complete */
#define ENDCRYPTCCM     MMIO32(CCM + 0x104)
/* CCM error event */
#define ERRORCCM        MMIO32(CCM + 0x108)

/************Registers*********************/
/* Shortcut register */
#define SHORTSCCM       MMIO32(CCM + 0x200)
// Shortcut between ENDKSGEN event and CRYPT task
#define ENDKSGEN_CRYPT  0x1

/* Enable interrupt */
#define INTENSETCCM     MMIO32(CCM + 0x304)
// Write '1' to Enable interrupt on ENDKSGEN event.
#define ENDKSGENC   0x1
// Write '1' to Enable interrupt on ENDCRYPT event.
#define ENDCRYPTC   0x2
// Write '1' to Enable interrupt on ERROR event.
#define ERRORC      0x4

/* Disable interrupt */
#define INTENCLRCCM     MMIO32(CCM + 0x308)
// Write '1' to Clear interrupt on ENDKSGEN event.
// Write '1' to Clear interrupt on ENDCRYPT event.
// Write '1' to Clear interrupt on ERROR event.

/* MIC check result */
#define MICSTATUSCCM    MMIO32(CCM + 0x400)
// The result of the MIC check performed during the previous decryption oper
#define MICSTATUS   0x1

/* Enable */
#define ENABLECCM       MMIO32(CCM + 0x500)
// Enable or disable CCM
#define ENABLEC 0x1

/* Operation mode */
#define MODECCM         MMIO32(CCM + 0x504)
// The mode of operation to be used
#define MODEC   0x1

/* Pointer to data structure holding AES key and NONCE vector */
#define CNFPTRCCM       MMIO32(CCM + 0x508)
// Pointer to the data structure holding the AES key and the CCM NONCE vector

/* Input pointer */
#define INPTRCCM        MMIO32(CCM + 0x50c)
// Input pointer. INPTR[31:0]

/* Output pointer */
#define OUTPTRCCM       MMIO32(CCM + 0x510)
// Output pointer. OUTPTR[31:0]

/* Pointer to data area used for temporary storage */
#define SCRATCHPTRCCM   MMIO32(CCM + 0x514)
// Pointer to a "scratch" data area used for temp storage during keystream gener

#endif
