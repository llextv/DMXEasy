#include "UARTReceiver.h"
#include "StateManager.h"

UARTReceiver uartReceiver;

HardwareSerial InputSerial(2);

void UARTReceiver::begin()
{
  InputSerial.begin(
    115200,
    SERIAL_8N1,
    16,
    17
  );
}

void UARTReceiver::update()
{
  while(InputSerial.available())
  {
    char c = InputSerial.read();
    if(c == '\n')
    {
      parseLine(buffer);
      buffer = "";
    }
    else
    {
      buffer += c;
    }
  }
}

void UARTReceiver::parseLine(String line)
{
  line.trim();
  if(line.startsWith("BTN:"))
  {
    int first = line.indexOf(':');
    int second = line.indexOf(':', first + 1);
    int id = line.substring(first + 1, second).toInt();
    int value = line.substring(second + 1).toInt();
    if(id >= 0 && id < 64)
    {
      controller.buttons[id] = value;
    }
  }
  else if(line.startsWith("FADER:"))
  {
    int first = line.indexOf(':');
    int second = line.indexOf(':', first + 1);
    int id = line.substring(first + 1, second).toInt();
    int value = line.substring(second + 1).toInt();
    if(id >= 0 && id < 6)
    {
      controller.faders[id] = value;
    }
  }
}