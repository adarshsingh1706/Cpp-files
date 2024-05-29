#include <iostream>
#include <climits> // included for INT_MIN
using namespace std;

int rowsum(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0; 
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j]; // col wise sum arr[j][i]
        }
        cout << "sum of elements in row " << i + 1 << " is " << sum << endl;
    }
}

int largestrowsum(int arr[][3],int i,int j)
{
    int maxi = INT_MIN;
    int rowindex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j]; // col wise sum arr[j][i]
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex=i;
        }
    }
    cout << "the maxm sum is " << maxi <<"and at " << rowindex ;
    
    
}

int main()
{
    // initialise array

    int arr[3][3];

    // taking i/p
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at [" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
    }

    // printing o/p

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // finding row wise sum

    rowsum(arr);
    largestrowsum(arr,3,3);
}