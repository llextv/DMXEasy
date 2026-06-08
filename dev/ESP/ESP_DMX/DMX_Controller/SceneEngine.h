#pragma once

#include <Arduino.h>

class SceneEngine
{
public:
  void begin();
  void update();

private:
  uint8_t activeScene = 0;
};

extern SceneEngine sceneEngine;