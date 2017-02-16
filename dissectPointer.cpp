
#include <iostream>

using namespace std;

typedef unsigned short int USHORT;

int main()
{
  USHORT myAge = 5, yourAge = 10;
  USHORT * pAge = &myAge;

  cout << "*pAge = &myAge" << endl;
  cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << "\n";
  cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << "\n";
  cout << "pAge:\t" << pAge << endl;
  cout << "*pAge:\t" << *pAge << "\n";
  cout << "&pAge:\t" << &pAge << endl;
  cout << endl;

  pAge = &yourAge; //reassign the pointer
  cout << "pAge = &yourAge" << endl;
  cout << "myAge:\t" << myAge << "\tyourAge:\t" << yourAge << "\n";
  cout << "&yourAge:" << &yourAge << "\t&myAge:\t" << &myAge << "\n";
  cout << "pAge:\t" << pAge << endl;
  cout << "*pAge:\t" << *pAge << endl;
  cout << "&pAge:\t" << &pAge << endl;

  return 0;
}
