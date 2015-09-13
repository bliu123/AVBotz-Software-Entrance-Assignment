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
  cout << "Initial Pitch: ";
  cout << getPitch(-127, 127) << "\n";
  cout << "Initial Roll: ";
  cout << getRoll(-127, 127) << "\n";
  cout << "Initial Height: ";
  cout << getHeight(0, 255) << "\n";
}

