/*
 * demo.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: ipaev
 */

#include <demo.hpp>
#include <moisture.hpp>
#include <ssd1306.hpp>

void set_moisture_led(moisture_state state) {
    Serial.println(get_moisture_string(state));

    if(state == MST_OK) {
        digitalWrite(MST_LED_HI, 0);
        digitalWrite(MST_LED_LO, 0);
    }
    else if(state == MST_LO) {
        digitalWrite(MST_LED_HI, 0);
        digitalWrite(MST_LED_LO, 1);
    }
    else if(state == MST_HI) {
        digitalWrite(MST_LED_HI, 1);
        digitalWrite(MST_LED_LO, 0);
    }
    else {
        //invalid state
        digitalWrite(MST_LED_HI, 1);
        digitalWrite(MST_LED_LO, 1);
    }
}
Moisture mst;
Display dsp;
void demo_moisture() {

    mst.Update();
    uint16_t moisture = mst.GetMoisture();

#if 1
    dsp.Init();
    dsp.ShowValue(moisture);
#else
    dsp.Init();
    dsp.Demo();
#endif
    char str[20];
    sprintf( str, "moisture:%u\n", moisture);
    Serial.print(str);

    if(moisture > MST_LVL_LO && moisture < MST_LVL_HI) {
        //moisture OK
        set_moisture_led(MST_OK);
    } else if(moisture < MST_LVL_LO){
        set_moisture_led(MST_LO);
    }
    else {
        set_moisture_led(MST_HI);
    }
}



