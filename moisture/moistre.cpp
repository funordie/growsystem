/*
 * moistre.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: ipaev
 */

#include <moisture.hpp>

moisture_str_type moist_arr[] = {
        {MST_OK, "Moisture Ok"},
        {MST_LO, "Moisture Low"},
        {MST_HI, "Moisture Hi"},
};

String get_moisture_string(moisture_state state) {
    for(uint32_t i = 0; i < sizeof(moist_arr)/sizeof(moisture_str_type); i++) {
        if(moist_arr[i].idx == state) return moist_arr[i].str;
    }
    return "Moisture Invalid";
}

uint16_t Moisture::GetMoisture() {
    return m_moisture;
}

void Moisture::Update() {
    m_moisture = (uint16_t)analogRead(VAL_PROBE);
    m_moisture = ADC_MAX - m_moisture;
}

void Moisture::ControlMoisture() {
    //TODO: add control
}
