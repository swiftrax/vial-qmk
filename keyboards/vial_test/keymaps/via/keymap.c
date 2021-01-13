#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(KC_A),
[1] = LAYOUT(KC_TRNS),
[2] = LAYOUT(KC_TRNS),
[3] = LAYOUT(KC_TRNS),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_B);
        } else {
            tap_code(KC_C);
        }
    }
}
