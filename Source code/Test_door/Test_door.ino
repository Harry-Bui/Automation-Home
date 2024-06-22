#include <ESP32Servo.h>

Servo servo1;
int pin = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);

  servo1.attach(pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo1.write(0);
  delay(2000);
  servo1.write(105);
  delay(2000);
}
