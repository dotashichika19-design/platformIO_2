#include <Arduino.h>

void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.println("Hello PlatformIO + GitHub!");
    delay(1000);
}
