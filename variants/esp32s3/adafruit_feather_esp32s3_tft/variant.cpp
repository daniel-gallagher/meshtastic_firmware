#include "variant.h"

/**
 * Enable power to peripherals that require explicit power control.
 * This function is called early during device initialization.
 */
void initVariant()
{
    // Enable power to NeoPixel
#ifdef NEOPIXEL_POWER
    pinMode(NEOPIXEL_POWER, OUTPUT);
    digitalWrite(NEOPIXEL_POWER, HIGH);
#endif

    // Enable power to TFT display via I2C power pin
    // This is used for powering the I2C pullup resistors and other TFT-related components
#ifdef TFT_I2C_POWER
    pinMode(TFT_I2C_POWER, OUTPUT);
    digitalWrite(TFT_I2C_POWER, HIGH);
#endif
}
