// https://www.adafruit.com/product/5714
// https://learn.adafruit.com/feather-rp2040-rfm95

#define ARDUINO_ARCH_AVR

#define I2C_SDA 2
#define I2C_SCL 3

#define BUTTON_PIN 25
#define ALT_BUTTON_PIN 7

#define LED_PIN 13

#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA 4
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800)

#define LED_POWER PIN_LED

#define BATTERY_PIN 29
// ratio of voltage divider = 3.0 (R1=20k, R2=10k)
#define ADC_MULTIPLIER 3.0
#define BATTERY_SENSE_RESOLUTION_BITS 12

#define USE_RF95 // RFM95/SX127x

#define LORA_SCK 14
#define LORA_MISO 8
#define LORA_MOSI 15
#define LORA_CS 16
#define LORA_RESET 17

#define LORA_DIO0 21
#define LORA_DIO1 22
#define LORA_DIO2 23
#define LORA_DIO3 19
#define LORA_DIO4 20
#define LORA_DIO5 18