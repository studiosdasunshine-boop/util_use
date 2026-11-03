/*

    util_use DISTANCE example

    AUTOR: Rafael N. B. A. Aires
        03/11/2026

*/
#include <util_use.h>

util_use Sensor(13);
void setup(){
    Serial.begin(9600);
}

void loop() {
    Sensor.read_distance(9, 10);
    Sensor.print_distance(9, 10);
    int distance = Sensor.get_distance(9, 10);
    if (distance < 20) {
        Serial.println("Object detected!");
    } else {
        Serial.println("No object detected.");
    }
    delay(1000);
}