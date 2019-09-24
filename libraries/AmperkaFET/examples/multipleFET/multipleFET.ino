// include the SPI library
#include <SPI.h>
// include library for power switchers
#include <AmperkaFET.h>
// name pin for chipselect
#define PIN_CS 8

// initialize the library instance with arguments
// 1. set chipselect pin on the SPI bus
// 2. how many modules power switches connected on chain
FET mosfet(PIN_CS, 3);

void setup() {
  // start the power switches
  mosfet.begin();
}

void loop() {
  // turn on second key on zero board
  mosfet.digitalWrite(0, 2, HIGH);
  // wait for 500 ms
  delay(500);
  // turn on five key on first board
  mosfet.digitalWrite(1, 5, HIGH);
  // wait for 500 ms
  delay(500);
  // turn on all keys on second board
  mosfet.digitalWrite(2, ALL, HIGH);
  // wait for 500 ms
  delay(500);
  // turn all keys on all board
  mosfet.digitalWrite(ALL, ALL, LOW);
  // wait for 500 ms
  delay(500);
}
