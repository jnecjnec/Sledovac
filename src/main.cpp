#include <Arduino.h>
#include <NewPing\NewPing.h>
#include <Pohon\Pohon.h>

NewPing frontRadar(7, 6, 50); // pin1, pin2, max delka
Pohon pohon(8, 9, 10, 11);

void setup() {
  // Serial.begin(9600); // Open serial monitor at 115200 baud to see ping
  // results.
}

void loop() {
  int aDistance = frontRadar.ping_cm();
  if ((aDistance < 5) && (aDistance > 0)) {
    pohon.Stop();
  } else {
    pohon.Vpred();
  }
  /*Serial.print("Ping: ");
  Serial.print(aDistance); // Send ping, get distance in cm and print
  Serial.println("cm");*/
  delay(50);
}
