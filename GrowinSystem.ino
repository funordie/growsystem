#include <demo.hpp>
#include <moisture.hpp>
#include <ssd1306.hpp>

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("\nLoop Start\n    ");
    demo_moisture();

    delay(1000);
}
