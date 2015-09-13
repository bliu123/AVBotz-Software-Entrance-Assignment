#include <ctime> //Allow for more random numbers
#include <cstdlib> //Allow for more random numbers
#include <iostream>
using namespace std;
#ifndef __QUADCOPTER_H__
#define __QUADCOPTER_H__

int8_t getPitch (int minPitch, int maxPitch)
{
  return rand() % (maxPitch - minPitch + 1) + minPitch;
}

int8_t getRoll (int minRoll, int maxRoll)
{
  return rand() % (maxRoll - minRoll + 1) + minRoll;
}

uint8_t getHeight (int minHeight, int maxHeight)
{
  return rand() % (maxHeight - minHeight + 1) + minHeight;
}

#endif

int main()
{
  srand(time(NULL));
  int initialPitch = getPitch(-127, 127);
  int initialRoll = getRoll(-127, 127);
  int initialHeight = getHeight(0, 255);
  int desiredPitch = 0;
  int desiredRoll = 0;
  int desiredHeight ;
  cout << "Enter Desired Height (Integer, 1-255): ";
  cin >> desiredHeight;
  cout << "Initial Pitch: ";
  cout << initialPitch << "\n";
  cout << "Initial Roll: ";
  cout << initialRoll << "\n";
  cout << "Initial Height: ";
  cout << initialHeight << "\n";
  cout << "Desired Pitch: 0\n";
  cout << "Desired Roll: 0\n";
  cout << "Desired Height: " << desiredHeight << "\n";
}

