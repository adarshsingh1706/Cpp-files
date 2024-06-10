#include <iostream>
using namespace std;

int main(){
  int n; //arrays size
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int arr[n];

  //taking array as i/p
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

//precompute
int hash[6] = {0}; //let 6 be the maxm nos in the arr
for(int i=0;i<n;i++){
  hash[arr[i]]+=1;
}

int q; //no. of test case elements
cout<<"Enter the number of elements"<<endl;
cin>>q;

while(q--){
  int number; // who's frequency is required
  cout<<"Enter the number who's freq is req"<<endl;
  cin>>number;
  //fetch
  cout<<"the frequency of "<<number<<" is "<<hash[number]<<endl;
}
return 0;
}