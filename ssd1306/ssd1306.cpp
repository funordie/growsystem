/*
 * ssd1306.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: ipaev
 */

#include <ssd1306.hpp>

Display::Display() : Adafruit_SSD1306(OLED_RESET) {
}

void Display::PrintInLine(uint8_t line, uint8_t size, char * str) {
    setTextSize(size);
    setTextColor(WHITE);
    setCursor(0,8*size*line);

    //clear line
    fillRect(0, 8*line, 128, 8, 0x00);
    //print in line
    println(str);
    display();
}
