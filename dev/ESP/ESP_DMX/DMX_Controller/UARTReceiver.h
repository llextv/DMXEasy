#pragma once

#include <Arduino.h>

class UARTReceiver
{
public:
  void begin();
  void update();

private:
  String buffer;

  void parseLine(String line);
};

extern UARTReceiver uartReceiver;