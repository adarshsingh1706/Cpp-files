#include <iostream>
#include <map>
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
map<int,int> mpp; //unordered_map also works best,avg TC O(1) worst )(N) and incase of map best,avg,worst TC => O(N)
for(int i=0;i<n;i++){
 mpp[arr[i]]++;
}

int q; //no. of test case elements
cout<<"Enter the number of elements"<<endl;
cin>>q;

while(q--){
  int number; // who's frequency is required
  cout<<"Enter the number who's freq is req"<<endl;
  cin>>number;
  //fetch
  cout<<"the frequency of "<<number<<" is "<<mpp[number]<<endl;
}
return 0;
}