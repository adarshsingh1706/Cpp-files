#include <iostream>
using namespace std;
#include "Header.cpp"

class Hero
{
  // properties
  char name[100];
  int health;
  char level;
};

int main()
{

  // creation of object

  Hero h1;

  cout << "size:" << sizeof(h1) << endl;

  // incase of empty class 1 byte memory is allocated just to keep track of it

  // accessing a class from different file:

  Header nums;
  cout << "size:" << sizeof(nums) << endl;
  return 0;
}
