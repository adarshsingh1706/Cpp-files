#include <iostream>
using namespace std;

void towerofHanoi(int n, char from_rod, char to_rod, char aux_rod)
{

  // base case
  if (n == 1)
  {
    cout << "Move " << n << " from " << from_rod << " to " << to_rod<<endl;;
    return;
  }

  towerofHanoi(n - 1, from_rod, aux_rod, to_rod);
  cout << "Move" << n << "from" << from_rod << "to" << to_rod << endl;
  towerofHanoi(n - 1, aux_rod, to_rod, from_rod); //aux to dest
}

int main()
{
  int n;
  cout << "Enter the value of n"<<endl;
  cin >> n;
 

  towerofHanoi(n,'A','B','C');
}