#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

int pos = 0;          // current sweep angle
int direction = 1;     // 1 = increasing, -1 = decreasing
unsigned long startTime;
bool sweepDone = false;

void setup() {
  servo1.attach(5);
  servo2.attach(10);
  servo3.attach(3);
  servo4.attach(11);

  startTime = millis();
}

void loop() {
  if (!sweepDone) {
    // Check if 2 seconds have passed
    if (millis() - startTime < 2000) {
      // Sweep motion
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);

      pos += direction * 2;      // step size, adjust speed here
      if (pos >= 180) {
        pos = 180;
        direction = -1;
      } else if (pos <= 0) {
        pos = 0;
        direction = 1;
      }

      delay(15);  // small delay just to control sweep speed
    } else {
      sweepDone = true;
    }
  } else {
    // Hold at 90 degrees
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
  }
}