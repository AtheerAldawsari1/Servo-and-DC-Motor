#include <Servo.h>

Servo servo1;
int pos = 0;

void setup() {
  servo1.attach(13);
}

void loop() {
  for (pos = 0; pos <= 180; pos++) {
    servo1.write(pos);
    delay(15);
  }

  delay(1000);

  for (pos = 180; pos >= 0; pos--) {
    servo1.write(pos);
    delay(15);
  }

  delay(1000);
}