// function template example
#include <iostream>
using namespace std;

template <class SomeType>
SomeType sum (SomeType a, SomeType b)
{
  return a+b;
}

int main ()
{
  int x=sum<int>(10,20);
  cout << x << endl;
}


