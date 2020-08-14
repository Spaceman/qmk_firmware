/*
Copyright 2020 Spaceman

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4A4E // "JN"
#define PRODUCT_ID      0x544E // "TN"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Saurabh
#define PRODUCT         Titan
#define DESCRIPTION     A 60% keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* Row pin configuration*/
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1 }
/* Column pin configuration*/
#define MATRIX_COL_PINS { B1, B2, B3, B7, D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* RGB Lighting configuration */
#define RGB_DI_PIN B0
#define RGBLED_NUM 66     // Number of LEDs

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
