# STMicroelectronics NUCLEO-F756ZG

## Overview

The STM32 Nucleo-144 board provides an affordable and flexible way for users to try out new concepts and build prototypes by choosing from the various combinations of performance and power consumption features, provided by the STM32 microcontroller. For the compatible boards, the internal or external SMPS significantly reduces power consumption in Run mode. The ST Zio connector, which extends the ARDUINO® Uno V3 connectivity, and the ST morpho headers provide an easy means of expanding the functionality of the Nucleo open development platform with a wide choice of specialized shields.

The STM32 Nucleo-144 board does not require any separate probe as it integrates the ST-LINK debugger/programmer.

The STM32 Nucleo-144 board comes with the STM32 comprehensive free software libraries and examples available with the STM32Cube MCU Package.

## Board pinout

![Pins legend](9723438345ef395ca77763235ed6b86ee4b49b46.png)

### Zio and Arduino-compatible headers

![CN8/CN9](b44b853178989fe90b1185eb301bc6177eb89ea8.png)
![CN7/CN10](2ed3c781dc420f9a2318e2405fae611b1a3a0536.png)

### CN11 CN12 headers

![CN11](c6212ceb310bee73ee2a2a542e6b71815ae2a2f4.png)
![CN12](aa5a98a41fd5a73a9b62431757a35b8f4aa57058.png)

## Schematics

- [NUCLEO-F756ZG board schematic](https://www.st.com/resource/en/schematic_pack/nucleo_144pins_sch.zip)

## CMSIS-Drivers

This board support pack contains a CMSIS-Driver for the [VIO](https://arm-software.github.io/CMSIS_6/latest/Driver/group__gpio__interface__gr.html) interface. This is a virtual I/O abstraction for peripherals that are typically used in example projects. The **Blinky** example uses this interface to create a blinking light with the USER LED mounted on the board that can be controlled by the **Button USER**.

Virtual Resource  | Variable       | Physical Resource on NUCLEO-F756ZG             |
:-----------------|:---------------|:-----------------------------------------------|
vioBUTTON0        | vioSignalIn.0  | GPIO C.13: Button USER                         |
vioLED0           | vioSignalOut.0 | GPIO B.14: LD3 RED                             |
vioLED1           | vioSignalOut.1 | GPIO B.0:  LD1 GREEN                           |
vioLED2           | vioSignalOut.2 | GPIO B.7:  LD2 BLUE                            |

Refer to the [schematics](#schematics) for board connection information.

## ST-LINK driver installation and firmware upgrade

1. Download the latest [ST-LINK driver](https://www.st.com/en/development-tools/stsw-link009.html) (Windows only).
2. Extract the archive and run `dpinst_amd64.exe`. Follow the displayed instructions.
3. Download the latest [ST-LINK firmware upgrade](https://www.st.com/en/development-tools/stsw-link007.html) (Linux/Mac OS/Windows).
4. Extract the archive and run the STLinkUpgrade application.
5. Connect the board to your PC using a USB cable and wait until the USB enumeration is completed.
6. In the **ST-Link Upgrade** program, press the **Device Connect** button.
7. The current ST-LINK version should be displayed.
8. Press the **Yes >>>>** button to start the firmware upgrade process.