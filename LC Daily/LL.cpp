// Split ll IN PARTS

// class Solution {
// public:
//     int lengthOfLL(ListNode* head) {
//         int cnt = 0;
//          ListNode* temp = head;
//         while (temp != NULL) {
//             cnt++;
//             temp = temp->next;
//         }
//         return cnt;
//     }

// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         vector<ListNode*> ans;
//         ListNode* temp = head;
//         int l = lengthOfLL(head);
//         if (l < k) {
//             for (int i = 0; i < l; i++) {
//                 ans.push_back(temp);
//                 ListNode* nextTemp = temp->next;
//                 temp->next = nullptr;
//                 temp = nextTemp;
//             }
//             for (int i = 0; i < k - l; i++) {
//                 ans.push_back(NULL);
//             }
//             return ans;
//         }


//         int equalSize = l / k;
//         int rem = l % k;
//         ListNode* curr =head;
//         ListNode* prev = nullptr;
        
//         while(head){
//             int eachPartSize = equalSize;
//             ans.push_back(curr);
//             while(eachPartSize>0){
//                 prev = curr;
//                 curr = curr->next;
//                 eachPartSize--;
//             }
//             if(rem!=0 && curr!=NULL){
//                 rem--;
//                 prev = curr;
//                 curr = curr->next;
//             }
//             if(prev!=NULL){
//                 head = curr;
//                 prev->next = NULL;
//             }
//         }
//         while(ans.size()!=k) ans.push_back(NULL);
//         return ans;
//     }
// };


// spiralMatrix-4 +LL

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         vector<vector<int>> ans(m,vector<int>(n,-1));
//         int colLeft = 0;
//         int colRight = n-1;
//         int rowTop = 0;
//         int rowBottom = m-1;

//         while(head!=NULL){
//         //for L->R
//         for(int i=colLeft;i<=colRight;i++){
//             if(head==NULL) break;
//             ans[rowTop][i] = head->val;
//             head = head->next;
//         }
//         rowTop++;
//         //U->D
//         for(int i = rowTop;i<=rowBottom;i++){
//             if(head==NULL) break;
//             ans[i][colRight]=head->val;
//             head = head->next;
//         }
//         colRight--;
//         //R->L
//         for(int i=colRight;i>=colLeft;i--){
//             if(head==NULL) break;
//             ans[rowBottom][i]=head->val;
//             head= head->next;
//         }
//         rowBottom--;
//         //D->U
//         for(int i=rowBottom;i>=rowTop;i--){
//             if(head==NULL) break;
//             ans[i][colLeft]=head->val;
//             head = head->next;
//         }
//         colLeft++;
//         }

//         return ans;
//     }
// };