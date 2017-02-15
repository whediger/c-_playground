
#include <iostream>

using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main()
{
  int myInt = 6500;
  long myLong = 65000;
  float myFloat = 6.5f;
  double myDouble = 6.5e20;

  int doubledInt;
  long doubledLong;
  float doubleFloat;
  double doubleDouble;

  cout << "myInt: " << myInt << "\n";
  cout << "myLong: " << myLong << "\n";
  cout << "myFloat: " << myFloat << "\n";
  cout << "myDouble: " << myDouble << "\n";

  doubledInt = Double(myInt);
  doubledLong = Double(myLong);
  doubleFloat = Double(myFloat);
  doubleDouble = Double(myDouble);

  cout << "doubledInt: " << doubledInt << "\n";
  cout << "doubledLong: " << doubledLong << "\n";
  cout << "doubleFloat: " << doubleFloat << "\n";
  cout << "doubleDouble: " << doubleDouble << "\n";

  return 0;
}

int Double(int o){
  cout << "In Double(int)\n";
  return o * 2;
}

long Double(long o){
  cout << "In Double(long)\n";
  return o * o;
}

float Double(float o){
  cout << "In Double()\n";
  return o * o;
}

double Double(double o) {
  cout << "In Double(double)\n";
  return o * o;
}
