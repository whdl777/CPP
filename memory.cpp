#include <iostream>

class Test 
{
  private:
    int num;
    char text;
  public: 
    Test(int n):num(n){}
    getTestNumber()
    {
      return num;
    }
};

class TestChild: public Test{
  private:
    int num2;
  public:
    TestChild(int n, int n2): Test(n), num2(n2){}   
    getTestNumber()
    {
      return num2;
    }
};

int main()
{
  int num = 10;
  int *p = &num;

  std::cout<< "*p: " << *p << std::endl;
  std::cout<< "p: " << p << std::endl;
  std::cout<< "&p" << &p << std::endl;
  std::cout<< "&num: " << &num << std::endl;
  
  Test *test = new Test(10);
  int n = test->getTestNumber();  
  std::cout<< "n: " << n << std::endl;

  std::cout<< "test: " << test << std::endl;
  std::cout<< "testSize: " << sizeof(test) << std::endl;

  Test * childTest = new TestChild(1, 2);
  std::cout << childTest->getTestNumber() <<std::endl;
  return 0;
}