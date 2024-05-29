#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
  int mid = (s + e) / 2;  // mid nikal rhe
  int len1 = mid - s + 1; // do arrays ki length nikal rhe
  int len2 = e - mid;

  int *firstarr = new int[len1]; // dono array initialise kr he
  int *secondarr = new int[len2];

  // copy kr he
  int mainArrayIndex = s;
  // start se mid tk ke values copy kr rhe

  for (int i = 0; i < len1; i++)
  {
    firstarr[i] = arr[mainArrayIndex];
  }

  mainArrayIndex = mid + 1; // mid+1 se end tk ka array copy kr rhe
  for (int i = 0; i < len2; i++)
  {
    secondarr[i] = arr[mainArrayIndex];
  }

  // merging both sorted arrays

  int index1 = 0;
  int index2 = 0;
  while (index1 < len1 && index2 < len2)
  {
    if (firstarr[index1] < secondarr[index2])
    {
      arr[mainArrayIndex++] = firstarr[index1++];
    }
    else
    {
      arr[mainArrayIndex++] = secondarr[index2++];
    }
  }
  while (index1 < len1)
  {
    arr[mainArrayIndex++] = firstarr[index1++];
  }
  while (index2 < len2)
  {
    arr[mainArrayIndex++] = secondarr[index2++];
  }
}

void mergeSort(int arr[], int s, int e)
{
  int mid = (s + e) / 2;

  // base case
  if (s >= e)
    return;

  // left side
  mergeSort(arr, s, mid);

  // right side
  mergeSort(arr, mid + 1, e);

  // merge
  merge(arr, s, e);
}

int main()
{
  int arr[5] = {5, 4, 3, 2, 1};
  int n = 5;

  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
