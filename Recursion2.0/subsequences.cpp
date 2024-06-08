#include <iostream>
#include <vector>
using namespace std;

void printSubseq(int index, int n, int arr[], vector<int> &output)
{
  // base case
  if (index >= n)
  {
    if (output.size() == 0) // for showing {} in o/p
      cout << "{}";

    for (int i = 0; i < output.size(); i++)
    {
      cout << output[i] << " ";
    }
    cout << endl;

    return;
  }

  //include the current element in the subseq
  output.push_back(arr[index]); 
  printSubseq(index + 1, n, arr, output);
  //exclude the current element in the subseq 
  output.pop_back(); 
  printSubseq(index + 1, n, arr, output);
}

int main()
{
  int n = 3;
  int arr[] = {3, 2, 1};
  vector<int> output; // for storing individual subsequences
  printSubseq(0, 3, arr, output);
}