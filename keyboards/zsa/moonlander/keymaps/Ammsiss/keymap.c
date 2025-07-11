/* Copyright 2020 ZSA Technology Labs, Inc <@zsa>
 * Copyright 2020 Jack Humbert <jack.humb@gmail.com>
 * Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
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

#include QMK_KEYBOARD_H

#define KC_APP LGUI(KC_SPC)
#define KC_GPT LOPT(KC_SPACE)

enum layers {
    BASE,
    ALT,
};

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   _______,          _______,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   _______,          _______,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,
        KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   _______,          _______,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL,  _______, _______, KC_LOPT, KC_LCMD,         _______,          _______,           MO(ALT), _______, _______, _______, _______,
                                             KC_SPC,  KC_APP, KC_GPT,           _______,  KC_ENT,  KC_BSPC
    ),

    [ALT] = LAYOUT(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,           _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, KC_EQL,  KC_MINS, KC_PLUS, KC_BSLS, _______,           _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_UNDS, KC_LCBR, KC_RCBR, KC_PIPE, _______,           _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, KC_TILD, KC_LBRC, KC_RBRC, KC_GRV,                              _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,          _______,           _______,          _______, _______, _______, _______, _______,
                                            _______, _______, _______,           _______, _______, _______
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
        }
    }
    return true;
}
