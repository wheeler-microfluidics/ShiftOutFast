#ifndef ___SHIFT_OUT_FAST__H___
#define ___SHIFT_OUT_FAST__H___

#include <stdint.h>
#include <Arduino.h>

// Adapted from here: https://forum.arduino.cc/index.php?topic=67369.msg494924#msg494924

void shiftOutFast(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val);

#endif  // #ifndef ___SHIFT_OUT_FAST__H___
