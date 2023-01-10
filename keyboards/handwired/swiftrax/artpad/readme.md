# ArtPad

*A short description of the keyboard/project*

* Keyboard Maintainer: [Swiftrax](https://github.com/swiftrax)
* Hardware Supported: ArtPad PCB
* Hardware Availability: *Links to where you can find this hardware*


Make example for this keyboard (after setting up your build environment):

    make handwired/swiftrax/artpad:default

Flashing example for this keyboard by `picotool`:

    make handwired/swiftrax/artpad:default:flash

Convert firmware into uf2 format:

    make handwired/swiftrax/artpad:default:uf2


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix and plug in the keyboard
* **Physical reset pads**: Briefly short the pads on the back of the PCB 
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
