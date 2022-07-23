# 1 "/tmp/tmpopsa2eop"
#include <Arduino.h>
# 1 "/home/walter/devel/WLED/wled00/wled00.ino"
# 13 "/home/walter/devel/WLED/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "/home/walter/devel/WLED/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}