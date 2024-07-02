// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int i=0;
//           for(int j=1;j<nums.size();j++) {
//             if(nums[j]!=nums[i]) {
//                 nums[i+1] = nums[j];
//                 i++;
//             }  
//           }
//           return i+1;
//     }
// };


//intersection of two arrays -II
// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         map<int,int> mp;
//         for(int i=0;i<nums1.size();i++){
//             mp[nums1[i]]++;
//         }
//         for(int i=0;i<nums2.size();i++){
//             int element = nums2[i];
//             if(mp.find(element)!=mp.end()&& mp[element]>0){
//                 ans.push_back(element);
//                 mp[element]--;
//             }
//         }
//         return ans;
//     }
// };