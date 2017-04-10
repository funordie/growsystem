/*
 * moistre.cpp
 *
 *  Created on: Apr 7, 2017
 *      Author: ipaev
 */

#include <moisture.hpp>

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
