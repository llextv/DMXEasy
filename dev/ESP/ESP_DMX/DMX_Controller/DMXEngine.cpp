#include "DMXEngine.h"
#include "StateManager.h"

DMXEngine dmx;

void DMXEngine::begin()
{
  memset(universe1, 0, sizeof(universe1));
  memset(universe2, 0, sizeof(universe2));
}

void DMXEngine::update()
{
  buildUniverse();
}

void DMXEngine::buildUniverse()
{
    universe1[0] = controller.faders[0];
    universe1[1] = controller.faders[1];
    universe1[2] = controller.faders[2];
    universe1[3] = controller.faders[3];
    universe1[4] = controller.faders[4];
    universe1[5] = controller.faders[5];

    if(controller.buttons[0])
    {
      universe1[10] = 255;
    }
    else
    {
      universe1[10] = 0;
    }
}