/* Copyright 2020 Spaceman
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5342 // SB 
#define PRODUCT_ID      0x4137 // A7
#define DEVICE_VER      0x0001
#define MANUFACTURER    Spaceman
#define PRODUCT         Alpha°7

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, C7, C6, B6, D5, D4 }
#define MATRIX_COL_PINS { B5, B4, D7, D6, B0, B1, B2, F7, F6, F5, F4, F1, F0, B3 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

/* per key rgb settings */
#define RGB_DI_PIN E6
#define RGBLED_NUM 80

/* other settings */
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D3 }
#define OLED_DISPLAY_128X64