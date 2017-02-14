
#include <iostream>

using namespace std;

int main()
{
  enum Days { Sunday, Monday, Tuesday, Wed, Thur, Fri, Sat };

  Days DayOff;
  int x;

  cout << "what day would you like off? (0-6)\n";
  cin >> x;
  DayOff = Days(x);

  if (DayOff == Sunday || DayOff == Sat)
    cout << "You already have that day off.(to code something fun)";
  else
    cout << "Okay, I'll take " << Days(x) << " as a vaction day off your record";

  return 0;
}
