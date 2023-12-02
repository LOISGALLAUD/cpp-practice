#include <iostream>

using namespace std;

class A
{
public:
  virtual void foo() { cout << "A::foo()" << endl; }
};

class B : public A
{
public:
  void foo() { cout << "B::foo()" << endl; }
};

class C : public B
{
public:
  void foo()
  {
    A::foo();
    cout << "C::foo()" << endl;
  }
};

int main()
{
  C c;
  B *pb = &c;

  pb->foo();

  return 0;
}
