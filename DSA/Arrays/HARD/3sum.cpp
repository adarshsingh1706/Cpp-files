// ------------------------------------TLE----------------------------------

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//        vector<vector<int>> ans;
// 	set<vector<int>> s;
// 	for(int i=0;i<n;i++){
// 		unordered_map<int,int> mp;
// 		for(int j= i+1;j<n;j++){
// 			int target = -(nums[i]+nums[j]);
// 			if(mp.find(target)!=mp.end()){
// 				vector<int> temp = {nums[i],nums[j],target};
// 				sort(temp.begin(),temp.end());
// 				s.insert(temp);
// 			}
// 			mp[nums[j]]=j;


// 		}
// 	}
// 	for(auto triplets:s){
// 		ans.push_back(triplets);
// 	}
// 	return ans; 
//     }
// };