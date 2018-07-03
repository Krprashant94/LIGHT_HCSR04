# LIGHT_HCSR04
A light wight library for Arduino HCSR-04 Module

## Installation

Download this project and upload the .zip file in Arduino IDE
### Steps
1. Download a ZIP file. The ZIP button at GitHub will always get the latest version, but you may prefer one of the tagged versions.
2. Unpack the zip file into your sketchbook library directory (~/sketchbook/libraries on Linux).

## API Reference

API calling
---
LIGHT_HCSR04 hcsr04(int trig, int echo); 
initialize the API with trigger pin and echo pin in Arduino board by default it is 12 and 13

Method
---
long duration() : Returns the time taken by sound to receive back in microseconds
int distance() : Returns the distance of obstacle in cm

## Example
```
#include <LIGHT_HCSR04.h>
LIGHT_HCSR04 hcsr04(12, 13);
void setup() {
  hcsr04.begin();
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  Serial.println(hcsr04.distance());
}
```
