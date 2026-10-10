/* Copyright (C) 2023 jonylee@hfd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define ENCODER_DEFAULT_POS 0x3

/* SPI Config for spi flash*/
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4
#define SPI_MOSI_PAL_MODE 5

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12

/* I2C Config for LED Driver */
#define SNLED27351_I2C_ADDRESS_1 SNLED27351_I2C_ADDRESS_GND
#define SNLED27351_I2C_ADDRESS_2 SNLED27351_I2C_ADDRESS_VDDIO

/* RGB LEDs: 4-pin common-anode RGB SMD LEDs, south-facing reverse mount
 * (3528 body, sold as "6028 reverse mount RGB"). Each LED uses one CA line
 * (anode) and three CB lines (R, G, B cathodes), see m1.c. See readme.md. */

/* Current tune per CB line (CB1..CB12 = R, G, B, R, G, B, ...).
 * Not set: the driver default is 0xFF on every channel (maximum current).
 * Uncomment to run the LEDs at a lower current, which lowers brightness. */
// #define SNLED27351_CURRENT_TUNE { 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0 }

#define I2C1_OPMODE OPMODE_I2C
#define I2C1_CLOCK_SPEED 400000 /* 400000 */

#define RGB_TRIGGER_ON_KEYDOWN

#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
