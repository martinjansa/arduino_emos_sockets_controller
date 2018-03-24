# arduino_emos_sockets_controller
Arduino controls EMOS sockets via 433 MHz radio communication.

The goal of this project is to controll the lights connected into the 240V sockets from the wire powered by a light switch mounted on the wall. The switch would then control the power of an arduino module, which would send on and off commands to the 433MHz controlled EMOS power sockets.

Requirements:
* When the Arduino is powered on (switch was turned on), it turns on EMOS sockets A and B
* When the Arduino detects the power s being turned off, it turns off both EMOS sockets.

HW:
* Arduino Nano v3.0
* 433 MHz transmitter module (http://www.dx.com/p/rf-transmitter-receiver-module-433mhz-wireless-link-kit-w-spring-antennas-for-arduino-399919#.WrabZejwaUk)
* EMOS Remote-Controller Sockets type P0065 (https://en.emos.cz/1905120001-remote-control-sockets)

Implementation:
* Intention is to use the remote_switch library for the 433 MHz communication
* Plan is to detect the power availability even before the 5V sourse on one of the Arduino pins using some reduction to be able to detect power being turned off.