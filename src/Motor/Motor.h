#include <Arduino.h>

class Motor {
public:
  // konstruktor objektu
  Motor(const byte pPin1, const byte pPin2);

  void forward();
  void stop();
  void backward();

private:
  byte fPin1;
  byte fPin2;

  void initialize();
};
