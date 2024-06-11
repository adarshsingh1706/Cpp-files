#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
      bool didSwap = false;
    for (int j = 0; j < n-i-1; j++)
    {
      if (arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        didSwap=true;
    }
    }
    if(!didSwap) break;
  }
 
}

int main()
{
  int n; // length of array
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bubbleSort(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " "; // printing sorted array
}