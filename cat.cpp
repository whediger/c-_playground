
#include <iostream>

using namespace std;

class Cat
{
public:
  int getAge();
  void setAge(int age);
  void meow();
private:
  int itsAge;
};

int Cat::getAge(){
  return itsAge;
}

void Cat::setAge(int age){
  itsAge = age;
}

void Cat::meow(){
  cout << "MMMMEEEEOOOOooooowwww\n";
}

int main()
{
  Cat Friskey;
  Friskey.setAge(3);
  Friskey.meow();
  cout << "Friskey is a cat who is ";
  cout << Friskey.getAge() << " Years old\n";
  Friskey.meow();
  return 0;
}
