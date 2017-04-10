/*
 * moisture.h
 *
 *  Created on: Apr 7, 2017
 *      Author: ipaev
 */

#ifndef MOISTURE_HPP_
#define MOISTURE_HPP_

#include "Arduino.h"

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

class Moisture {
public:
    void Update();
    uint16_t GetMoisture();
    void ControlMoisture();
private:

    uint16_t m_moisture;
    moisture_state m_state;
};

#endif /* MOISTURE_HPP_ */
