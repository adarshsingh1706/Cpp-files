// Pointers in C++

#include <iostream>
using namespace std;

int main()
{
  int i = 5;

  // int *p = &i;
  // cout << p << endl;
  // cout << *p << endl;

  int *p = 0;  
  p = &i;    //can be represented as this too

  cout << p << endl;
  cout << *p << endl;


  
}
