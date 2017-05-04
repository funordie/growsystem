#include <demo.hpp>
#include <moisture.hpp>
#include <ssd1306.hpp>
#include <dht11.hpp>

Display dsp;

#define DEMO

void setup() {
    Serial.begin(9600);

    Serial.println("\nSetup Start\n    ");

    dsp.begin();
    dsp.clearDisplay();

#ifdef DEMO
    demo_setup();
#else
#endif
}

void loop() {
    Serial.println("\nLoop Start\n    ");

#ifdef DEMO
    demo_moisture(&dsp);
    demo_dht11(&dsp);
#else
#endif
    delay(10*1000UL);
}
