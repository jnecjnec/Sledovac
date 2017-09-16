#include <Arduino.h>
#include <Motor\Motor.h>

class Pohon {
public:
  Pohon(const byte pPin1, const byte pPin2, const byte pPin3, const byte pPin4);
  void Stop();
  void Vpred();
  void Vzad();
  void VpravoVP();
  void VlevoVP();
  void VpravoVZ();
  void VlevoVZ();

private:
  Motor *leftMotor;
  Motor *rightMotor;
};
