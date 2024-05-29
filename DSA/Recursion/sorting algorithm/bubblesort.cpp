#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
  // base case
  if (n == 0 || n == 1)
    return;

  // solving 1 case
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      swap(arr[i], arr[i + 1]);
    }
  }

  sortArray(arr, n - 1); // size-1
}

int main()
{
  int nums[5] = {5, 4, 3, 2, 1};
  int size = 5;

  sortArray(nums, size);

  // printing

  for (int i = 0; i < size; i++)
  {
    cout << nums[i];
  }
}
