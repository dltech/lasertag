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
// Shortcut between READY event and START task
#define READY_START         0x001
// Shortcut between END event and DISABLE task
#define END_DISABLE         0x002
// Shortcut between DISABLED event and TXEN task
#define DISABLED_TXEN       0x004
// Shortcut between DISABLED event and RXEN task
#define DISABLED_RXEN       0x008
// Shortcut between ADDRESS event and RSSISTART task
#define ADDRESS_RSSISTART   0x010
// Shortcut between END event and START task
#define END_START           0x020
// Shortcut between ADDRESS event and BCSTART task
#define ADDRESS_BCSTART     0x040
// Shortcut between DISABLED event and RSSISTOP task
#define DISABLED_RSSISTOP   0x100

/* Enable interrupt */
#define INTENSETRADIO       MMIO32(RADIO + 0x304)
// Write '1' to Enable interrupt on READY event.
#define READYR       0x001
// Write '1' to Enable interrupt on ADDRESS event.
#define ADDRESSR     0x002
// Write '1' to Enable interrupt on PAYLOAD event.
#define PAYLOADR     0x004
// Write '1' to Enable interrupt on END event.
#define ENDR         0x008
// Write '1' to Enable interrupt on DISABLED event.
#define DISABLEDR    0x010
// Write '1' to Enable interrupt on DEVMATCH event.
#define DEVMATCHR    0x020
// Write '1' to Enable interrupt on DEVMISS event.
#define DEVMISSR     0x040
// Write '1' to Enable interrupt on RSSIEND event.
#define RSSIENDR     0x080
// Write '1' to Enable interrupt on BCMATCH event.
#define BCMATCHR     0x400

/* Disable interrupt */
#define INTENCLRRADIO       MMIO32(RADIO + 0x308)
// Write '1' to Clear interrupt on READY event.
// Write '1' to Clear interrupt on ADDRESS event.
// Write '1' to Clear interrupt on PAYLOAD event.
// Write '1' to Clear interrupt on END event.
// Write '1' to Clear interrupt on DISABLED event.
// Write '1' to Clear interrupt on DEVMATCH event.
// Write '1' to Clear interrupt on DEVMISS event.
// Write '1' to Clear interrupt on RSSIEND event.
// Write '1' to Clear interrupt on BCMATCH event.

/* CRC status */
#define CRCSTATUSRADIO      MMIO32(RADIO + 0x400)
// CRC status of packet received
#define CRCSTATUSR   0x1

/* Received address */
#define RXMATCHRADIO        MMIO32(RADIO + 0x408)
// Logical address of which previous packet was received. RXMATCH[2:0]

/* CRC field of previously received packet */
#define RXCRCRADIO          MMIO32(RADIO + 0x40c)
// CRC field of previously received packet. RXCRC[23:0]

/* Device address match index */
#define DAIRADIO            MMIO32(RADIO + 0x410)
// Device address match index. DAI[2:0]

/* Packet pointer */
#define PACKETPTRRADIO      MMIO32(RADIO + 0x504)
// Packet address to be used for the next transmission or reception. PACKETPTR[]

/* Frequency */
#define FREQUENCYRADIO      MMIO32(RADIO + 0x508)
// Radio channel frequency.
#define FREQUENCY_MHZ(n)    (n+2400)

/* Output power */
#define TXPOWERRADIO        MMIO32(RADIO + 0x50c)
// RADIO output power in number of dBm.
#define TXPOWER_P4DBM   0x04
#define TXPOWER_0DBM    0x00
#define TXPOWER_M4DBM   0xfc
#define TXPOWER_M8DBM   0xf8
#define TXPOWER_M12DBM  0xf4
#define TXPOWER_M16DBM  0xf0
#define TXPOWER_M20DBM  0xec
#define TXPOWER_M30DBM  0xd8


/* Data rate and modulation */
#define MODERADIO           MMIO32(RADIO + 0x510)
// Radio data rate and modulation setting.
#define MODE_Nrf_1Mbit      0x0
#define MODE_Nrf_2Mbit      0x1
#define MODE_Nrf_250Kbit    0x2
#define MODE_Ble_1Mbit      0x3

