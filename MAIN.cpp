#include <iostream>
using namespace std;
#ifndef __QUADCOPTER_H__
#define __QUADCOPTER_H__

int8_t getPitch()
{
  srand(unsigned(NULL));
  double initialPitch = rand() % (127 - -127 + 1) + -127;
  return initialPitch;
}

int8_t getRoll()
{
  srand(time(NULL));
  double initialRoll = rand() % (127 - -127 + 1) + -127;
  return initialRoll;
}

uint8_t getHeight()
{
  srand(time(NULL));
  double initialHeight = rand() % (255 - 0 + 1) + 0;
  return initialHeight;
}
void setFR(uint8_t)
{
  FR = initialHeight
}
void setFL(uint8_t)
void setBR(uint8_t)
void setBL(uint8_t)
#endif

int main()
{
  double initialPitch = getPitch();
  double initialRoll = getRoll();
  double initialHeight = getHeight();
  double desiredPitch;
  double desiredRoll;
  double desiredHeight;
  
  cout << "Enter Desired Height (1-255): ";
  cin >> desiredHeight;
  if (desiredHeight < 1 || desiredHeight > 255)
  {
    cout << "Invalid Height. Program Terminated.\n";
    return 0;
  }
  
  cout << "Initial Pitch: ";
  cout << initialPitch << "\n";
  cout << "Initial Roll: ";
  cout << initialRoll << "\n";
  cout << "Initial Height: ";
  cout << initialHeight << "\n";
  
  cout << "Desired Pitch: " << desiredPitch << "\n";
  cout << "Desired Roll: " << desiredRoll << "\n";
  cout << "Desired Height: " << desiredHeight << "\n";
  
  while (true){
    
  }
  
  
  
  
}

