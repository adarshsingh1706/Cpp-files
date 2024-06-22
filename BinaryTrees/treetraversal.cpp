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