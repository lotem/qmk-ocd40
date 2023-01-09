# OCD40

A planck-like keyboard compatible with QMK firmware.

https://github.com/80Ultraman/OCD40_Keyboard

Make example for this keyboard (after setting up your build environment):

    cd qmk_firmware
    qmk clone lotem/qmk-ocd40 keyboards/ocd40
    qmk compile -kb ocd40 -km default

Build keyboard firmware with [VIAL](https://github.com/vial-kb/vial-qmk) support:

    cd vial-qmk
    qmk clone lotem/qmk-ocd40 keyboards/ocd40
    qmk compile -kb ocd40 -km vial

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
