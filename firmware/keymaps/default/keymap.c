// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* C - Ctrl + ..., S - Shift + ...
     * P/P - Play/Pause
     * ┌───┬───┬───┬───┬───┐
     * │CSN│CSM│F13│F14│ 0 │
     * ├───┼───┼───┼───┼───┘
     * │ 0 │ 0 │ 0 │ 0 │
     * ├───┼───┼───┼───┤
     * │ 0 │ 0 │ 0 │ 0 │
     * ├───┼───┼───┼───┤
     * │ 0 │Prv│P/P│Nxt|
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        LCS(KC_N), LCS(KC_M), KC_F13, KC_F14, KC_P0,
        KC_P0, KC_P0, KC_P0, KC_P0,
        KC_P0, KC_P0, KC_P0, KC_P0,
        KC_P0, KC_MPRV, KC_MPLY, KC_MNXT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
};
#endif