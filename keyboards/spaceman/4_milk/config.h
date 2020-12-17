/* Copyright 2019 Spaceman
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
#define VENDOR_ID       0x5342 // "SB"
#define PRODUCT_ID      0x3425 // "2%"
#define DEVICE_VER      0x0001
#define MANUFACTURER    Spaceman
#define PRODUCT         4% Milk
#define DESCRIPTION     A milk themed 4% Keyboard

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/* Milk default pinout */
#define DIRECT_PINS { \
    { B4, D6 }, \
    { B3, F7 }  \
}
#define UNUSED_PINS
