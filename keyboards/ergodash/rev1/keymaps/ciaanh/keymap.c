#include QMK_KEYBOARD_H

enum layers { _QWERTY, _LOWER, _RAISE, _ADJUST };

enum custom_keycodes { QWERTY = SAFE_RANGE, LOWER, RAISE, ADJUST, REFORMAT, COMM, UNCOMM };


#define _SAVE    LCTL(KC_S)
#define _CUT    LCTL(KC_X)
#define _COPY    LCTL(KC_C)
#define _PASTE    LCTL(KC_V)

#define VSC_FRM LSFT(LALT(KC_F))
#define VSC_TRM LCTL(KC_GRV)
#define VSC_COM LCTL(KC_P)

#define VS_INT  LALT(KC_ENT)
#define VS_QW   LSFT(KC_F9)
#define VS_PEEK LALT(KC_F12)
#define VS_FREF LSFT(KC_F12)
#define VS_GREF LCTL(KC_F12)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap: QWERTY
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * |  ESC   |   1    |   2  |   3  |   4  |   5  |   [  |           |  ]   |   6  |   7  |   8  |   9  |   0    |  PScr  |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * |  Tab   |   Q    |  W   |  E   |  R   |  T   |   /  |           |  \   |   Y  |   U  |   I  |   O  |   P    |   Del  |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | CapsL  |   A    |  S   |  D   |  F   |  G   |   '  |           |  `   |   H  |   J  |   K  |   L  |   =    |  Home  |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | LShift |   Z    |  X   |  C   |  V   |  B   |                         |   N  |   M  |   ,  |   .  |   UP   |  End   |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * | LCtrl  |   GUI  | LAlt | RAlt |                                                     | Menu | LEFT |  DOWN  | RIGHT  |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       | SCLN |       |           |      | Minus |
     *                               ,-------|   /  | Bksp  |           | Spc  +   /   +-------.
     *                               | Lower | Enter|       |           |      | Enter | Raise |
     *                               `----------------------'           `----------------------'
     */
    [_QWERTY] = LAYOUT( \
        KC_ESC , KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,                                        KC_RBRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_PSCR, \
        K C_TAB, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SLSH,                                        KC_BSLS,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL, \
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_QUOT,                                        KC_GRAVE,   KC_H,    KC_J,    KC_K,    KC_L,  KC_EQL, KC_HOME, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_SCLN,                      KC_MINS,             KC_N,    KC_M, KC_COMM,  KC_DOT,   KC_UP,  KC_END, \
        KC_LCTL, KC_LGUI, KC_LALT, KC_RALT,                     LOWER,  KC_ENT, KC_BSPC,     KC_SPC,  KC_ENT,   RAISE,                    KC_APP, KC_LEFT, KC_DOWN, KC_RGHT  \
    ),


    /* Keymap: LOWER
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * |Sft F12 |   F12  |      |      |  F5  |      |      |           |      |  F1  |  F2  |  F3  |  F4  |        |        |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * | F12    |   F9   | F10  | F11  |  F8  |      | COMM |           |      |  F5  |  F6  |  F7  |  F8  |        |        |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * | Ctl F12| Sft F9 | SAVE | C K E| A S F| Ctl `|UNCOMM|           |      |  F9  | F10  | F11  | F12  |        |        |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * | Alt ENT|        | CUT  | COPY | PASTE| Ctl P|                         |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * |        |        |      |      |                                                     |      |      |        |        |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       |      |       |           |      |       |
     *                               ,-------|   /  |       |           |      +   /   +-------.
     *                               | Lower |      |       |           |      |       | Raise |
     *                               `----------------------'           `----------------------'
     */

    [_LOWER] = LAYOUT(
        VS_FREF, VS_PEEK,   KC_NO,   KC_NO,   KC_F5,   KC_NO,   KC_NO,                                          KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO, \
         KC_F12,   KC_F9,  KC_F10,  KC_F11,   KC_F8,   KC_NO,    COMM,                                          KC_NO,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO, \
        VS_GREF,   VS_QW,   _SAVE,REFORMAT, VSC_FRM, VSC_TRM,  UNCOMM,                                          KC_NO,   KC_F9,  KC_F10,  KC_F11,  KC_F12,   KC_NO,   KC_NO, \
         VS_INT,   KC_NO,    _CUT,   _COPY,  _PASTE, VSC_COM,            KC_NO,                        KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
          KC_NO,   KC_NO,   KC_NO,   KC_NO,                   _______,   KC_NO,   KC_NO,      KC_NO,   KC_NO, _______,                     KC_NO,   KC_NO,   KC_NO,   KC_NO  \

    ),
  

    /* Keymap: RAISE
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * |        |        |      |      |      |      |      |           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * |        |        |      |      |      |      |      |           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * |        |        |      |      |      |      |      |           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * |        |        |      |      |      |      |                         |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * |        |        |      |      |                                                     |      |      |        |        |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       |      |       |           |      |       |
     *                               ,-------|   /  |       |           |      +   /   +-------.
     *                               | Lower |      |       |           |      |       | Raise |
     *                               `----------------------'           `----------------------'
     */
     [_RAISE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______,          _______,                      _______,          _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______,                   _______, _______, _______,    _______, _______, _______,                   _______, _______, _______, _______  \
    ),


    /* Keymap: ADJUST
     *
     * ,----------------------------------------------------.           ,----------------------------------------------------.
     * | RESET  |BLToggle| Step | Inc  | Dec  | Britg|      |           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+-------------|           |------+------+------+------+------+--------+--------|
     * |        |RGBToggl|Hue I |Sat I |Va I  | SPI  |Plain |           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------|------|           |------|------+------+------+------+--------+--------|
     * |        |        |Hue D |Sat D |Va D  | SPD  |Breath|           |      |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------|------'           `------|------+------+------+------+--------+--------|
     * |        |        |      |      |      |      |                         |      |      |      |      |        |        |
     * |--------+--------+------+------+------+------'                         `------+------+------+------+--------+--------|
     * |        |        |      |      |                                                     |      |      |        |        |
     * `-------------------------------'                                                     `-------------------------------'
     *                                       ,--------------.           ,--------------.
     *                                       |      |       |           |      |       |
     *                               ,-------|   /  |       |           |      +   /   +-------.
     *                               | Lower |      |       |           |      |       | Raise |
     *                               `----------------------'           `----------------------'
     */
     [_ADJUST] = LAYOUT(
          RESET, BL_TOGG, BL_STEP,  BL_INC,  BL_DEC, BL_BRTG,   KC_NO,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
          KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
          KC_NO,   KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_B,                                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,                        KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, \
          KC_NO,   KC_NO,   KC_NO,   KC_NO,                   _______,   KC_NO,   KC_NO,      KC_NO,   KC_NO, _______,                     KC_NO,   KC_NO,   KC_NO,   KC_NO  \
    )
};




// void persistent_default_layer_set(uint16_t default_layer) {
//   eeconfig_update_default_layer(default_layer);
//   default_layer_set(default_layer);
// }


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

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

    case REFORMAT:
        if (record->event.pressed) {
            // when keycode REFORMAT is pressed
            SEND_STRING(SS_LCTL("ke"));
        } else {
            // when keycode REFORMAT is released
        }
        break;

    case COMM:
        if (record->event.pressed) {
            // when keycode REFORMAT is pressed
            SEND_STRING(SS_LCTL("kc"));
        } else {
            // when keycode REFORMAT is released
        }
        break;

    case UNCOMM:
        if (record->event.pressed) {
            // when keycode REFORMAT is pressed
            SEND_STRING(SS_LCTL("ku"));
        } else {
            // when keycode REFORMAT is released
        }
        break;

  }
  return true;
}
