//memoization

// class Solution {
// public:
//     int helperfn(vector<int> &arr, int k, int index, vector<int> &dp) {
//         // Base case
//         if (index == 0) return 0;

//        
//         if (dp[index] != -1) return dp[index];

//         int minimum = INT_MAX;

//         for (int i = 1; i <= k; i++) {
//             if (index - i >= 0) {
//                 int cost = helperfn(arr, k, index - i, dp) + abs(arr[index] - arr[index - i]);
//                 minimum = min(minimum, cost);
//             }
//         }

//         
//         return dp[index] = minimum;
//     }

// public:
//     int minimizeCost(vector<int> &arr, int &k) {
//         int n = arr.size() - 1;
//         vector<int> dp(n + 1, -1);
//         return helperfn(arr, k, n, dp);  
//     }
// };


//tabulation


// class Solution {
   
   
//   public:
//     int minimizeCost(vector<int>& arr, int& k) {
       
//         int n = arr.size();
//          vector<int>dp(n);
         
//          dp[0]=0;
         
//          for(int i=1;i<n;i++){
//              int minimum = INT_MAX;
//              for (int j=1;j<=k;j++){
//                  if(i-j>=0){
//                    int jump=dp[i-j]+abs(arr[index]-arr[index-j]);
//                    minimum= min(jump,minimum);
//                  }
//                  dp[i]=minimum;
//              }
//          }
//         return dp[n-1;]
//     }
// };


