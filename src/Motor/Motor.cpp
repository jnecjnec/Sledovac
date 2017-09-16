#include <Arduino.h>
#include <Motor\Motor.h>

Motor::Motor(const byte pPin1, const byte pPin2) {
  fPin1 = pPin1;
  fPin2 = pPin2;
  initialize();
  stop();
}

void Motor::forward() {
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, HIGH);
}

void Motor::stop() {
  digitalWrite(fPin1, LOW);
  digitalWrite(fPin2, LOW);
}

void Motor::backward() {
  digitalWrite(fPin1, HIGH);
  digitalWrite(fPin2, LOW);
}

void Motor::initialize() {
  pinMode(fPin1, OUTPUT);
  pinMode(fPin2, OUTPUT);
}
