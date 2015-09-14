#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
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

#endif

int main()
{
  double initialPitch = getPitch();
  double initialRoll = getRoll();
  double initialHeight = getHeight();
  double desiredPitch;
  double desiredRoll;
  double desiredHeight;
  double currentPitch;
  double currentRoll;
  double currentHeight;
  
  cout << "Enter Desired Height (1-255): ";
  cin >> desiredHeight;
  if (desiredHeight < 1 || desiredHeight > 255)
  {
    cout << "Invalid Height. Program Terminated.\n";
    return 0;
  }
  
  cout << "Desired Pitch: " << desiredPitch << "\n";
  cout << "Desired Roll: " << desiredRoll << "\n";
  cout << "Desired Height: " << desiredHeight << "\n\n";
  usleep(5000000);//allow user to keep track of outputs
  
  cout << "Initial Pitch: ";
  cout << initialPitch << "\n";
  cout << "Initial Roll: ";
  cout << initialRoll << "\n";
  cout << "Initial Height: ";
  cout << initialHeight << "\n";
  usleep(5000000);//allow user to keep track of outputs
  
  currentPitch = initialPitch;
  currentRoll = initialRoll;
  currentHeight = initialHeight;
  
  while (true){
  cout << "\nCurrent Pitch: ";
  cout << currentPitch;
  cout << "\n";
  cout << "Current Roll: ";
  cout << currentRoll;
  cout << "\n";
  cout << "Current Height: ";
  cout << currentHeight;
  cout << "\n\n";
  cout << "Readjusting...";
  cout << "\n";
  usleep(4000000);
  
  if (currentPitch < desiredPitch || currentPitch > desiredPitch)
  {
    currentPitch *= .75;
  }
  if (-1 < currentPitch && 1 > currentPitch)//close enough; time to round down...
  {
    currentPitch = 0;
  }
  
  if (currentRoll < desiredRoll || currentRoll > desiredRoll)
  {
    currentRoll *= .75;
  }
  if (-1 < currentRoll && 1 > currentRoll)//close enough; time to round down...
  {
    currentRoll = 0;
  }
  
  if (currentHeight < desiredHeight)
  {
    cout << "Motors too weak!\n";
    currentHeight *= 1.1;
  }
  else if (currentHeight > desiredHeight)
  {
    cout << "Motors too strong!\n";
    currentHeight *= .9;
  }
  
  double valueHeight = currentHeight - desiredHeight;
  
  if (-1 < valueHeight && 1 > valueHeight)
  {
    currentHeight = desiredHeight;
  }
  
  if (currentPitch == desiredPitch && currentRoll == desiredRoll && currentHeight == desiredHeight)
  {
     cout << "\nCurrent Pitch: ";
  cout << currentPitch;
  cout << "\n";
  cout << "Current Roll: ";
  cout << currentRoll;
  cout << "\n";
  cout << "Current Height: ";
  cout << currentHeight;
  cout << "\n\n";
    cout << "Quadcopter fully stabilized.";
    break;
  }
  }
  
} 

  


