\# util\_use



An Arduino library designed to simplify common tasks involving LEDs and ultrasonic distance sensors.



\## Features



\* Blink LEDs with a simple function.

\* Control LED brightness using PWM.

\* Measure distances using ultrasonic sensors.

\* Print distance measurements to the Serial Monitor.

\* Easy-to-use functions for beginners.



\## Installation



\### Arduino Library Manager



Once the library is officially accepted:



1\. Open Arduino IDE.

2\. Navigate to \*\*Sketch > Include Library > Manage Libraries\*\*.

3\. Search for `util\_use`.

4\. Click \*\*Install\*\*.



\### Manual Installation



1\. Download the repository as a ZIP file.

2\. Open Arduino IDE.

3\. Navigate to \*\*Sketch > Include Library > Add .ZIP Library\*\*.

4\. Select the downloaded ZIP file.



\## Usage



\### Blink an LED



```cpp

\#include <util\_use.h>



util\_use led(13);



void setup() {

}



void loop() {

&#x20;   led.blink\_led(500);

}

```



\### Fade an LED



```cpp

\#include <util\_use.h>



util\_use led(9);



void setup() {

}



void loop() {

&#x20;   led.fade\_led\_pwm(10);

}

```



\### Ultrasonic Distance Sensor



```cpp

\#include <util\_use.h>



DistSensor sensor;



void setup() {

&#x20;   Serial.begin(9600);

}



void loop() {

&#x20;   long distance = sensor.get\_distance(9, 10);



&#x20;   Serial.print("Distance: ");

&#x20;   Serial.print(distance);

&#x20;   Serial.println(" cm");



&#x20;   delay(500);

}

```



\## Hardware



\* Arduino-compatible board

\* LEDs

\* Resistors

\* HC-SR04 ultrasonic sensor



\## Author



\*\*Rafael N. B. A. Aires\*\*



\## License



See the LICENSE file for details.



