#include <iostream>
#include <cstring>

class Person 
{
  private:
    int age;
    char name[10];
  public:
    Person(int n, char* c):age(n)
    {
      strcpy(name, c);
      std::cout << age << " " << name <<std::endl;
    }
};


int main()
{ 
  Person p(10, "kim");
  return 0;
}