#pragma once

#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
/* OCD40 PCB pin-out */
#define MATRIX_ROW_PINS { D0, D1, D2, D3 }
#define MATRIX_COL_PINS { F0, E6, C7, C6, B6, D4, B1, B7, B5, B4, D7, B3 }

#undef QMK_LED
#define QMK_LED     NO_PIN
#undef QMK_SPEAKER
#define QMK_SPEAKER NO_PIN

#undef AUDIO_VOICES
#undef AUDIO_PIN
#define AUDIO_PIN NO_PIN

#undef BACKLIGHT_PIN
#define BACKLIGHT_PIN NO_PIN
