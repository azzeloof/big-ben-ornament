# Big Ben Ornament
 A PCB ornament/desk toy complete with an E-Paper display!

## Hardware
Okay, so this is a bit overkill for an ornament. It uses an ATmega328P to coordinate a Real-Time Clock, some RAM, and the driver circuitry for an E-Paper display. The end result is a pretty damn good looking (and accurate) clock. 
There are several problems- I never connected AVCC on the ATmega, the RESET pin was connected incorrectly, and a transistor in the EPD driver circuit was laid out with the incorrect footprint. My brother helped me resolve all this with some clever bodge, but it would probably be best to actually design the boards properly for future versions.

## Firmware
The clock's firmware is just an Arduino sketch. It requires the Waveshare EPD library, as well as Adafruit's RTClib. The clock face is a bitmap stored in memory, and the hands are dynamically drawn from lines and circles. 
To program the chips, I flashed the arduino bootloader onto the chip and used the ["breadboard Arduino" board file](https://www.arduino.cc/en/Tutorial/BuiltInExamples/ArduinoToBreadboard). I programmed the board with SparkFun's [Pocket AVR Programmer](https://www.sparkfun.com/products/9825), but you should be able to use any programmer compatibe with the ATmega328P (or just use an Arduino Uno!).

## Version History
Release 1.0 will represent the bus ornaments as we initially made and distributed them. Once it is released, maybe we'll improve some stuff (but any hardware improvements will be untested).

## Warning
Electricity creates heat, and excess heat around something like a Christmas tree can cause big problems. Use at your own risk! The designs here have only been minimally tested and are absolutley not guarenteed to be safe.
