/*

    util_use.cpp

    AUTOR: Rafael N. B. A. Aires
        01/11/2026

*/

#include "Arduino.h"
#include "util_use.h"

util_use::util_use(int pin): _pin(pin), _blink(_pin), _fade(_pin){}

void util_use::blink_led(int ms)
{
  _blink.blink_led(ms);
}

void util_use::fade_led_pwm(int ms)
{
  _fade.fade_led_pwm(ms);
}

void fade::fade_led_pwm(int ms)
{
  for (int i = 0; i < 256; i++)
  {
    analogWrite(_pin, i);
    delay(ms);
  }
  for (int i = 255; i >= 0; i--)
  {
    analogWrite(_pin, i);
    delay(ms);
  }
}

void blink::blink_led(int ms)
{
  digitalWrite(_pin, HIGH);
  delay(ms);
  digitalWrite(_pin, LOW);
  delay(ms);
}

void DistSensor::read_distance(int pinTrig, int pinEcho)
{
    get_distance(pinTrig, pinEcho);
}
void DistSensor::print_distance(int pinTrig, int pinEcho)
{
    long distance = get_distance(pinTrig, pinEcho);

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}
long DistSensor::get_distance(int pinTrig, int pinEcho)
{
    pinMode(pinTrig, OUTPUT);
    pinMode(pinEcho, INPUT);

    digitalWrite(pinTrig, LOW);
    delayMicroseconds(2);

    digitalWrite(pinTrig, HIGH);
    delayMicroseconds(10);

    digitalWrite(pinTrig, LOW);

    long duration = pulseIn(pinEcho, HIGH, 30000UL);

    if (duration == 0) {
        return -1;
    }

    return duration * 0.034 / 2;
}