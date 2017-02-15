
#include <iostream>

using namespace std;

class Cat
{
public:
  Cat(int initialAge);
  ~Cat();
  int getAge();
  void setAge(int age);
  void meow();
private:
  int itsAge;
};
//constructor
Cat::Cat(int initialAge)
{
  itsAge = initialAge;
}
//destructor
Cat::~Cat(){}

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
  Cat Friskey(7);
  Friskey.meow();
  cout << "Friskey is a cat who is ";
  cout << Friskey.getAge() << " Years old\n";
  Friskey.meow();
  Friskey.setAge(3);
  cout << "now friskey is " << Friskey.getAge() << " years old(different, right?)" << endl;
  return 0;
}
