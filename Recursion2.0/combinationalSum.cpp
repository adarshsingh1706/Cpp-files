// class Solution
// {
// public:
//   void findCombinations(int index, int target, vector<int> &arr,
//   vector<vector<int>> &ans, vector<int> &ds)
//   {
//     // base case
//     if (index == arr.size())
//     {
//       if (target == 0)
//       {
//         ans.push_back(ds);
//       }

//       return;
//     }
//     // checking before caling
//     if (arr[index] <= target)
//     {
//       ds.push_back(arr[index]);
//       findCombinations(index, target - arr[index], arr, ans, ds);
//       ds.pop_back();
//     }
//     findCombinations(index + 1, target, arr, ans, ds);
//   }

// public:
//   vector<vector<int>> combinationSum(vector<int> &candidates, int target)
//   {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     findCombinations(0, target, candidates, ans, ds);
//     return ans;
//   }
// };

// ----------------------------------------------------------------

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.