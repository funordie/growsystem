#include <moisture.hpp>
#include <ssd1306.hpp>

Moisture mst;

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

void demo_moisture() {

    mst.Update();
    uint16_t moisture = mst.GetMoisture();

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

void setup() {
    Serial.begin(9600);
}

void loop() {

//    demo_moisture();

    demo_ssd1306();

    delay(5000);
}
