/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Planck PCB default pin-out */
// #define MATRIX_ROW_PINS { D0, D5, B5, B6 }
// #define MATRIX_COL_PINS { F1, F0, B0, C7, F4, F5, F6, F7, D4, D6, B4, D7 }

/* OCD40 PCB pin-out */
#define MATRIX_ROW_PINS { D0, D1, D2, D3 }
#define MATRIX_COL_PINS { F0, E6, C7, C6, B6, D4, B1, B7, B5, B4, D7, B3 }

#define QMK_ESC_OUTPUT F1
#define QMK_ESC_INPUT D5

// #define QMK_LED     E6
// #define QMK_SPEAKER C6

#undef QMK_LED
#define QMK_LED     NO_PIN
#undef QMK_SPEAKER
#define QMK_SPEAKER NO_PIN

// #define AUDIO_VOICES
// #define AUDIO_PIN C6

#undef AUDIO_VOICES
#undef AUDIO_PIN
#define AUDIO_PIN NO_PIN

// #define BACKLIGHT_PIN B7

#undef BACKLIGHT_PIN
#define BACKLIGHT_PIN NO_PIN

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
