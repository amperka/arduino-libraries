#ifndef AMPERKA_FET_H_
#define AMPERKA_FET_H_

#include <Arduino.h>
#include <SPI.h>

#define ALL 255

class FET {
public:
  FET(uint8_t pinCS, uint8_t qtyDevice = 1);
  ~FET();
  void begin();
  void digitalWrite(uint8_t pin, bool val);
  void digitalWrite(uint8_t device, uint8_t pin, bool val);

private:
  void _sendData();
  uint8_t _pinCS;
  uint8_t _qtyDevice;
  uint8_t _mask;
  uint8_t *_massValuePins;
};
#endif // AMPERKA_FET_H_
