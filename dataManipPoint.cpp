
#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main()
{
  USHORT myAge;
  USHORT * pAge = 0;
  myAge = 5;

  cout << "myAge: " << myAge << "\n";
  cout << "before *pAge: " << pAge << "\n";
  pAge = &myAge; //NOTE: no * used at this point
  cout << "*pAge: "  << *pAge << "\n\n";

  cout << "*pAge = 7\n";
  *pAge = 7; //sets myAge to 7
  cout << "*pAge: " << *pAge << "\n";
  cout << "myAge: " << myAge << "\n\n";

  cout << "myAge = 9\n";
  myAge = 9;
  cout << "myAge: " << myAge << "\n";
  cout << "*pAge: " << *pAge << "\n";

  return 0;
}
