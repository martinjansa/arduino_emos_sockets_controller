/*
  Sends a power on and power off command to remote controlled sockets EMOS P0065 via 433.92 MHz radio
  
  Based on the SendDemo example from https://github.com/sui77/rc-switch/.
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);

  Serial.println("Configuring 433 MHz transmission.");
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(10);
  
  // Optional set protocol (default is 1, will work for most outlets)
  mySwitch.setProtocol(8);

  // Optional set pulse length.
//  mySwitch.setPulseLength(520);
  
  // Optional set number of transmission repetitions.
  mySwitch.setRepeatTransmit(3);
  
  Serial.println("433 MHz transmission configured.");
}

void loop() {

  /* Same switch as above, but using binary code */
  Serial.println("Sending A on");
  mySwitch.send("001101101010010001101100");
  delay(10000);  
  Serial.println("Sending A off");
  mySwitch.send("001111011001011101111100");
  delay(10000);
}

