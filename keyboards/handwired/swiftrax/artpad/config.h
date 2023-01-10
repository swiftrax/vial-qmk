/*Copyright 2023 Swiftrax <swiftrax@gmail.com>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    Vial
#define PRODUCT         RP2040 example

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { GP5, GP4, GP24, GP23 }
#define MATRIX_COL_PINS { GP25, GP26, GP27, GP28, GP29, GP11 }

#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define ENCODERS_PAD_A { GP1 }
#define ENCODERS_PAD_B { GP0 }

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 300000
#endif

#define OLED_FONT_END 127