//  Tree Traversals

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/


// void helperFnIOT(TreeNode *root, vector<int> &ans1) {
//     if(root==NULL) return;
//     helperFnIOT(root->left,ans1);
//     ans1.push_back(root->data);
//     helperFnIOT(root->right,ans1);
// }



// void helperFnprOT(TreeNode *root, vector<int> &ans2) {
//     if(root==NULL) return;
//     ans2.push_back(root->data);
//     helperFnprOT(root->left,ans2);
//     helperFnprOT(root->right,ans2);
// }

// void helperFnpoOT(TreeNode *root, vector<int> &ans3) {
//     if(root==NULL) return;
//     helperFnpoOT(root->left,ans3);
//     helperFnpoOT(root->right,ans3);
//     ans3.push_back(root->data);
// }


// vector<vector<int>> getTreeTraversal(TreeNode *root){
//     vector<int> ans1;
//     vector<int> ans2;
//     vector<int> ans3;
//     vector<vector<int>> ans;
    
//     helperFnIOT(root,ans1);
//     ans.push_back(ans1);
//     helperFnprOT(root,ans2);
//     ans.push_back(ans2);
//     helperFnpoOT(root,ans3);
//     ans.push_back(ans3);
//     return ans;

// }

//iterative way ------------------------------------------------->>>>>>>

// #include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
//*************preorder*******************

// vector<int> preorderTraversal(TreeNode* root)
// {
//     vector<int> ans;
//     stack<TreeNode*> st;
//     if(root==NULL) return ans;
//     st.push(root);
//     while(!st.empty()) {
//         for(int i=0;i<st.size();i++) {
//             TreeNode* node = st.top();
//             st.pop();
//             if(node->right!=NULL) st.push(node->right);
//             if(node->left!=NULL) st.push(node->left);
//             ans.push_back(node->val);

//         }
//     }
//     return ans;
// }

//postoder using 2 stacks***********************

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
// vector<int> postorderTraversal(TreeNode *root)
// {
//     stack<TreeNode*> st1;
//     stack<TreeNode*> st2;
//     vector<int> ans;
   
//     if(root == NULL) return ans;
//     st1.push(root);
//     while(!st1.empty()) {
//         root = st1.top();
//         st1.pop();
//         if(root->left!=NULL) st1.push(root->left);
//         if(root->right!=NULL) st1.push(root->right);
//         st2.push(root);

//     }
//     while(!st2.empty()) {
//         ans.push_back(st2.top()->data);
//         st2.pop();
//     }
//     return ans;

// }


//************levelorder traversal*********

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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()) {
//             vector<int> level; //to store level wise roots
//             int size = q.size();
//             for(int i=0;i<size;i++) {
//                 TreeNode* node = q.front();
//                 q.pop();
//                 if(node->left != NULL) q.push(node->left);
//                 if(node->right != NULL) q.push(node->right);
//                 level.push_back(node->val);
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
// };
