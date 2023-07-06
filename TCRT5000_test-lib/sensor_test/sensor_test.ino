#include "sensor.h"
void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Kivi();
}
