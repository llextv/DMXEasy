#include "ConfigManager.h"
#include <ArduinoJson.h>

ConfigManager configManager;

void ConfigManager::loadConfig()
{
}

void ConfigManager::updateConfig(String jsonString)
{
  StaticJsonDocument<512> doc;

  DeserializationError error =
    deserializeJson(doc, jsonString);
  if (error)
  {
    Serial.println("JSON invalide");
    return;
  }

  String wifiSSID = doc["wifi"]["ssid"];
  String wifiPass = doc["wifi"]["password"];

  int universe = doc["dmx"]["universe"];

  Serial.println(wifiSSID);
  Serial.println(universe);
}