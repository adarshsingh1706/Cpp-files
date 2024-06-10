// #include <iostream>
// using namespace std;

// int main(){
//   int n; //arrays size
//   cout<<"Enter size of array"<<endl;
//   cin>>n;
//   int arr[n];

//   //taking array as i/p
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

// //precompute
// int hash[6] = {0}; //A hash array is used to store the frequencies of numbers. The size of the hash array is set to 6, assuming the maximum number in the input array is 5.
// for(int i=0;i<n;i++){
//   hash[arr[i]]+=1;
// }

// int q; //no. of test case elements
// cout<<"Enter the number of elements"<<endl;
// cin>>q;

// while(q--){
//   int number; // who's frequency is required
//   cout<<"Enter the number who's freq is req"<<endl;
//   cin>>number;
//   //fetch
//   cout<<"the frequency of "<<number<<" is "<<hash[number]<<endl;
// }
// return 0;
// }

//for STRING

#include <iostream>
using namespace std;
int main(){
  string s;
  cout<<"Enter string"<<endl;
  cin>>s;
  int hash[26]={0};
  for(int i=0;i<s.size();i++){
    hash[s[i]-'a']++; //eg s[i]=d then, 'd'-'a'=100-97=3 so location 3 ++
  }

  char ch;
  cout<<"Enter the char C"<<endl;
  cin>>ch;
  cout<<hash[ch-'a']<<endl;

}