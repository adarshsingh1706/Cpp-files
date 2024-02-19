#include <iostream>
using namespace std;

class Hero
{
  // properties

private: // access modifiers => public,private,protected
  int health;

public:
  char level;

  void display()
  {
    cout << level;
  }

  // accessing through getters and setters

  int getHealth()
  {
    return health;
  }

  char getValue()
  {
    return level;
  }

  void setHealth(int h)
  {
    h = health;
  }

  void setlevel(char ch)
  {
    ch = level;
  }
};

int main()
{

  // creation of object

  Hero ramesh;

  cout << "ramesh health is:" << ramesh.getHealth() << endl;
  // use setter
  ramesh.setHealth(100);
  ramesh.level = 'B';

  cout << "health is:" << ramesh.getHealth() << endl;
  cout << "level is:" << ramesh.level << endl;

  return 0;
}
