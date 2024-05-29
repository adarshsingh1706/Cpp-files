#include <iostream>
using namespace std;

int sum(int arr[], int size)
{

  // base case
  if (size == 0)
  {
    return 0;
  }

  if (size == 1)
  {
    return arr[0];
  }

  int remainingPart = sum(arr + 1, size - 1);
  return (arr[0] + remainingPart);
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int size = 5;

  int count = sum(arr, size);
  cout << count;
}
