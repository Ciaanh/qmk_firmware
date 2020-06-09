BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no
OLED_DRIVER_ENABLE = yes


SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/mode_icon_reader.c \
        ./lib/host_led_state_reader.c \
