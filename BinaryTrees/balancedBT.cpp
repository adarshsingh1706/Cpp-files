/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
// int heightLeft(TreeNode* root) {
//     if(root==NULL) return 0;
//     int left = heightLeft(root->left);
//     int right = heightLeft(root->right);
//     return 1+max(left,right);
// }

// public:
// int heightRight(TreeNode* root) {
//     if(root==NULL) return 0;
//     int right = heightRight(root->right);
//     int left = heightRight(root->left);
//     return 1+max(left,right);
// }
// public:
//     bool isBalanced(TreeNode* root) {
//         if(root==NULL) return true;
//         int lh = heightLeft(root->left);
//         int rh = heightRight(root->right);
//         if((abs(rh-lh))>1) return false;
//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);
//         if(!left || !right) return false;
//         return true;
//     }
// };


//optimised approach

// class Solution {
// public:
//     int height(TreeNode* root) {
//         if(root==NULL) return 0; //base case
//         int lh = height(root->left); //left section
//         if(lh==-1) return -1;//if left section has unbalance
//         int rh = height(root->right);
//         if(rh==-1) return -1;
//         if((abs(lh-rh))>1) return -1;
//         return 1+max(lh,rh);
//     }

//     bool isBalanced(TreeNode* root) {
//         return height(root) !=-1;
//     }
// };


 //diameter of a BT

// class Solution {
// public:
//     int height(TreeNode* root, int &maxi) {
//         if(root == NULL) return 0;
//         int lh = height(root->left,maxi);
//         int rh = height(root->right,maxi);
//         maxi = max(maxi,lh+rh); // storing maxm diameter frmo every node
//         return 1+max(lh,rh);
//     }
// public:
//     int diameterOfBinaryTree(TreeNode* root) {
//         int maxi = 0;
//         height(root,maxi);
//         return maxi;
//     }
// };