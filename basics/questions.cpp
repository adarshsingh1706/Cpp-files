// decimal to binary

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int a;
//     int r=0;
//     cin>>n;
//     string bit=" ";
//     while(n>0){
//         a=n%2;
//         bit= to_string(a)+bit;
//         n=n/2;
// }
//       cout<< bit;

//       // now reversing 
//       int w= stoi(bit);  
//       while(w!=0){
//         int remainder = w%10;
//         r=r*10 + remainder;
//         w=w/10;
//       }
//       cout<< r;
// }

// binary to decimal

// #include <iostream>
// #include <math.h>
// using namespace std;
//  int main(){
//     int n;
//     cout<< "enter the binary no"<< endl;
//     cin >>n;
//     int i=0;
//     int ans=0;
//     while(n!=0){
//         int remainder= n%10;
//         if( remainder==1){
//             ans= ans+ pow(2,i);
//         }
//         i++;
//         n=n/10;
//     }
//     cout<< ans;
//  }


//ques)
// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement

#include <iostream>
using namespace std;

int main(){
    int n;
    int ans=0;
    string x;
    cout<< "Enter number" << endl;
    cin >>n;
    while(n!=0){
        int digit= n%2;
        ans=(ans*10)+digit;
        n=n/2;
    }
    while(ans!=0){
        int last_digit=ans%10;
        if(last_digit==0){
            string b="1";
            x=x+b;
        }
        else{
            string c=0;
            x=x+c;
        }
        ans=ans/10;
    }
    cout<< x;
}