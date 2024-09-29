
// 01 Knapsack---------------------

// class Solution {
//     public:
//     int helperfn(vector<int>& wt, vector<int>& val,int W,int n,vector<vector<int>> &dp){
//         //base case
//         if(n==0 || W==0) return 0;
//         if(dp[W][n]!=-1) return dp[W][n];
//         if(wt[n-1]<=W){
//             return dp[W][n]=max(val[n-1]+helperfn(wt,val,W-wt[n-1],n-1,dp),helperfn(wt,val,W,n-1,dp));
//         }
//         else if(wt[n-1]>W) return dp[W][n]=helperfn(wt,val,W,n-1,dp);
//     }
//   public:
//     // Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int W, vector<int>& wt, vector<int>& val) {
//        int n = wt.size();
//        vector<vector<int>> dp(W+1,vector<int>(n,-1));
//       return helperfn(wt,val,W,n,dp);
//     }
// };

//tabulation-----------------------------


// class Solution {
    
//   public:
//     // Function to return max value that can be put in knapsack of capacity W.
//     int knapSack(int W, vector<int>& wt, vector<int>& val) {
       
//         int n = wt.size();
//         vector<vector<int>> dp(n+1,vector<int>(W+1));
//         //bc
//         for(int i=0;i<=n;i++){
//             dp[i][0]=0;
//         }
//         for(int j=0;j<=W;j++){
//             dp[0][j]=0;
//         }
//         //i->n,W->j
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=W;j++){
//                 if(wt[i-1]<=j){
//                     dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
//                 }
//                 else{
//                     dp[i][j] = dp[i-1][j];
//                 }
//             }
//         }
//         return dp[n][W];
//     };
//     };


//SubsetSum Problem-------------------

#include <iostream>
#include <vector>
using namespace std;

bool subsetSum(int arr[],int sum,int n){
  vector<vector<int>> dp(n+1,vector<int> (sum+1));
  //initialisation of the matrix
  for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
      if(i==0) dp[i][j]=false;
      else if(j==0) dp[i][j]=true;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
      if(arr[i-1]<=j){
        dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
return dp[n][sum];
}


int main(){
int arr[5] = {2,0,4,7,9};
int sum = 12;
int n=5;
if (subsetSum(arr, sum, n)) {
        cout << "Yes, subset with the given sum exists!" << endl;
    } else {
        cout << "No, subset with the given sum does not exist!" << endl;
    }
return 0;
}



