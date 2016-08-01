/*
This sketch tests if the sketch folder il fully copied into the tmp folder,
so it allows to include files contained in subfolders.

See: https://github.com/arduino/Arduino/issues/5186
*/

#include "test/test123.h"

void setup() {
    Serial.begin(9600);
    Serial.print(testvar);
}

void loop() {
}
