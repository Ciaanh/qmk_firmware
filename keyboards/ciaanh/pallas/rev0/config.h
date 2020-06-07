#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0xC1E0
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0100
#define MANUFACTURER    Ciaanh
#define PRODUCT         Pallas
#define DESCRIPTION     Extended Alice

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// wiring of each half
#define MATRIX_ROW_PINS { B7, D5, C7, F1, F0 }
#define MATRIX_COL_PINS { D3, D2, D4, C6, D7, E6, B4, B6, B2, B3, B1, F7, F6, F5, F4 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define tapping term */
#define TAPPING_TERM 120

#ifdef BACKLIGHT_ENABLE
    #define BACKLIGHT_PIN B5
    #define BACKLIGHT_LEVELS 4
#endif

#ifdef RGBLIGHT_ENABLE
    /* ws2812 RGB LED */
    #define RGB_DI_PIN B0
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 24

    #define RGBLIGHT_LED_MAP { 0,  1,  2,  3}
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


// #define USE_I2C
// #define SOFT_SERIAL_PIN D0
// #define SELECT_SOFT_SERIAL_SPEED 1
/*Sets the protocol speed when using serial communication*/
//Speeds:
//0: about 189kbps (Experimental only)
//1: about 137kbps (default)
//2: about 75kbps
//3: about 39kbps
//4: about 26kbps
//5: about 20kbps
