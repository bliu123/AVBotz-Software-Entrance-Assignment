#include <ctime> //Allow for more random numbers
#include <cstdlib> //Allow for more random numbers
#include <iostream>
using namespace std;

int getPitch (int minPitch, int maxPitch)
{
  return rand() % (maxPitch - minPitch + 1) + minPitch;
}

int getRoll (int minRoll, int maxRoll)
{
  return rand() % (maxRoll - minRoll + 1) + minRoll;
}

int getHeight (int minHeight, int maxHeight)
{
  return rand() % (maxHeight - minHeight + 1) + minHeight;
}


int main()
{
  srand(time(NULL));
  int initialPitch = getPitch(-127, 127);
  int initialRoll = getRoll(-127, 127);
  int initialHeight = getHeight(0, 255);
  int desiredPitch = 0;
  int desiredRoll = 0;
  int desiredHeight ;
  cout << "Enter desired height: ";
  cin >> desiredHeight;
  cout << "Initial Pitch: ";
  cout << initialPitch << "\n";
  cout << "Initial Roll: ";
  cout << initialRoll << "\n";
  cout << "Initial Height: ";
  cout << initialHeight << "\n";
  cout << "Desired Pitch: 0\n";
  cout << "Desired Roll: 0\n";
  cout << "Desired Height:" << desiredHeight << "\n";
}

