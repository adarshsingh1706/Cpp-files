// #include <algorithm>
// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         //sort
//         sort(nums.begin(),nums.end());
//         long long maxi =0;
//         for(int i=0;i<nums.size();i++){
            
//             vector<int> ans;
//             long long num = nums[i];
//             ans.push_back(num);
        
//             for(int j=0;j<nums.size();j++){
//                 if(nums[j]==(num*num)){
//                     ans.push_back(nums[j]);
//                     num = nums[j];
//                 }
                
//             }
//             if(ans.size()!=1)  maxi = std::max(static_cast<int>(ans.size()),static_cast<int>(maxi));
           
//         }
//         if(maxi>0) return maxi;
//         else return -1;
//     }
// };


//
// with Binary search


//#include <algorithm>
// class Solution {
// public:
//     int longestSquareStreak(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         long long maxi = 0;
//         for(int i=0;i<nums.size();i++){
//             long long num = nums[i];
//             vector<int> ans;
//             ans.push_back(num);
//             int s=0;
//             int e=nums.size()-1;
            
//             while(e>=s){
//                 int mid = e-((e-s)/2);
//                 if(num*num==nums[mid]){
//                     ans.push_back(nums[mid]);
//                     num = nums[mid];
//                     s=0;
//                     e=nums.size()-1;
//                 } 
//                 else if(nums[mid]<num*num){
//                     s=mid+1;
//                 }
//                 else{
//                     e=mid-1;
//                 }
                
//             }
//             if(ans.size()!=1) maxi = std::max(static_cast<int>(ans.size()), static_cast<int>(maxi));
            
//         }
//         if(maxi>0) return maxi;
//         else return -1;
//     }
// };