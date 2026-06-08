#include "UARTReceiver.h"
#include "DMXEngine.h"
#include "DMXOutput.h"
#include "SceneEngine.h"

unsigned long lastDMX = 0;

void setup()
{
  Serial.begin(115200);
  uartReceiver.begin();
  sceneEngine.begin();
  dmx.begin();
  dmxOutput.begin();
}

void loop()
{
  uartReceiver.update();
  sceneEngine.update();
  dmx.update();
  if(millis() - lastDMX >= 25)
  {
    lastDMX = millis();
    dmxOutput.update();
  }
}