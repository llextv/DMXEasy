#pragma once

#include <Arduino.h>

struct Config
{
  String wifiSSID;
  String wifiPassword;

  uint16_t universe1_id;
  uint16_t universe2_id;

  uint8_t universe1[512];
  uint8_t universe2[512];
};

class ConfigManager
{
public:
  void loadConfig();
  void updateConfig(String jsonString);

  Config config;
};

extern ConfigManager configManager;