/* Packet configuration register 0 */
#define PCNF0RADIO          MMIO32(RADIO + 0x514)
// Length on air of LENGTH field in number of bits.
#define LFLEN_SFT   0
#define LFLEN_MSK   0xf
// Length on air of S0 field in number of bytes.
#define S0LEN_SFT   8
#define S0LEN_MSK   0x1
// Length on air of S1 field in number of bits.
#define S1LEN_SFT   16
#define S1LEN_MSK   0xf

/* Packet configuration register 1 */
#define PCNF1RADIO          MMIO32(RADIO + 0x518)
// Maximum length of packet payload.
#define MAXLEN_SFT  0
#define MAXLEN_MSK  0xff
// Static length in number of bytes
#define STATLEN_SFT 8
#define STATLEN_MSK 0xff
// Base address length in number of bytes
#define BALEN_SFT   16
#define BALEN_MSK   0x7
// On air endianness of packet. Little = 0. Big = 1.
#define ENDIAN      0x1000000
// Enable or disable packet whitening.
#define WHITEENR    0x2000000

/* Base address 0 */
#define BASE0RADIO          MMIO32(RADIO + 0x51c)
// Radio base address 0. BASE0[31:0]

/* Base address 1 */
#define BASE1RADIO          MMIO32(RADIO + 0x520)
// Radio base address 1. BASE1[31:0]

/* Prefixes bytes for logical addresses 0-3 */
#define PREFIX0RADIO        MMIO32(RADIO + 0x524)
// Address prefix n
#define AP_MSK  0xff
#define AP0_SFT 0
#define AP1_SFT 8
#define AP2_SFT 16
#define AP3_SFT 24

/* Prefixes bytes for logical addresses 4-7 */
#define PREFIX1RADIO        MMIO32(RADIO + 0x528)
// Address prefix n
#define AP4_SFT 0
#define AP5_SFT 8
#define AP6_SFT 16
#define AP7_SFT 24

/* Transmit address select */
#define TXADDRESSRADIO      MMIO32(RADIO + 0x52c)
// Logical address to be used when transmitting a packet. TXADDRESS[2:0]

/* Receive address select */
#define RXADDRESSESRADIO    MMIO32(RADIO + 0x530)
// Enable or disable reception on logical address 0.
#define ADDR0   0x01
// Enable or disable reception on logical address 1.
#define ADDR1   0x02
// Enable or disable reception on logical address 2.
#define ADDR2   0x04
// Enable or disable reception on logical address 3.
#define ADDR3   0x08
// Enable or disable reception on logical address 4.
#define ADDR4   0x10
// Enable or disable reception on logical address 5.
#define ADDR5   0x20
// Enable or disable reception on logical address 6.
#define ADDR6   0x40
// Enable or disable reception on logical address 7.
#define ADDR7   0x80

/* CRC configuration */
#define CRCCNFRADIO         MMIO32(RADIO + 0x534)
// CRC length in number of bytes.
#define LEN_DIS     0x000
#define LEN_ONE     0x001
#define LEN_TWO     0x002
#define LEN_THREE   0x003
// Include or exclude packet address field out of CRC calculation.
#define SKIPADDR    0x100

/* CRC polynomial */
#define CRCPOLYRADIO        MMIO32(RADIO + 0x538)
// CRC polynomial. ex for 8 bit CRC poly: x8 + x7 + x3 + x2 + 1 = 1 1000 1101.

/* CRC initial value */
#define CRCINITRADIO        MMIO32(RADIO + 0x53c)
// Initial value for CRC calculation. CRCINIT[23:0]

/* Test features enable register. */
#define TESTRADIO           MMIO32(RADIO + 0x540)
// Enable or disable constant carrier.
#define CONSTCARRIER    0x1
// Enable or disable PLL lock.
#define PLLLOCK         0x2

/* Inter Frame Spacing in us */
#define TIFSRADIO           MMIO32(RADIO + 0x544)
// Inter Frame Spacing in us. TIFS[7:0]

/* RSSI sample */
#define RSSISAMPLERADIO     MMIO32(RADIO + 0x548)
// RSSI sample result. RSSISAMPLE[6:0]

