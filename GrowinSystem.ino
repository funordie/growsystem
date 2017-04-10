#include <moisture.hpp>

void setup() {
    Serial.begin(9600);
}

void loop() {

    check_moisture();

    delay(1000);
}
