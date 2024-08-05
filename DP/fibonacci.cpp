#include <iostream>
#include <vector>
using namespace std;

int f(int n,vector<int> &dp){
  //bc
  if(n<=1) return n;
  if(dp[n]!=-1) return dp[n];

  return dp[n] = f(n-1,dp)+f(n-2,dp);
}

int main(){
  int n;
  cout<<"Enter num"<<endl;
  cin>>n;
  vector<int> dp(n+1,-1);
  cout<<f(n,dp);
  return 0;
}


//climbing stairs
// class Solution {
// public:
//     int climbStairs(int n) {
//       if (n == 0 || n == 1) return 1;
//       vector<int> dp(n + 1);

//       dp[0] = 1;
//       dp[1] = 1;

//        for (int i = 2; i <= n; ++i) {
//             dp[i] = dp[i - 1] + dp[i - 2];
//         }
//             return dp[n];
//     }
// };