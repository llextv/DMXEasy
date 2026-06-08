#pragma once

#include <Arduino.h>

struct ControllerState
{
  bool buttons[64]; //64 buttons
  uint8_t faders[6]; //6 faders
};

extern ControllerState controller;