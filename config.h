#pragma once

/* OLED is on SDA=GP6 / SCL=GP7 (D4/D5 on the XIAO silkscreen) */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

/* Your J1 connector is a 0.91" SSD1306, which is 128x32, not the 128x64 default */
#define OLED_DISPLAY_128X32

/* Most rotary encoders detent every 4 pulses - lower this to 2 if turning
   one detent skips two steps, or raise it if one detent does nothing */
#define ENCODER_RESOLUTION 4

/* Debounce time in ms - raise if you get double presses on the tactile switches */
#define DEBOUNCE 5
