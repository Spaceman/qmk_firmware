#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
      [0] = LAYOUT(
          KC_0, KC_1,
          KC_2, KC_3
      ),
      [1] = LAYOUT(
          _______, _______,
          _______, _______
      ),
      [2] = LAYOUT(
          _______, _______,
          _______, _______
      ),
      [3] = LAYOUT(
          _______, _______,
          _______, _______
      )
};
