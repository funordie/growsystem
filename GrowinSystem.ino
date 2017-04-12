#include <demo.hpp>
#include <moisture.hpp>
#include <ssd1306.hpp>
#include <dht11.hpp>

Display dsp;

void setup() {
    Serial.begin(9600);

    dsp.begin();
    dsp.clearDisplay();
}

void loop() {
    Serial.println("\nLoop Start\n    ");
    demo_moisture(&dsp);
    demo_dht11(&dsp);

    delay(1000);
}
