#pragma once

#include <Arduino.h>

class DMXEngine
{
public:
  void begin();
  void update();

  uint8_t universe1[512];
  uint8_t universe2[512];

private:
  void buildUniverse();
};

extern DMXEngine dmx;