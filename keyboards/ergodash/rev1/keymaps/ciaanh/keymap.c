#include QMK_KEYBOARD_H
#include "ciaanh.h"

enum layers { _QWERTY, _LOWER, _RAISE, _ADJUST };

enum custom_keycodes { QWERTY = SAFE_RANGE, LOWER, RAISE, ADJUST };


#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap: QWERTY
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * | ESC/~  |   1    |   2  |   3  |   4  |   5  |   [  |           |  ]   |   6  |   7  |   8  |   9  |   0    | Pscree |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * | `      |   K01  |  K02 |  K03 |  K04 |  K05 |   -  |           |  =   |  K06 |  K07 |  K08 |  K09 |  K0A   |   \    |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | Tab    |   K11  |  K12 |  K13 |  K14 |  K15 |   {  |           |  }   |  K16 |  K17 |  K18 |  K19 |  K1A   |   "    |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | LShift |   K21  |  K22 |  K23 |  K24 |  K25 |                         |  K26 |  K27 |  K28 |  K29 |  K2A   | RShift |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * | LCtrl  |   GUI  |  Alt |  Alt |                                                     | LEFT | DOWN |   UP   | RIGHT  |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       | Lower|       |           |      | Raise |
     *                               ,-------|   /  |  Del  |           | Bksp +   /   +-------.
     *                               |CMD/Spc| Space|       |           |      | Enter |CMD/Spc|
     *                               `----------------------'           `----------------------'
     */
    [_QWERTY] = LAYOUT( \
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,                        KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR, \
        KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
        KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
    ),


    /* Keymap: LOWER
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * | ESC    |   1    |   2  |   3  |   4  |   5  |   [  |           |  ]   |   6  |   7  |   8  |   9  |   0    | Pscree |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * | `      |   K01  |  K02 |  K03 |  K04 |  K05 |   -  |           |  =   |  K06 |  K07 |  K08 |  K09 |  K0A   |   \    |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | Tab    |   K11  |  K12 |  K13 |  K14 |  K15 |   {  |           |  }   |  K16 |  K17 |  K18 |  K19 |  K1A   |   "    |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | LShift |   K21  |  K22 |  K23 |  K24 |  K25 |                         |  K26 |  K27 |  K28 |  K29 |  K2A   | RShift |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * | LCtrl  |   GUI  |  Alt |  Alt |                                                     | LEFT | DOWN |   UP   | RIGHT  |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       | Lower|       |           |      | Raise |
     *                               ,-------|   /  |  Del  |           | Bksp +   /   +-------.
     *                               |CMD/Spc| Space|       |           |      | Enter |CMD/Spc|
     *                               `----------------------'           `----------------------'
     */
    [_LOWER] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,  \
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT , \
        KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT, \
        KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
    ),


    /* Keymap: RAISE
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * | ESC    |   1    |   2  |   3  |   4  |   5  |   [  |           |  ]   |   6  |   7  |   8  |   9  |   0    | Pscree |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * | `      |   K01  |  K02 |  K03 |  K04 |  K05 |   -  |           |  =   |  K06 |  K07 |  K08 |  K09 |  K0A   |   \    |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | Tab    |   K11  |  K12 |  K13 |  K14 |  K15 |   {  |           |  }   |  K16 |  K17 |  K18 |  K19 |  K1A   |   "    |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | LShift |   K21  |  K22 |  K23 |  K24 |  K25 |                         |  K26 |  K27 |  K28 |  K29 |  K2A   | RShift |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * | LCtrl  |   GUI  |  Alt |  Alt |                                                     | LEFT | DOWN |   UP   | RIGHT  |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       | Lower|       |           |      | Raise |
     *                               ,-------|   /  |  Del  |           | Bksp +   /   +-------.
     *                               |CMD/Spc| Space|       |           |      | Enter |CMD/Spc|
     *                               `----------------------'           `----------------------'
     */
    [_RAISE] = LAYOUT(
        KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,  \
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, \
        KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT , \
        KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT, \
        KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END   \
    ),


    /* Keymap: ADJUST
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * | ESC    |   1    |   2  |   3  |   4  |   5  |   [  |           |  ]   |   6  |   7  |   8  |   9  |   0    | Pscree |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * | `      |   K01  |  K02 |  K03 |  K04 |  K05 |   -  |           |  =   |  K06 |  K07 |  K08 |  K09 |  K0A   |   \    |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | Tab    |   K11  |  K12 |  K13 |  K14 |  K15 |   {  |           |  }   |  K16 |  K17 |  K18 |  K19 |  K1A   |   "    |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | LShift |   K21  |  K22 |  K23 |  K24 |  K25 |                         |  K26 |  K27 |  K28 |  K29 |  K2A   | RShift |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * | LCtrl  |   GUI  |  Alt |  Alt |                                                     | LEFT | DOWN |   UP   | RIGHT  |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       | Lower|       |           |      | Raise |
     *                               ,-------|   /  |  Del  |           | Bksp +   /   +-------.
     *                               |CMD/Spc| Space|       |           |      | Enter |CMD/Spc|
     *                               `----------------------'           `----------------------'
     */
    [_ADJUST] = LAYOUT(
        _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, \
        _______, RESET  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,_______,                       _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______, \
        _______, _______, BL_TOGG, BL_BRTG, BL_INC , BL_DEC ,_______,                       _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______,          _______,_______,_______,       _______,_______, _______,          _______, _______, _______, _______  \
    )



};

















void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}






bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {


    case CSTM_0:
        SHIFT_DU(KEY_SHIFT(9), KEY(0));
        return false;



    case QWERTY:
      if (record->event.pressed) {
         print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;




    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;



    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;



    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;



  }
  return true;
}
