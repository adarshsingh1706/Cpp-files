
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

