#ifndef H_RADIO_REG
#define H_RADIO_REG
/*
 * Lasertag on Nordic NRF51
 * Register macro for 2.4 GHz Radio
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
/* Enable RADIO in TX mode */
#define TXENRADIO           MMIO32(RADIO + 0x000)
/* Enable RADIO in RX mode */
#define RXENRADIO           MMIO32(RADIO + 0x004)
/* Start RADIO */
#define STARTRADIO          MMIO32(RADIO + 0x008)
/* Stop RADIO */
#define STOPRADIO           MMIO32(RADIO + 0x00c)
/* Disable RADIO */
#define DISABLERADIO        MMIO32(RADIO + 0x010)
/* Start the RSSI and take one single sample of the receive signal strength */
#define RSSISTARTRADIO      MMIO32(RADIO + 0x014)
/* Stop the RSSI measurement */
#define RSSISTOPRADIO       MMIO32(RADIO + 0x018)
/* Start the bit counter */
#define BCSTARTRADIO        MMIO32(RADIO + 0x01c)
/* Stop the bit counter */
#define BCSTOPRADIO         MMIO32(RADIO + 0x020)

/************Events************************/
/* RADIO has ramped up and is ready to be started */
#define READYRADIO          MMIO32(RADIO + 0x100)
/* Address sent or received */
#define ADDRESSRADIO        MMIO32(RADIO + 0x104)
/* Packet payload sent or received */
#define PAYLOADRADIO        MMIO32(RADIO + 0x108)
/* Packet sent or received */
#define ENDRADIO            MMIO32(RADIO + 0x10c)
/* RADIO has been disabled */
#define DISABLEDRADIO       MMIO32(RADIO + 0x110)
/* A device address match occurred on the last received packet */
#define DEVMATCHRADIO       MMIO32(RADIO + 0x114)
/* No device address match occurred on the last received packet */
#define DEVMISSRADIO        MMIO32(RADIO + 0x118)
/*Sampling of receive signal strength complete. A new sample is ready for read*/
#define RSSIENDRADIO        MMIO32(RADIO + 0x11c)
/* Bit counter reached bit count value specified in the BCC register */
#define BCMATCHRADIO        MMIO32(RADIO + 0x128)

/************Registers*********************/
/* Shortcut register */
#define SHORTSRADIO         MMIO32(RADIO + 0x200)

/* Enable interrupt */
#define INTENSETRADIO       MMIO32(RADIO + 0x304)

/* Disable interrupt */
#define INTENCLRRADIO       MMIO32(RADIO + 0x308)

/* CRC status */
#define CRCSTATUSRADIO      MMIO32(RADIO + 0x400)

/* Received address */
#define RXMATCHRADIO        MMIO32(RADIO + 0x408)

/* CRC field of previously received packet */
#define RXCRCRADIO          MMIO32(RADIO + 0x40c)

/* Device address match index */
#define DAIRADIO            MMIO32(RADIO + 0x410)

/* Packet pointer */
#define PACKETPTRRADIO      MMIO32(RADIO + 0x504)

/* Frequency */
#define FREQUENCYRADIO      MMIO32(RADIO + 0x508)

/* Output power */
#define TXPOWERRADIO        MMIO32(RADIO + 0x50c)

/* Data rate and modulation */
#define MODERADIO           MMIO32(RADIO + 0x510)

/* Packet configuration register 0 */
#define PCNF0RADIO          MMIO32(RADIO + 0x514)

/* Packet configuration register 1 */
#define PCNF1RADIO          MMIO32(RADIO + 0x518)

/* Base address 0 */
#define BASE0RADIO          MMIO32(RADIO + 0x51c)

/* Base address 1 */
#define BASE1RADIO          MMIO32(RADIO + 0x520)

/* Prefixes bytes for logical addresses 0-3 */
#define PREFIX0RADIO        MMIO32(RADIO + 0x524)

/* Prefixes bytes for logical addresses 4-7 */
#define PREFIX1RADIO        MMIO32(RADIO + 0x528)

/* Transmit address select */
#define TXADDRESSRADIO      MMIO32(RADIO + 0x52c)

/* Receive address select */
#define RXADDRESSESRADIO    MMIO32(RADIO + 0x530)

/* CRC configuration */
#define CRCCNFRADIO         MMIO32(RADIO + 0x534)

/* CRC polynomial */
#define CRCPOLYRADIO        MMIO32(RADIO + 0x538)

/* CRC initial value */
#define CRCINITRADIO        MMIO32(RADIO + 0x53c)

/* Test features enable register. */
#define TESTRADIO           MMIO32(RADIO + 0x540)

/* Inter Frame Spacing in us */
#define TIFSRADIO           MMIO32(RADIO + 0x544)

/* RSSI sample */
#define RSSISAMPLERADIO     MMIO32(RADIO + 0x548)

/* Current radio state */
#define STATERADIO          MMIO32(RADIO + 0x550)

/* Data whitening initial value */
#define DATAWHITEIVRADIO    MMIO32(RADIO + 0x554)

/* Bit counter compare */
#define BCCRADIO            MMIO32(RADIO + 0x560)

/* Device address base segment n */
#define DAB0RADIO           MMIO32(RADIO + 0x600)
#define DAB1RADIO           MMIO32(RADIO + 0x604)
#define DAB2RADIO           MMIO32(RADIO + 0x608)
#define DAB3RADIO           MMIO32(RADIO + 0x60c)
#define DAB4RADIO           MMIO32(RADIO + 0x610)
#define DAB5RADIO           MMIO32(RADIO + 0x614)
#define DAB6RADIO           MMIO32(RADIO + 0x618)
#define DAB7RADIO           MMIO32(RADIO + 0x61c)

/* Device address prefix n */
#define DAP0RADIO           MMIO32(RADIO + 0x620)
#define DAP1RADIO           MMIO32(RADIO + 0x624)
#define DAP2RADIO           MMIO32(RADIO + 0x628)
#define DAP3RADIO           MMIO32(RADIO + 0x62c)
#define DAP4RADIO           MMIO32(RADIO + 0x630)
#define DAP5RADIO           MMIO32(RADIO + 0x634)
#define DAP6RADIO           MMIO32(RADIO + 0x638)
#define DAP7RADIO           MMIO32(RADIO + 0x63c)

/* Device address match configuration */
#define DACNFRADIO          MMIO32(RADIO + 0x640)

/* Trim value override register n */
#define OVERRIDE0RADIO      MMIO32(RADIO + 0x724)
#define OVERRIDE1RADIO      MMIO32(RADIO + 0x728)
#define OVERRIDE2RADIO      MMIO32(RADIO + 0x72c)
#define OVERRIDE3RADIO      MMIO32(RADIO + 0x730)
#define OVERRIDE4RADIO      MMIO32(RADIO + 0x734)

/* Peripheral power control */
#define POWERRADIO          MMIO32(RADIO + 0xffc)

#endif
