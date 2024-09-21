#include <Arduino.h>

const int leftMotorPin1 = 2;
const int leftMotorPin2 = 3;

// test code

void setup() {
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
}

void loop() {
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
  delay(1000);
  digitalWrite(leftMotorPin1, LOW);
  digitalWrite(leftMotorPin2, HIGH);
  delay(1000);
}