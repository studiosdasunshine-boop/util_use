/*

    util_use DISTANCE example

    AUTOR: Rafael N. B. A. Aires
        03/11/2026

*/
#include <util_use.h>

// Criando o sensor
DistSensor sensor;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    long distancia = sensor.get_distance(9, 10);

    if (distancia >= 0)
    {
        Serial.print("Distancia: ");
        Serial.print(distancia);
        Serial.println(" cm");
    }
    else
    {
        Serial.println("Nenhum objeto detectado!");
    }

    delay(500);
}
