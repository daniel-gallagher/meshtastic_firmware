#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// The default Wire will be mapped to PMU and RTC
static const uint8_t SDA = 42;
static const uint8_t SCL = 41;

// Default SPI will be mapped to Radio
static const uint8_t MISO = 37;
static const uint8_t SCK = 36;
static const uint8_t MOSI = 35;
static const uint8_t SS = 6;

#endif /* Pins_Arduino_h */
