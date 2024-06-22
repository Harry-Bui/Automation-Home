#include <ESP32Servo.h>

Servo servo_rao;
Servo servo_cua;

int servo = 16;
int servo1 = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(servo, OUTPUT);
  pinMode(servo1, OUTPUT);

  servo_rao.attach(servo);
  servo_cua.attach(servo1);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo_rao.write(0);
  servo_cua.write(0);
  Serial.print("Goc 1: ");
  Serial.println(servo_rao.read());
  Serial.print("Goc 2: ");
  Serial.println(servo_cua.read());
  delay(2000);
  servo_rao.write(90);
  servo_cua.write(90);
  Serial.print("Goc 1: ");
  Serial.println(servo_rao.read());
  Serial.print("Goc 2: ");
  Serial.println(servo_cua.read());
  delay(2000);
}
