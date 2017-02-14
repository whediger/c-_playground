
typedef unsigned short USHORT;

#include <iostream>

using namespace std;

USHORT FindArea(USHORT length, USHORT width);


int main()
{
  USHORT lengthOfYard;
  USHORT widthOfYard;
  USHORT areaOfYard;

  cout << "\nhow wide is your yard? ";
  cin >> widthOfYard;
  cout << "\nwhat is the length of your yard? ";
  cin >> lengthOfYard;

  areaOfYard = FindArea(widthOfYard, lengthOfYard);

  cout << "\nyour yard is ";
  cout << areaOfYard;
  cout << " square feet\n\n";

  return 0;
}

USHORT FindArea(USHORT l, USHORT w)
{
  return l * w;
}
