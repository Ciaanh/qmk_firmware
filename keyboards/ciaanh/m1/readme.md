# monsgeek m1 keyboard

A customizable 75% encoder keyboard.

* Keyboard Maintainer: [jonylee@hfd](https://github.com/jonylee1986)
* Hardware Supported: m1
* Hardware Availability: [monsgeek](https://www.monsgeek.com/)

Make example for this keyboard (after setting up your build environment):

    make monsgeek/m1:default

Flashing example for this keyboard:

    make monsgeek/m1:default:flash
    
**Reset Key**: Hold down the key located at *K00*, which programmed as *Esc* while plugging in the keyboard.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


`qmk compile -kb ciaanh/m1 -km default`

## RGB LEDs (replacement part)

| Item | Value |
|------|-------|
| LED type | 4-pin RGB SMD LED, **common anode** |
| Mounting | South-facing, **reverse-mount** (LED body sits in the PCB cut-out under the switch and shines up through the hole) |
| Package | 3528 reverse-mount body on a ~6.0 x 2.8 mm lead frame, sold as "6028 reverse mount RGB" or "3528 reverse mount RGB" (measure the footprint on the board before ordering) |
| Driver | 2x Sonix SNLED27351 matrix drivers on I2C (addresses 0x74 / GND and 0x77 / VDDIO), see `config.h` and `m1.c` |
| Count | 84 per-key LEDs + 22 side LEDs (11 left, 11 right) |

How this was determined: `m1.c` wires every LED as one CA (anode, shared) line plus three CB (cathode) lines
for R, G and B. The SNLED27351 only drives LEDs this way, so any replacement must be **common anode**;
a common-cathode or addressable (WS2812 / SK6812) LED will not work. The south-facing reverse-mount
position comes from MonsGeek's product description. The exact vendor part number is not published by
MonsGeek, so match the package and pinout of a working LED on the same board.

When soldering a replacement, check the pin 1 / anode mark against a neighbouring LED: a rotated LED
will either stay dark or light the wrong colours.

The firmware does not set `SNLED27351_CURRENT_TUNE`, so the driver runs every channel at the maximum
current tune value (0xFF). A commented-out, lower setting is available in `config.h`.
