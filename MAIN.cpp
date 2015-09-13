#include <iostream>
#include "Quadcopter.h"
using namespace std;

int8_t getPitch(){
  int pitch1
  cout << "Enter initial pitch (integer -127 to 127):\n"
  cin >> pitch1
  if (pitch1 < -127 || pitch1 > 127)
  {
    pitch1 = -123987
  }
    return pitch1
}

int8_t getRoll(){
  int roll1
  cout << "Enter initial roll (integer -127 to 127):\n"
  cin >> roll1
  if (roll1 < -127 || roll1 > 127)
  {
    roll1 = -123987
  }
    return pitch1
}

uint8_t getHeight(){
  int height1
  cout << "Enter desired height (integer 1-255):\n"
  cin >> height1
  if (height1 < 1 || height1 > 255)
  {
    height1 = -123987
  }
  return height1
}

int main(){
int pitch1
  cout << "Enter initial pitch (integer -127 to 127):\n"
  cin >> pitch1
  if (pitch1 < -127 || pitch1 > 127)
  {
    pitch1 = -123987
  }
    return pitch1


