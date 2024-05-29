#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{

  // base case

  if (size == 0)
  {
    return false;
  }

  if (arr[0] == key)
  {
    return true;
  }
  else
  {
    bool remainingPart = linearSearch(arr + 1, size - 1, key);
    return remainingPart;
  }
}

int main()
{
  int arr[9] = {1, 2, 3, 4, 5, 12, 87, 17, 15};
  int size = 9;
  int key = 24;

  bool finalans = linearSearch(arr, size, key);
  if (finalans)
  {
    cout << "present" << endl;
  }
  else
  {
    cout << "absent" << endl;
  }
}