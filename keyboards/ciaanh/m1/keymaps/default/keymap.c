/* Copyright (C) 2023 jonylee@hfd
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

enum __layers {
    _BASE,
    _CUSTOM,
    _WOW,
    _FUNCTIONS
};

#define KC_LS LT(0,KC_S)
#define KC_LX LT(0,KC_X)
#define KC_LC LT(0,KC_C)
#define KC_LV LT(0,KC_V)

#define TO_FN MO(_FUNCTIONS)
#define TO_BL TO(_BASE)
#define TO_CL TG(_CUSTOM)
#define TO_WoW TG(_WOW)


enum {
    TD_CAPS,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};




// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_ansi( /* Base */
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,   KC_DEL,           KC_MPLY,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,KC_EQL,   KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,KC_RBRC,  KC_BSLS,          KC_PGUP,
    TD(TD_CAPS), KC_A,   KC_LS,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,     KC_ENT,                KC_PGDN,
        KC_LSFT, KC_Z,   KC_LX,   KC_LC,   KC_LV,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,           KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, TO_FN,   KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT),

    
    [_CUSTOM] = LAYOUT_ansi( /* WASD/↑←↓→ */
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,                _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,           _______, _______,
        _______, _______, _______,                   _______,                            _______, _______, _______,          _______,  _______, _______),

    
    [_WOW] = LAYOUT_ansi( /* Custom base */
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        XXXXXXX,C(KC_F1),C(KC_F2),C(KC_F3),C(KC_F4),C(KC_F5), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        XXXXXXX,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,               XXXXXXX,
        _______,C(KC_F6),C(KC_F7),C(KC_F8),C(KC_F9),C(KC_F10),XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,          _______, XXXXXXX,
        _______, _______, _______,                   _______,                            XXXXXXX, _______, XXXXXXX,          _______, _______, _______),

    
    [_FUNCTIONS] = LAYOUT_ansi(
        _______,   TO_BL,   TO_CL,  TO_WoW, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______,           RGB_TOG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______,  QK_RBT, _______, _______, KC_INS,  _______, KC_PSCR, _______, _______, RGB_MOD,           RGB_VAI,
        _______, _______, _______, _______, _______,  EE_CLR, _______, _______, _______, RGB_TOG, _______, _______,      RGB_SPI,               RGB_VAD,
        _______, _______, _______, KC_CALC, _______, QK_BOOT, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______,          RGB_SPD,           RGB_HUI, _______,
        _______, GU_TOGG, _______,                   _______,                            _______, _______, _______,          RGB_SAD,  RGB_HUD, RGB_SAI)
};


// clang-format off
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_CUSTOM] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_WOW] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [_FUNCTIONS] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) }
};
#endif

