#include <iostream>
using namespace std;

void inserstionSot(int arr[], int n)
{
  for (int i = 0; i <= n ; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
}
int main()
{
  int n; // length of array
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  inserstionSot(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " "; // printing sorted array
}