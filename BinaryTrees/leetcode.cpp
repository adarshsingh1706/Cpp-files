// binary tree path
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// void helperfn(TreeNode* root,vector<string> &arr,string s){
//     if(root==NULL) return;
//     if(!s.empty()) s+="->";
//     s+=to_string(root->val);

//     //leafnode
//     if(root->left==NULL && root->right==NULL){
//         arr.push_back(s);
//         return;
//     }

//     if(root->left) helperfn(root->left,arr,s);
//     if(root->right) helperfn(root->right,arr,s);
// }
// public:
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> ans;
//         helperfn(root,ans,"");
//         return ans;
//     }
// };


//kadane's algo

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int sum = 0;
//         int maximum = INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             if(sum>maximum) maximum=sum;

//             if(sum<0)sum=0; 
//         }
//         return maximum;
//     }
// };