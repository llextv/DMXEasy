#include "SceneEngine.h"
#include "StateManager.h"

SceneEngine sceneEngine;

void SceneEngine::begin()
{
}

void SceneEngine::update()
{
  if(controller.buttons[0])
  {
    activeScene = 1;
  }
  if(controller.buttons[1])
  {
    activeScene = 2;
  }
}