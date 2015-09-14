#include <iostream>
using namespace std;
#ifndef __QUADCOPTER_H__
#define __QUADCOPTER_H__

int8_t getPitch (int minPitch, int maxPitch)
{
  srand(time(NULL));
  double initialPitch = rand() % (127 - -127 + 1) + -127
  return initialPitch
}

int8_t getRoll (int minRoll, int maxRoll)
{
  srand(time(NULL));
  double initialRoll = rand() % (127 - -127 + 1) + -127
  return initialRoll
}

uint8_t getHeight (int minHeight, int maxHeight)
{
  srand(time(NULL));
  double initialHeight = rand() % (255 - 0 + 1) + 0;
  return initialHeight;
}

#endif

int main()
{
  double initialPitch = getPitch();
  double initialRoll = getRoll();
  double initialHeight = getHeight();
  cout << "Enter Desired Height (1-255): ";
  cin >> desiredHeight;
  cout << "Initial Pitch: ";
  cout << initialPitch << "\n";
  cout << "Initial Roll: ";
  cout << initialRoll << "\n";
  cout << "Initial Height: ";
  cout << initialHeight << "\n";
  cout << "Desired Pitch: " << desiredPitch << "\n";
  cout << "Desired Roll: " << desiredRoll << "\n";
  cout << "Desired Height: " << desiredHeight << "\n";
}

