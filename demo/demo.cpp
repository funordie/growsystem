/*
 * demo.cpp
 *
 *  Created on: Apr 10, 2017
 *      Author: ipaev
 */

#include <demo.hpp>

Moisture mst;

void set_moisture_led(const uint16_t moisture) {

    if(moisture > MST_LVL_LO && moisture < MST_LVL_HI) {
        //moisture OK
        set_moisture_led(MST_OK);
    } else if(moisture < MST_LVL_LO){
        set_moisture_led(MST_LO);
    }
    else {
        set_moisture_led(MST_HI);
    }

    moisture_state state;
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

void demo_moisture(Display * dsp) {

    mst.Update();
    uint16_t moisture = mst.GetMoisture();

    char str[20];
    sprintf( str, "moisture:%u\n", moisture);
    Serial.print(str);
    dsp->PrintInLine(0, 1, str);

    set_moisture_led(moisture);
}

#define DHT11_PIN 11
void demo_dht11(Display *dsp){

    dht11 dht;
    int res = dht.read(DHT11_PIN);
    if(res == DHTLIB_OK) {
        //process read data
        char str[20];
        sprintf( str, "humidity:%u\n", dht.GetHumidity());
        Serial.print(str);
        dsp->PrintInLine(1, 1, str);

        sprintf( str, "temperature:%u\n", dht.GetTemperature());
        Serial.print(str);
        dsp->PrintInLine(2, 1, str);
    }
    else {
        char str[20];
        sprintf( str, "dht11 error:%u\n", res);
        Serial.print(str);
    }
}


