#include "Arduino.h"

#define LED 13

void setup() {
	pinMode(LED, OUTPUT);
}

void loop() {
	digitalWrite(LED, HIGH);
	delay(333);
	digitalWrite(LED, LOW);
	delay(333);
}
