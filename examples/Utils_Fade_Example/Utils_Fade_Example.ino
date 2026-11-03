/*

    util_use FADE example

    AUTOR: Rafael N. B. A. Aires
        01/11/2026

*/
#include <util_use.h>

util_use led(13);

void setup(){
  
}

void loop() {
  led.fade_led_pwm(140);
}
