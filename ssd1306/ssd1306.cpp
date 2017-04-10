/*
 * ssd1306.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: ipaev
 */

#include <ssd1306.hpp>

Display::Display() : Adafruit_SSD1306(OLED_RESET) {
}

void Display::ShowValue(uint16_t val) {
    clearDisplay();
    setTextSize(1);
    setTextColor(WHITE);
    setCursor(0,0);

    char str[20];
    sprintf( str, "moisture:%u\n", val);

    println(str);
    display();
}
void Display::Init() {
    // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
    begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3D (for the 128x64)
    // init done
}
void Display::Demo() {
    Serial.print("demo_ssd1306 start\n");
//    display.dim(0);
//
//    // Show image buffer on the display hardware.
//    // Since the buffer is intialized with an Adafruit splashscreen
//    // internally, this will display the splashscreen.
    display();
//    delay(2000);
//
//    // Clear the buffer.
//    display.clearDisplay();
//
//    // draw a single pixel
//    display.drawPixel(20, 20, WHITE);
    Serial.print("demo_ssd1306 return\n");
}
