#include <ESP32Servo.h>

Servo base;
const int BASE_PIN = 4;  // change to your servo pin

void setup() {
  base.attach(BASE_PIN);
}

void loop() {
  for (int a = 0; a <= 180; a += 2) { base.write(a); delay(15); }
  for (int a = 180; a >= 0; a -= 2) { base.write(a); delay(15); }
}
