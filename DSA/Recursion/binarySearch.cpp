#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key)
{
  int mid = s + (e - s) / 2;
  // base cases
  // key  not found
  if (s > e)
    return false;

  // key found
  if (arr[mid] == key)
  {
    return true;
  }

  if (arr[mid] < key)
  {
    return binarySearch(arr, mid + 1, e, key);
  }
  else
  {
    return binarySearch(arr, s, mid - 1, key);
  }
}

int main()
{
  int arr[9] = {1, 2, 3, 4, 5, 12, 87, 17, 15};
  int size = 9;
  int key = 224;

  bool finalans = binarySearch(arr, 0, 5, key);
  if (finalans)
  {
    cout << "present" << endl;
  }
  else
  {
    cout << "absent" << endl;
  }
}