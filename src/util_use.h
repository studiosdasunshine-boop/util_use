/*

    util_use.h

    AUTOR: Rafael N. B. A. Aires
        01/11/2026

*/

#ifndef UTIL_USE_H
#define UTIL_USE_H

#include "Arduino.h"

// Classe Blink
class blink
{
  public:
    blink(int &pin) : _pin(pin) {pinMode(_pin, OUTPUT);}

    void blink_led(int ms);

  private:
    int &_pin;
};
// Classe Fade
class fade
{
  public:
    fade(int &pin) : _pin(pin) {pinMode(_pin, OUTPUT);}

    void fade_led_pwm(int ms);

  private:
    int &_pin;
};

// Classe DistSensor
class DistSensor
{
public:
    DistSensor() {}

    void read_distance(int pinTrig, int pinEcho);
    void print_distance(int pinTrig, int pinEcho);
    long get_distance(int pinTrig, int pinEcho);
};

// Classe principal
class util_use
{
  public:
    util_use(int pin);

    void blink_led(int ms);
    void fade_led_pwm(int ms);

  private:
    int _pin;
    blink _blink;
    fade _fade;
};

#endif