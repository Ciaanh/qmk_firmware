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

#ifdef RGBLIGHT_ENABLE
// Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

#ifdef OLED_ENABLE

bool oled_task_kb(void) {
    if (!oled_task_user()) {
        return false;
    }

    // 21 characters per line
    // 16 cols / 4 rows

    oled_write_P(PSTR("    Kanagawa rev 2.1v  "), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("_\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("[Lower]\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("[Raise]\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("[Adjust]\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAPLOCK") : PSTR("       "), false);

#    if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
    static char temp[20] = {0};
    snprintf(temp, sizeof(temp) + 1, "M:%3dH:%3dS:%3dV:%3d", rgb_matrix_config.mode, rgb_matrix_config.hsv.h, rgb_matrix_config.hsv.s, rgb_matrix_config.hsv.v);
    oled_write_P(temp, false);
#    endif

    oled_advance_page(true);

    return true;
}

#endif