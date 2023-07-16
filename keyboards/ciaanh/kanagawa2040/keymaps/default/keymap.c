/* Copyright 2023 Ciaanh (@ciaanh)
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

enum layers 
{ 
    _BASE,
    _LOWER, 
    _UPPER,
    _CODE
};

enum custom_keycodes 
{ 
    CUSTOMKEY = SAFE_RANGE, 
    NEW_SAFE_RANGE, 
};

#define TO_BASE     TO(_BASE)
#define TO_CODE     TG(_CODE)

#define L_UP       MO(_UPPER)
#define L_DWN      MO(_LOWER)

#define _SCRNSHOT LSFT(LGUI(KC_S))

/* Keyboard layout
*   ,---------.   ,---------------------------------------.  ,---------------------------------------.  ,---------------------------------------.    ,---------.
*   |   ka0   |   |   ka1   |   ka2   |   ka3   |   ka4   |  |   ka5   |   ka6   |   ka7   |   ka8   |  |   ka9   |  ka10   |  ka11   |  ka12   |    |  sw99   |
*   `---------'   `---------+---------+---------+---------'  `---------+---------+---------+---------'  `---------+---------+---------+---------'    `---------'
*   ,-------------------------------------------------------------------------------------------------------------------------------------------.    ,---------.
*   |   kb0   |   kb1   |   kb2   |   kb3   |   kb4   |   kb5   |   kb6   |   kb7   |   kb8   |   kb9   |  kb10   |  kb11   |  kb12   |  kb13   |    |  kd13   |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|    |---------|
*   |   kc0   |   kc1   |   kc2   |   kc3   |   kc4   |   kc5   |   kc6   |   kc7   |   kc8   |   kc9   |  kc10   |  kc11   |  kc12   |  kc13   |    |  ke13   |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'    |---------|
*   |   kd0   |   kd1   |   kd2   |   kd3   |   kd4   |   kd5   |   kd6   |   kd7   |   kd8   |   kd9   |  kd10   |  kd11   |  kd12   |              |  kf13   |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'              `---------'
*   |   ke0   |   ke1   |   ke2   |   ke3   |   ke4   |   ke5   |   ke6   |   ke7   |   ke8   |   ke9   |  ke10   |  ke11   |            ,---------.
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'            |  ke12   |
*   |   kf0   |   kf1   |   kf2   | ,-------------------.     ,-------------------. |   kf7   |   kf8   |   kf9   |            ,---------|---------|---------.
*   `---------+---------+---------+ |   kf3   |   kf4   |     |   kf5   |   kf6   | +---------+---------+---------'            |  kf10   |  kf11   |  kf12   |
*                                   `---------+---------'     `---------+---------'                                            `---------+---------+---------'
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap: BASE
*   ,---------.   ,---------------------------------------.  ,---------------------------------------.  ,---------------------------------------.    ,---------.
*   |   ESC   |   |   F1    |   F2    |   F3    |   F4    |  |   F5    |   F6    |   F7    |   F8    |  |   F9    |   F10   |   F11   |   F12   |    | ENCODER |
*   `---------'   `---------+---------+---------+---------'  `---------+---------+---------+---------'  `---------+---------+---------+---------'    `---------'
*   ,-------------------------------------------------------------------------------------------------------------------------------------------.    ,---------.
*   |    `    |    1    |    2    |    3    |    4    |    5    |    6    |    7    |    8    |    9    |    0    |    -    |    =    |Backspace|    |  Delete |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|    |---------|
*   |   Tab   |    Q    |    W    |    E    |    R    |    T    |    Y    |    U    |    I    |    O    |    P    |    [    |    ]    |    \    |    |   HOME  |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'    |---------|
*   |  CapsL  |    A    |    S    |    D    |    F    |    G    |    H    |    J    |    K    |    L    |    ;    |    '    |  ENTER  |              |   END   |
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'              `---------'
*   | LShift  |    Z    |    X    |    C    |    V    |    B    |    N    |    M    |    ,    |    .    |    /    | RShift  |            ,---------.
*   |---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------'            |    UP   |
*   |  LCtrl  |   LGUI  |   LAlt  | ,-------------------.     ,-------------------. |   RAlt  |   CODE  |  RCtrl  |            ,---------|---------|---------.
*   |---------+---------+---------+ |  Lower  |  Space  |     |  Space  |  Upper  | +---------+---------+---------'            |  LEFT   |   DOWN  |  RIGHT  |
*                                   `---------+---------'     `---------+---------'                                            `---------+---------+---------'  
*/
    [_BASE] = LAYOUT( 
          KC_ESC,   KC_F1,      KC_F2,      KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,           KC_MPLY,
       
          KC_GRV,    KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,   KC_DEL,
          KC_TAB,    KC_Q,       KC_W,       KC_E,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,  KC_HOME,
         KC_CAPS,    KC_A, LT(0,KC_S),       KC_D,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,            KC_END,
         KC_LSFT,    KC_Z, LT(0,KC_X), LT(0,KC_C), LT(0,KC_V),    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,             KC_UP,         
         KC_LCTL, KC_LGUI,    KC_LALT,            L_DWN,  KC_SPC,        KC_SPC,    L_UP,       KC_RALT, TO_CODE, KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT 
    ),

    [_LOWER] = LAYOUT(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX,

       _SCRNSHOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,         
         XXXXXXX, XXXXXXX, XXXXXXX,       _______, XXXXXXX,       XXXXXXX, _______,       XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX 
    ),


    [_UPPER] = LAYOUT(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX,

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,         
         XXXXXXX, XXXXXXX, XXXXXXX,       _______, XXXXXXX,       XXXXXXX, _______,       XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX 
    ),

    [_CODE] = LAYOUT(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             RGB_TOG,

         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     RGB_VAI,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              RGB_VAD,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              RGB_HUI,         
         XXXXXXX, XXXXXXX, XXXXXXX,       _______, XXXXXXX,       XXXXXXX, _______,       XXXXXXX, TO_BASE, XXXXXXX,     RGB_SAD, RGB_HUD, RGB_SAI 
    ),
};

/*****************************************************************************************************/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CUSTOMKEY:
        if (record->event.pressed) {
            if (get_mods() & MOD_MASK_SHIFT) {
                tap_code16(G(A(KC_K)));
            } else {
                tap_code(KC_MPLY);
            }
        } 
        break; 
    case LT(0,KC_X):
        if (!record->tap.count && record->event.pressed) {
            tap_code16(C(KC_X)); // Intercept hold function to send Ctrl-X
            return false;
        }
        return true;
    case LT(0,KC_C):
        if (!record->tap.count && record->event.pressed) {
            tap_code16(C(KC_C)); // Intercept hold function to send Ctrl-C
            return false;
        }
        return true;
    case LT(0,KC_V):
        if (!record->tap.count && record->event.pressed) {
            tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
            return false;
        }
        return true;  
    case LT(0,KC_S):
        if (!record->tap.count && record->event.pressed) {
            tap_code16(C(KC_S)); // Intercept hold function to send Ctrl-S
            return false;
        }
        return true;  
  }
  return true;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER] =  { ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [_UPPER] =  { ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    [_CODE] =   { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD) },
};
#endif
