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
    health = h;
  }

  void setlevel(char ch)
  {
    level = ch;
  }
};

int main()
{

  // creation of object
  // statically
  Hero a;
  a.setlevel(' B');
  a.setHealth(90);
  cout << "health is" << a.getHealth() << endl;
  cout << "level is " << a.level << endl;

  // dynamically

  Hero *b = new Hero;

  b->setlevel(' A');
  b->setHealth(70);
  cout << "health is" << (*b).getHealth() << endl;
  //(*b).getHealth() ==> b->getHealth()
  cout << "level is " << (*b).level << endl;

  return 0;
}
