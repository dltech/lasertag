#ifndef H_ECB_REG
#define H_ECB_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for AES Electronic Codebook mode encryption
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
/* Start ECB block encrypt */
#define STARTECB    MMIO32(ECB + 0x000)
/* Abort a possible executing ECB operation */
#define STOPECB     MMIO32(ECB + 0x004)

/************Events************************/
/* ECB block encrypt complete */
#define ENDECB      MMIO32(ECB + 0x100)
/* ECB block encrypt aborted because of a STOPECB task or due to an error */
#define ERRORECB    MMIO32(ECB + 0x104)

/************Registers*********************/
/* Enable interrupt */
#define INTENSETECB MMIO32(ECB + 0x304)
// Write '1' to Enable interrupt on ENDECB event.
#define ENDECB      0x1
// Write '1' to Enable interrupt on ERRORECB event.
#define ERRORECB    0x2

/* Disable interrupt */
#define INTENCLRECB MMIO32(ECB + 0x308)
// Write '1' to Clear interrupt on ENDECB event.
// Write '1' to Clear interrupt on ERRORECB event.

/* ECB block encrypt memory pointers */
#define ECBDATAPTR  MMIO32(ECB + 0x504)
// Pointer to the ECB data structure (see Table 1 ECB data structure overview)

// ECB data structure overview
#define KEY_ECB_PTR         0
#define CLEARTEXT_ECB_PTR   16
#define CIPHERTEXT_ECB_PTR  32

#endif
