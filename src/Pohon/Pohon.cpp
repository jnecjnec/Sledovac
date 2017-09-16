#include <Arduino.h>
#include <Pohon\Pohon.h>

Pohon::Pohon(const byte pPin1, const byte pPin2, const byte pPin3,
             const byte pPin4) {
  leftMotor = new Motor(pPin1, pPin2);
  rightMotor = new Motor(pPin3, pPin4);
  Stop(); // nepotrebne vola se v konstruktoru motoru
}

void Pohon::Stop() {
  leftMotor->stop();
  rightMotor->stop();
}
void Pohon::Vpred() {
  leftMotor->forward();
  rightMotor->forward();
}
void Pohon::Vzad() {
  leftMotor->backward();
  rightMotor->backward();
}
void Pohon::VpravoVP() {
  leftMotor->forward();
  rightMotor->stop();
}
void Pohon::VlevoVP() {
  leftMotor->stop();
  rightMotor->forward();
}
void Pohon::VpravoVZ() {
  leftMotor->backward();
  rightMotor->stop();
}
void Pohon::VlevoVZ() {
  leftMotor->stop();
  rightMotor->backward();
}
