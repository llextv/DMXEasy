#pragma once

#include <Arduino.h>

class DMXOutput
{
public:
  void begin();
  void update();
};

extern DMXOutput dmxOutput;