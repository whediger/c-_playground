
#include <iostream>

using namespace std;

int add(int x, int y)
{
  cout << "In add() recieved: " << x << " and " << y << "\n";
  return (x+y);
}

int main()
{
  cout << "I'm in main()\n";
  int a , b , c;
  cout << "Enter two numbers: ";
  cin >> a;
  cin >> b;
  cout << "calling add()\n";
  c = add(a,b);
  cout << "back in main \n";
  cout << "c was set to " << c;
  cout << "\n...exiting \n";
  return 0;
}
