# dinopad

![dinopad](../assets/2918fca6-d229-4683-bc0a-77e65e2c99f8.PNG)

Dinopad, is a small 16 key macropad, which features a diode matrix and a rotary encoder. The PCB is littered with dinosaurs, that's why it's called Dinopad.

* Keyboard Maintainer: [Sheep26](https://github.com/Sheep26)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make dinopad:default

Flashing example for this keyboard:

    make dinopad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
