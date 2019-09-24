// include the SPI library
#include <SPI.h>
// include library for power switchers
#include <AmperkaFET.h>
// name pin for chipselect
#define PIN_CS 8

// initialize the library instance with chipselect
FET mosfet(PIN_CS);

void setup() {
  // start the power switches
  mosfet.begin();
}

void loop() {
  for (int i = 0; i < 8; i++) {
    // turn on every key in rotation on board
    mosfet.digitalWrite(i, HIGH);
    // wait for 500 ms
    delay(500);
  }
  // turn off all keys on board
  mosfet.digitalWrite(ALL, LOW);
  delay(500);
}
