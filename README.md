# MeArm - custom driver

### About:

This project contains source code of an Arduino-based controller for a custom-built MeArm robotic arm.


### Requirements:

Hardware requirements:

- [MeArm robotic arm](https://hackaday.io/project/181-mearm-your-robot "project site") - I've built my own custom one based on [these schematics](https://github.com/mimeindustries/MeArm) - you can do it as well, or you can buy one from [Mime Industries](https://shop.mime.co.uk/collections/mearm),
- Arduino Uno.

Software requirements:

- CMake,
- GNU Make,
- AVR-GCC,
- avrdude.


### How to build it:

Clone repository:

```
git clone https://github.com/nowakpt/mearm-controller.git
cd mearm-controller
```

Build:

```
mkdir build
cd build
cmake ..
make
```

Flash .hex file to Arduino board:

```
make flash
```


### Features:

This is the very beginning, so nothing more than a blinky LED.

To be implemented:

- communication protocol using UART,
- forward kinematics,
- calibration algorithm for servos,
- inverse kinematics,
- extended UI - LCD display, keyboard, etc.,
- movement automation,
- ...

