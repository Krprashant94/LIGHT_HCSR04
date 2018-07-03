#include "LIGHT_HCSR04.h"


LIGHT_HCSR04 hcsr04(12, 13);


void setup() {
  hcsr04.begin();
  Serial.begin(9600); // Starts the serial communication
}

void loop() {
  Serial.println(hcsr04.distance());
}
