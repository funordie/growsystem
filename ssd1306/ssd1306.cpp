/*
 * ssd1306.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: ipaev
 */

#include <ssd1306.hpp>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);


#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2


#define LOGO16_GLCD_HEIGHT 16
#define LOGO16_GLCD_WIDTH  16
static const unsigned char PROGMEM logo16_glcd_bmp[] =
{ B00000000, B11000000,
  B00000001, B11000000,
  B00000001, B11000000,
  B00000011, B11100000,
  B11110011, B11100000,
  B11111110, B11111000,
  B01111110, B11111111,
  B00110011, B10011111,
  B00011111, B11111100,
  B00001101, B01110000,
  B00011011, B10100000,
  B00111111, B11100000,
  B00111111, B11110000,
  B01111100, B11110000,
  B01110000, B01110000,
  B00000000, B00110000 };

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

//class Display {
//public:
//
//private:
//    Adafruit_SSD1306 m_display;
//};
void demo_ssd1306() {
    Serial.print("demo_ssd1306 start\n");
//    display.dim(0);

//    // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
//    // init done
//
//    // Show image buffer on the display hardware.
//    // Since the buffer is intialized with an Adafruit splashscreen
//    // internally, this will display the splashscreen.
    display.display();
//    delay(2000);
//
//    // Clear the buffer.
//    display.clearDisplay();
//
//    // draw a single pixel
//    display.drawPixel(20, 20, WHITE);
    Serial.print("demo_ssd1306 return\n");
}
