/*
 * moistre.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: ipaev
 */

#include <moisture.hpp>

#define VAL_PROBE 0         // Analog pin 0

//LOW ADC value mean higher moisture
#define MST_LVL_LO 600
#define MST_LVL_HI 800

#define MST_LED_HI   8
#define MST_LED_LO   10

#define ADC_MAX 1024    /*10 bit ADC*/

typedef enum{
    MST_OK,
    MST_LO,
    MST_HI,
    MST_INV,
}moisture_state;

uint16_t read_moisture() {
    uint16_t val = (uint16_t)analogRead(VAL_PROBE);
    return ADC_MAX - val;
}

void set_moisture_led(moisture_state state) {

    char buffer[255];
    sprintf( buffer, "moisture state:%d\n",state);
    Serial.print(buffer);

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

void check_moisture() {

    uint16_t moisture = read_moisture();

    Serial.println(moisture);

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