/* Current radio state */
#define STATERADIO          MMIO32(RADIO + 0x550)
// Current radio state
#define STATE_DISABLED      0x0
#define STATE_RXRU          0x1
#define STATE_RXIDLE        0x2
#define STATE_RX            0x3
#define STATE_RXDISABLED    0x4
#define STATE_TXRU          0x9
#define STATE_TXIDLE        0xa
#define STATE_TX            0xb
#define STATE_TXDISABLED    0xc

/* Data whitening initial value */
#define DATAWHITEIVRADIO    MMIO32(RADIO + 0x554)
// Data whitening initial value.
#define DATAWHITEIV6    0x01
#define DATAWHITEIV5    0x02
#define DATAWHITEIV4    0x04
#define DATAWHITEIV3    0x08
#define DATAWHITEIV2    0x10
#define DATAWHITEIV1    0x20

/* Bit counter compare */
#define BCCRADIO            MMIO32(RADIO + 0x560)
// Bit counter compare. BCC[31:0]

/* Device address base segment n */
#define DAB0RADIO           MMIO32(RADIO + 0x600)
#define DAB1RADIO           MMIO32(RADIO + 0x604)
#define DAB2RADIO           MMIO32(RADIO + 0x608)
#define DAB3RADIO           MMIO32(RADIO + 0x60c)
#define DAB4RADIO           MMIO32(RADIO + 0x610)
#define DAB5RADIO           MMIO32(RADIO + 0x614)
#define DAB6RADIO           MMIO32(RADIO + 0x618)
#define DAB7RADIO           MMIO32(RADIO + 0x61c)
// Device address base segment n. DAB[31:0]

/* Device address prefix n */
#define DAP0RADIO           MMIO32(RADIO + 0x620)
#define DAP1RADIO           MMIO32(RADIO + 0x624)
#define DAP2RADIO           MMIO32(RADIO + 0x628)
#define DAP3RADIO           MMIO32(RADIO + 0x62c)
#define DAP4RADIO           MMIO32(RADIO + 0x630)
#define DAP5RADIO           MMIO32(RADIO + 0x634)
#define DAP6RADIO           MMIO32(RADIO + 0x638)
#define DAP7RADIO           MMIO32(RADIO + 0x63c)
// Device address prefix n. DAP[15:0]

/* Device address match configuration */
#define DACNFRADIO          MMIO32(RADIO + 0x640)
// Enable or disable device address matching using device address 0
#define ENA0     0x0001
// Enable or disable device address matching using device address 1
#define ENA1     0x0002
// Enable or disable device address matching using device address 2
#define ENA2     0x0004
// Enable or disable device address matching using device address 3
#define ENA3     0x0008
// Enable or disable device address matching using device address 4
#define ENA4     0x0010
// Enable or disable device address matching using device address 5
#define ENA5     0x0020
// Enable or disable device address matching using device address 6
#define ENA6     0x0040
// Enable or disable device address matching using device address 7
#define ENA7     0x0080
// TxAdd for device address 0
#define TXADD0   0x0100
// TxAdd for device address 1
#define TXADD1   0x0200
// TxAdd for device address 2
#define TXADD2   0x0400
// TxAdd for device address 3
#define TXADD3   0x0800
// TxAdd for device address 4
#define TXADD4   0x1000
// TxAdd for device address 5
#define TXADD5   0x2000
// TxAdd for device address 6
#define TXADD6   0x4000
// TxAdd for device address 7
#define TXADD7   0x8000

/* Trim value override register n */
#define OVERRIDE0RADIO      MMIO32(RADIO + 0x724)
#define OVERRIDE1RADIO      MMIO32(RADIO + 0x728)
#define OVERRIDE2RADIO      MMIO32(RADIO + 0x72c)
#define OVERRIDE3RADIO      MMIO32(RADIO + 0x730)
#define OVERRIDE4RADIO      MMIO32(RADIO + 0x734)
// Enable or disable override of default trim values. OVERRIDEn
// Enable or disable override of default trim values.
#define ENABLETRIM  0x80000000

/* Peripheral power control */
#define POWERRADIO          MMIO32(RADIO + 0xffc)
// Peripheral power control.
#define POWERR  0x1

#endif
